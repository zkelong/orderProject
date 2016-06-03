import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.3
import QtQuick.Window 2.0
import QtGraphicalEffects 1.0

import "../controls/color.js" as Color

Item {
    id:mainRect
    width: rectWidth
    height: rectHeight

    property int rectWidth: 90
    property int rectHeight: 90
    property string imageUrl: ""
    // 边框
    property color borderColor: Color.Clear
    property int borderWidth:0

    // 点击事件
    signal tapOnPicture()

    Canvas {
        id: canvas
        width: parent.width; height: parent.height
        property real hue: 0.0
        onPaint: {
                    var ctx = getContext("2d")
                    ctx.lineWidth = borderWidth
                    // store current context setup
                    ctx.save()
                    ctx.strokeStyle = borderColor;
                    ctx.beginPath()
                    ctx.arc(mainRect.width/2, mainRect.height/2, mainRect.width/2, mainRect.width/2, Math.PI * 2, true);
                    ctx.closePath()
                    ctx.fill()
                    //
                    ctx.globalCompositeOperation = "source-in";
                    ctx.drawImage(imageUrl, 0, 0,mainRect.width,mainRect.height)
                    // draw stroke around path
                    ctx.closePath()
                    ctx.stroke()
                    // restore previous setup
                    ctx.restore()
                }
                Component.onCompleted: {
                    loadImage(imageUrl)
                }
    }
    function repaintUI()
    {
        canvas.requestPaint();
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            tapOnPicture()
        }
    }
}
