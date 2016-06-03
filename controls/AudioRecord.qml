import QtQuick 2.4
import QtQuick.Dialogs 1.2
import QAudio 1.0
import "./color.js" as Color
import "font.js" as FontUtl
import "../api"

Rectangle {
    id:root
    color: Color.White
    property int audioState:0 //0准备录音，1录音中，2播放中，3空闲
    property int duration:0
    property int position:0
    property var qaudio
    property string filePath
    property string savePath:""
    signal saveVoice
    signal deleteVoice
    signal stopStatus

    onVisibleChanged: {
        if(!qaudio){
            console.log("-----QAudio init-----")
            qaudio=audioItem.createObject(root)
        }
        if(visible){
            if(savePath!=""){
                console.log("savePath= "+savePath)
                audioState=3
                filePath=savePath
                prompt.text=duration
                borderBar.maxValue=duration
                symbol.visible=true
            }
        }
    }

    MouseArea{
        anchors.fill: parent
        onClicked: {
        }
    }
    Text {
        id: prompt
        text: qsTr("点击录音")
        anchors.horizontalCenter:circular.horizontalCenter
        anchors.top:parent.top
        anchors.topMargin:Utl.dp(29)
        color:Color.LightText
        font.pointSize:FontUtl.FontSizeMidB
    }
    Text {
        id: symbol
        visible:false
        text: qsTr("”")
        anchors.left:prompt.right
        anchors.verticalCenter:prompt.verticalCenter
        color:Color.LightText
        font.pointSize:FontUtl.FontSizeMidB
    }
    Rectangle{
        id:circular
        width: Utl.dp(103)
        height: Utl.dp(103)
        anchors.top: parent.top
        anchors.topMargin:Utl.dp(75)
        anchors.horizontalCenter: parent.horizontalCenter
        color: Color.Clear
        border.width: 4
        border.color: Color.VeryLightGray
        radius: width
        BorderBar{
            id:borderBar
            width: parent.width*2+2
            height: parent.height*2+2
            anchors.centerIn: parent
            value:0
            maxValue:1000
            scale: 0.5
            function play(){
                console.log("maxValue "+maxValue)
                animation.start()
            }
            NumberAnimation {
                id:animation
                target: borderBar
                property: "value"
                running: false
                from: 0
                to:borderBar.maxValue
                duration: borderBar.maxValue
                onStopped: {
                    playBtn.source="qrc:/res/playBtn.png"
                    audioState=3
                }
            }
        }

        Rectangle{
            id:recordBtn
            width: Utl.dp(77)
            height: Utl.dp(77)
            color: audioState!=0?Color.Clear:"#f75448"
            radius: width
            anchors.centerIn: parent
            Image {
                id: playBtn
                width: Utl.dp(40)
                height: Utl.dp(40)
                visible: audioState!=0
                anchors.centerIn: parent
                source: "qrc:/res/playBtn.png"
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    borderBar.reset()
                    animation.stop()
                    if(audioState==2||audioState==3){
                        qaudio.play(filePath)
                    }else{
                        qaudio.recorder()
                    }
                }
            }
        }
    }

    Component{
        id:audioItem
        QAudio{
            onStatusChanged:{
                //1：录音状态 2：录音停止 3：播放状态 4：播放停止
                console.log("-------------status------------ "+status)
                switch(status){
                 case 1:
                     playBtn.source="qrc:/res/stopBtn.png"
                     prompt.color=Color.LightText
                     audioState=1
                     break;
                 case 2:
                     if(duration<5){
                         audioState=0
                         borderBar.reset()
                         animation.stop()
                         filePath=""
                         prompt.text=qsTr("录制时间太短，请重新录制")
                         symbol.visible=false
                     }else{
                        playBtn.source="qrc:/res/playBtn.png"
                        filePath = "file:///"+qaudio.getFilePath()
                        audioState=3
                     }
                     break;
                 case 3:
                     prompt.color=Color.LightText
                     playBtn.source="qrc:/res/stopBtn.png"
                     audioState=2
                     break;
                 case 4:
                     playBtn.source="qrc:/res/playBtn.png"
                     borderBar.value=borderBar.maxValue
                     audioState=3
                     stopStatus()
                     break;
                }
            }
            onError:{
                console.log("-------------Error------------ "+err)
                switch(err){
                case 1:
                    console.log("录音错误")
                    audioState=0
                    prompt.text=qsTr("录音错误!")
                    prompt.color=Color.Red
                    symbol.visible=false
                    break;
                case 2:
                    console.log("播放错误")
                    audioState=3
                    prompt.text=qsTr("播放异常!")
                    prompt.color=Color.Red
                    symbol.visible=false
                    break;
                }
            }

            onDurationChanged:{
                var second=Math.floor(duration/1000)
                if(audioState==1&&root.duration==second){
                    return
                }
                console.log(second)
                root.duration=second
                if(audioState==2){
                    borderBar.maxValue=duration
                    borderBar.play()
                }
                if(second<10){
                    second="0"+second
                }
                if(second>89&& audioState==1){
                    qaudio.recorder()
                    audioState=3
                }
                if(audioState!=2){
                    prompt.text=second
                    symbol.visible=true
                }
            }
            onPositionChanged:{
                var second=Math.floor(position/1000)
                console.log("second "+second)
                if(second<10){
                    second="0"+second
                }
                prompt.text=second
            }
        }
    }
    Text {
        id: prompt2
        text:"录音时间长为5秒到90秒"
        anchors.horizontalCenter:circular.horizontalCenter
        anchors.top:circular.bottom
        anchors.topMargin:Utl.dp(33)
        color:Color.LightText
        font.pointSize: FontUtl.FontSizeMidB
        visible:audioState==0||audioState==1
    }

    Line{
        width: parent.width
        anchors.top:cancelBtn.top
        visible:cancelBtn.visible
    }
    Rectangle{
        id:cancelBtn
        width: parent.width/2
        height: Utl.dp(41)
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        color: Color.Clear
        visible:audioState==3
        Text {
            text: savePath?qsTr("删除录音"):qsTr("取消")
            anchors.centerIn: parent
            font.pointSize:FontUtl.FontSizeMidE
            color:"#18b4ed"
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                if(savePath!=""){
                    deleteAudio()
                    deleteVoice()
                }else{
                    hideAudio()
                    deleteAudio()
                }
            }
        }
    }
    Line{
        width:1
        visible: restartBtn.visible
        anchors.top:cancelBtn.top
        anchors.left:cancelBtn.right
    }
    Rectangle{
        id:restartBtn
        width: parent.width/2
        height: Utl.dp(41)
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        color: Color.Clear
        visible: cancelBtn.visible
        Text {
            text: savePath?qsTr("重新录制"):qsTr("保存")
            anchors.centerIn: parent
            font.pointSize:FontUtl.FontSizeMidE
            color:"#18b4ed"
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                if(savePath!=""){
                    deleteAudio()
                }else{
                    savePath=filePath
                    saveVoice()
                }
            }
        }
    }
    function deleteAudio(){
        audioState=0
        borderBar.reset()
        animation.stop()
        root.duration=0
        filePath=""
        savePath=""
        symbol.visible=false
        prompt.text=qsTr("点击录音")
    }
}

