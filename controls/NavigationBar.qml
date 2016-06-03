import QtQuick 2.4
import "./color.js" as Color
import "./font.js" as FontUtl
//标题栏
Rectangle {
    id: root
    property alias title: _title.text
    property alias titleLabel: _title
    property alias background:_background
    property alias content:_content
    property alias backBtnData: _backBtn
    property bool showBackButton: true //显示返回按钮
    property alias backBtnIcon: _backBtn.icon
    property alias bottomLine: bottom_line
    signal backClicked() //点击返回按钮

    width: parent.width
    height: Utl.dp(55)
    y:statusBar.height
    anchors.left: parent.left
    anchors.right: parent.right
    color: Color.Clear

    Rectangle {
       id:_background
       anchors.fill: parent
       color: Color.White
    }
    Rectangle{
       id:statusBar
       width: parent.width
       height: Qt.platform.os === "ios"?Utl.dp(20):0
       anchors.bottom: parent.top
       color:_background.color
       opacity:_background.opacity
       visible:_background.visible
       enabled: false
    }

    Rectangle{
        id:_content
        width: parent.width
        height: Utl.dp(55)
        anchors.top: parent.top
        color: Color.Clear
        Text{
            id:_title
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: Text.AlignHCenter
            color: Color.BlueTheme
            font.pointSize: FontUtl.FontSizeBigB
        }
    }

    Button{
        id: _backBtn
        visible: showBackButton
        width: Utl.dp(40)
        height: parent.height
        anchors.verticalCenter: parent.verticalCenter
        icon.width: Utl.dp(29)
        icon.height: Utl.dp(29)
        icon.normalSource: "qrc:/res/my_back.png"
        onClicked: {
            root.backClicked()
        }
    }
    Line{
        id:bottom_line
        anchors.bottom: parent.bottom
        visible: false
    }
}

