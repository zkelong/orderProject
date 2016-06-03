import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.2
import "./color.js" as Color
import "./font.js" as FontUtl


Rectangle {
    id:group

    property alias label: _label  //标签
    property alias labelText: _label.text //标签文字
    property alias inputField: _field //输入框
    property alias placeholderText: _field.placeholderText //占位符
    property alias maximumLength: _field.maximumLength //最大可输入长度
    property string rigthText: ""

    color: Color.Clear

    Text {//文本标签
        id:_label
        anchors.left: parent.left;
        anchors.leftMargin: Utl.dp(10)
        anchors.top: group.top;
        width: Utl.dp(70); height: parent.height
        verticalAlignment: Text.AlignVCenter
        font.pointSize: FontUtl.FontSizeSmallA
        color:Color.DarkGray
    }

    TextField{//输入框
        id:_field
        anchors.left: parent.left
        anchors.right: parent.right;
        anchors.verticalCenter: _label.verticalCenter
        height: parent.height - 2
        font.pointSize: FontUtl.FontSizeSmallA

        style: TextFieldStyle {
            textColor: Color.Black
            placeholderTextColor: Color.LightText
            background: Rectangle {
                implicitWidth: _field.width
                implicitHeight: _field.height
                border.color: Color.LightBorderColor
                border.width: Utl.dp(1)
                Text{
                    height: parent.height;
                    width: Utl.dp(80);
                    anchors.right: parent.right; anchors.rightMargin: Utl.dp(5)
                    horizontalAlignment: Text.AlignRight; verticalAlignment: Text.AlignVCenter
                    font.pointSize: FontUtl.FontSizeSmallA; color:Color.DarkGray
                    text: rigthText
                }
            }
        }
    }
}

