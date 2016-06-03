import QtQuick 2.0

/*
  TabItem组件必须实现 selected属性
*/
Rectangle{
    id:item
    property alias label: _txt
    property alias icon: _icon
    property bool selected: false
    height: parent.height
    color: "transparent"
    anchors.verticalCenter: parent.verticalCenter
    onSelectedChanged: {
        _icon.selected = selected;
    }

    StatusImage{
        id:_icon
        width: Utl.dp(65)
        height: Utl.dp(3.5)
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: -1
        smooth: true
        selected: selected
    }

    Text {
        id: _txt
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        color: selected ? "#0000ff" : "#000000"
        font.family: "黑体"
        font.pointSize: selected ? 16 : 14
    }
}



