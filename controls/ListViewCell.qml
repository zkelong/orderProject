import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.2
import "./color.js" as Color
import "./font.js" as FontUtl

Rectangle {

    color:Color.Clear
    width: parent.width

    property alias titleText: _lable.text //标题文字
    property alias titleLabel: _lable  //标题标签
    property alias arrowImage: _rdArrow //箭头图标

    Text{
        id:_lable
        anchors.left: parent.left; anchors.leftMargin: Utl.dp(10)
        anchors.verticalCenter: parent.verticalCenter
        width: Utl.dp(60); height: parent.height
        verticalAlignment: Text.AlignVCenter
        font.pointSize: FontUtl.FontSizeSmallA
        color:Color.DarkGray
    }

    Image{
        id:_rdArrow
        width: Utl.dp(12)
        height: Utl.dp(15)
        source: "qrc:/res/select_p.png"
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.rightMargin: Utl.dp(10)
    }

    Line{
        anchors.bottom: parent.bottom
    }
}

