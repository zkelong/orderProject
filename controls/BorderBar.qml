import QtQuick 2.4
import QtQuick.Dialogs 1.2
import "./color.js" as Color
import "font.js" as FontUtl
Rectangle{
    id: contair
    color: "#00000000"
    radius: 360
    rotation:270
    property var rad: width/2
    property var value: 0
    property var maxValue: 1000
    onValueChanged: {
        canvas.requestPaint()
    }
    function reset(){
        value=0
        canvas.ctx.reset()
    }
    Canvas{
        id: canvas
        anchors.fill: parent
        contextType: "2d"
        property var ctx;
        onPaint: {
            ctx = getContext("2d");
            ctx.lineWidth = 4
            ctx.strokeStyle ="#18b4ed"
            ctx.beginPath();
            ctx.arc(rad,rad,rad-5,0,Math.PI/180 * ((value / maxValue) * 360),false);
            ctx.stroke();
        }
    }
//    MouseArea{
//        anchors.fill: parent
//        onClicked:{
//            canvas.ctx.reset()
//            value=0
//            animation.start()
//        }
//    }
}
