import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.3
import QKit 1.0
import "../controls"
import "../login"
import "../controls/font.js" as FontUtl
import "../controls/color.js" as Color
import "../api"
import "../tools.js" as Tools
Flickable {
    id: flick
    anchors.fill: parent
    contentWidth: 500
    contentHeight: 500
    boundsBehavior:Flickable.StopAtBounds
    property var imgUrl;
    property real minWidth;
    property real minHeight;
    signal itemClick
    onWidthChanged: {
        img.source=imgUrl?imgUrl:""
    }

    Timer{
        id:clickTime
        interval: 100
        running: false
        repeat: false
        onTriggered: {
            itemClick()
        }
    }

    PinchArea {
        id: pinchA
        enabled: false
        width: Math.max(flick.contentWidth, flick.width)
        height: Math.max(flick.contentHeight, flick.height)
        property real initialWidth
        property real initialHeight
        pinch.dragAxis:Pinch.NoDrag
        onPinchStarted: {
            initialWidth = flick.contentWidth
            initialHeight = flick.contentHeight
        }

        onPinchUpdated: {
            if((initialWidth * pinch.scale/minWidth)<2&&(initialHeight * pinch.scale/minHeight)<2){
                if(initialWidth * pinch.scale>=minWidth&&initialHeight * pinch.scale>=minHeight){
                    // resize content
                    flick.resizeContent(initialWidth * pinch.scale, initialHeight * pinch.scale, flick.center)
                }
            }
        }
        onPinchFinished: {
            // Move its content within bounds.
            flick.returnToBounds()
        }

        ImageLoader {
            id:img
            width: flick.contentWidth
            height: flick.contentHeight
            anchors.centerIn: parent
            //defaultSource: "qrc:/res/loadFailure.png"
            property bool isPad
            image.onStatusChanged: {
                if(image.status === Image.Ready){
                    pinchA.enabled = true
                    busy.running = false
                    isPad=image.sourceSize.width>flick.width||image.sourceSize.height>flick.height
                    minWidth=isPad?flick.width:Utl.dp(image.sourceSize.width/2)
                    minHeight=isPad?image.sourceSize.height*(flick.width/image.sourceSize.width):Utl.dp(image.sourceSize.height/2)
                    flick.contentWidth=minWidth
                    flick.contentHeight=minHeight
                }
            }
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                clickTime.start()
            }
            onDoubleClicked: {
                clickTime.stop()
                if(!pinchA.enabled)
                    return
                if(flick.contentWidth==minWidth&&flick.contentHeight==minHeight){
                    flick.resizeContent(minWidth * 2, minHeight * 2, flick.center)
                }else{
                    flick.resizeContent(minWidth, minHeight, flick.center)
                }
            }
        }
    }

    BusyIndicator {
        id:busy
        width: Utl.dp(40)
        height: Utl.dp(40)
        anchors.centerIn: pinchA
        running: true
        visible: running
        style: BusyIndicatorStyle {
            indicator: Image {
                source: "qrc:/res/loading.png"
                RotationAnimator on rotation {
                    running: true
                    loops: Animation.Infinite
                    duration: 1000
                    from: 0 ; to: 360
                }
            }
        }
    }
}

