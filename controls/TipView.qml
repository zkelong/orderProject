import QtQuick 2.4
import "./color.js" as Color
import "./font.js" as FontUtl

Rectangle {
    id:root
    property alias content: _contentText.text //要显示的内容
    property int times: 1000
    property alias tipView_root_width: root.width
    property alias _contentText_width: _contentText.width

   // color: "#88000000" //背景颜色
    color: "#000000"
    visible: false
    anchors.centerIn: parent
    opacity: 0.80
//    border.color: Color.Bordercolor
//    border.width: Utl.dp(1)
    radius: Utl.dp(6)

    signal displayEnd()

    Text{
        id:_contentText
        anchors.centerIn: root
        maximumLineCount: 10
        font.pointSize: FontUtl.FontSizeSmallA
        color: Color.White
        wrapMode: Text.WrapAnywhere
        horizontalAlignment:Text.AlignHCenter
        verticalAlignment :Text.AlignVCenter
        lineHeight: 1.5

        onTextChanged: {
            resize()
        }
    }

    Component.onCompleted: {
        resize()
    }

    function resize(){
        if(!parent || !_contentText){
            return
        }
        if(_contentText.width > parent.width/5*4){
            _contentText.width = parent.width/5*4
        }
        root.width = _contentText.width + Utl.dp(20)
        root.height = ((_contentText.height  + Utl.dp(12.5)) > Utl.dp(40)) ? _contentText.height + Utl.dp(12.5) : Utl.dp(40)
    }

    function resize_two(){
        if(!parent || !_contentText){
            return
        }
        if(_contentText.width > parent.width/5*4){
            _contentText.width = parent.width/5*4
        }
        root.width =  (_contentText.width  + Utl.dp(20)) > Utl.dp(200) ? _contentText.width  + Utl.dp(20) :Utl.dp(200)
        root.height = ((_contentText.height  + Utl.dp(15)) > Utl.dp(45)) ? _contentText.height + Utl.dp(15) : Utl.dp(45)
    }
        //抖
    SequentialAnimation {
        id:showAnimate
        running: false
        ScaleAnimator { target: root; from: 0.5; to: 1.2; duration: 100 }
        ScaleAnimator { target: root; from: 1.2; to: 0.8; duration: 100 }
        ScaleAnimator { target: root; from: 0.8; to: 1.1; duration: 100 }
        ScaleAnimator { target: root; from: 1.1; to: 0.9; duration: 100 }
        ScaleAnimator { target: root; from: 0.9; to: 1; duration: 100 }
        onStopped: {
            timer.start()
        }
    }

    //提示框不抖
    SequentialAnimation {
        id:noShowAnimate
        running: false
        ScaleAnimator { target: root; from: 0.5; to: 1.0; duration: 250 }
        onStopped: {
            timer.start()
        }
    }


    ScaleAnimator {
        id:hidenAnimate
        running: false
        target: root; from: 1.0; to: 0.8; duration: 200
        onStopped: {
            root.visible = false
            displayEnd()
        }
    }
//加长条
    function show(){
        if (root.visible)
            return
        root.scale = 0.5
        root.visible = true
        noShowAnimate.start()
        resize_two()

    }
    //短条
    function show_two(){
        if (root.visible)
            return
        root.scale = 0.5
        root.visible = true
        noShowAnimate.start()

    }

    function hide(){
        if(hidenAnimate.running){
            return
        }
        if(!root.visible){
            root.visible = false
        }

        hidenAnimate.start()
    }

    Timer{
        id:timer
        interval: times
        repeat: false
        running: false
        onTriggered: {
            hide()
        }
    }
}
