import QtQuick 2.4
import "./color.js" as Color
import "./font.js" as FontUtl

Rectangle {
    id:root
    anchors.fill: parent
    color:Color.Clear
    visible: false
    property alias content:_content.text ;   //要显示的内容
    property alias title:_title.text         //要显示的标题
    property alias makeColor:make.color      //蒙版颜色
    property string leftName:qsTr("取消")     //确定按钮的名称
    property string rightName:qsTr("确定")    //取消按钮的名称
    signal leftAction
    signal rightAction
    Rectangle{
        id:make
        anchors.fill: parent
        color: Color.Black
        opacity: 0.7
        MouseArea{
            anchors.fill: parent
        }
    }
    Rectangle{
        id:dialog
        width: Utl.dp(270)
        height: _no.y+_no.height
        anchors.centerIn: parent
        color:Color.White
        radius: Utl.dp(7)
        Text {
            id: _title
            anchors.top: parent.top
            height:_title.text?Utl.dp(40):0
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.bold : true
            font.pointSize: FontUtl.FontSizeMidE
        }
        Text {
            id: _content
            width: parent.width-Utl.dp(20)
            anchors.top: _title.bottom
            anchors.topMargin:Utl.dp(15)
            anchors.horizontalCenter: parent.horizontalCenter
            font.pointSize: FontUtl.FontSizeMidD
            wrapMode: Text.Wrap
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        Line{
            anchors.bottom:_no.top
        }
        Button{
            id:_no
            width: parent.width/2-0.5
            height:Utl.dp(40)
            anchors.top:_content.bottom
            anchors.topMargin:Utl.dp(15)
            scaleOnPressed:false
            container.anchors.centerIn:_no
            label.text:leftName
            label.color:"#007aff"
            font.pointSize: FontUtl.FontSizeMidC
            onClicked: {
                root.visible=false
                leftAction()
            }
        }
        Line{
            width:1
            anchors.left:_no.right
            anchors.top:_no.top
            anchors.bottom:parent.bottom
        }
        Button{
            id:_yes
            width: parent.width/2-0.5
            height:Utl.dp(40)
            anchors.top:_no.top
            anchors.right:parent.right
            scaleOnPressed:false
            container.anchors.centerIn:_yes
            label.text: rightName
            label.color:"#007aff"
            font.pointSize: FontUtl.FontSizeMidC
            onClicked: {
                root.visible=false
                rightAction()
            }
        }
    }
}

