import QtQuick 2.4
import "."
import "./font.js" as FontUtl


Item {
    id:root
    height: childrenRect.y + childrenRect.height
    property double maximumValue: 100 //最大值, 将会取value/maximumValue的结果做为百分比
    property double minimumValue: 0 //最小值,如果value小于此值，那么使用此值做为计算标准
    property double value: 0 //当前值
    property double percent: Math.max(value,minimumValue)/maximumValue //当前值和最大值的比值
    property alias color: progress.color

    function doAnimation(){
        pam.start()
    }

    Text{
        id:text
        anchors.right: parent.right; anchors.rightMargin: Utl.dp(2)
        color: "white"
        font.pointSize: FontUtl.FontSizeSmallB
        text: parseFloat( (progress.width/root.width)*100).toFixed(2) + "%"
    }


    Rectangle{
        id:bg_progress
        height: Utl.dp(4)
        width: parent.width
        opacity: 0.5
        color:"#000"
        anchors.left: parent.left
        anchors.top: text.bottom
    }

    Rectangle{
        id:progress
        height: bg_progress.height; width: 0
        anchors.top: bg_progress.top
        anchors.left: bg_progress.left

        gradient: Gradient{
            GradientStop{position:1.0;color:"#66801b"}
            GradientStop{position: 1.0;color:"#d1fb56"}
        }

        NumberAnimation {
            id:pam
            target: progress; running: false;
            property: "width"
            duration: 800
            easing.type: Easing.InOutQuad
            from: 0; to: percent*root.width
        }

//        PropertyAnimation on width {
//            to: percent*root.width; duration: 1000; easing.type: Easing.InOutQuad;
//        }

    }

}

