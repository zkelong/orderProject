import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.3
import "../tools.js" as Tools
Rectangle{
    id:root
    property alias running: busy.running
    property int i:0;
    anchors.fill: parent
    color: "#55000000"
    visible: running

    BusyIndicator {
        id:busy
        width: Utl.dp(40)
        height: Utl.dp(40)
        anchors.centerIn: parent
        running: false
        style: BusyIndicatorStyle {
                indicator: Image {
                    source: "qrc:/res/loading.png"
                    RotationAnimator on rotation {
                        running:true
                        loops: Animation.Infinite
                        duration: 1000
                        from: 0 ; to: 360
                    }
                }
            }
    }

    MouseArea{
        anchors.fill: root
        onClicked: {
            timer.start()
            console.log("BusyView onClicked")
        }
    }

    Timer{
        id:timer
        running:false
        interval: 2000; repeat: true
        onTriggered: {
            timer.stop()
            timer2.stop()
            root.running=false
            Tools.hidenBusy()
        }
    }

    onRunningChanged: {
        if(running){
            timer2.start()
        }else{
            timer2.stop()
            i=0
        }
    }

//    Timer{
//        running:timer2.running
//        interval:1000
//        repeat: true
//        onTriggered: {
//            console.log("请求计时："+(i++))
//        }
//    }

    Timer{
        id:timer2
        running:false
        interval: 30000; repeat: true
        onTriggered: {
            timer2.stop()
            root.running=false
            Tools.showTip(qsTr("请求超时"))
            Tools.hidenBusy()
        }
    }
}


