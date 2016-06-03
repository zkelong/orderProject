import QtQuick 2.4
import QtQuick.Controls 1.3
import "../controls/color.js" as Color
import "../controls/font.js" as FontUtl

Rectangle {
    id: root
    height: Utl.dp(50)

    property var dataObj: null

    Text {
        id: _tile
        anchors.top: parent.top
        anchors.topMargin: Utl.dp(10)
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.rightMargin: Utl.dp(10)
        elide: Text.ElideRight
        font.pointSize: FontUtl.FontSizeMidD
        color: "#463a3a"
        text: dataObj.title
    }

    Text {
        id: _time
        anchors.left: parent.left
        anchors.top: _tile.bottom
        anchors.topMargin: Utl.dp(10)
        font.pointSize: FontUtl.FontSizeSmallC
        color: "#6f6b6b"
        text: dataObj.publishTime + qsTr("小时前")
    }

    Text {
        id: _readTimes
        anchors.left: _time.right
        anchors.leftMargin: Utl.dp(4)
        anchors.verticalCenter: _time.verticalCenter
        font.pointSize: FontUtl.FontSizeSmallC
        color: "#6f6b6b";
        text: qsTr("阅读：") + dataObj.readTimes + qsTr("次")
    }

    Text {
        id: _zambiaText
        anchors.right: parent.right
        anchors.rightMargin: Utl.dp(10)
        anchors.verticalCenter: _time.verticalCenter
        font.pointSize: FontUtl.FontSizeSmallC
        color: "#6f6b6b"
        text: dataObj.zambiaTimes
    }

    Image {
        id: _zambiaImg
        width: Utl.dp(15)
        height: width
        anchors.verticalCenter: _zambiaText.verticalCenter
        anchors.right: _zambiaText.left
        anchors.rightMargin: Utl.dp(3)
        source: "qrc:/res/zambia.png"
    }

    Text {
        id: _discussionText
        anchors.right: _zambiaImg.left
        anchors.rightMargin: Utl.dp(15)
        anchors.verticalCenter: _time.verticalCenter
        font.pointSize: FontUtl.FontSizeSmallC
        color: "#6f6b6b"
        text: dataObj.discussionTimes
    }

    Image {
        id: _commsgImg
        width: Utl.dp(15)
        height: width
        anchors.verticalCenter: _time.verticalCenter
        anchors.right: _discussionText.left
        anchors.rightMargin: Utl.dp(3)
        source: "qrc:/res/discussion.png"
    }
}
