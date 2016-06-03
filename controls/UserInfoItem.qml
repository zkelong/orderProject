import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.2

import "../service"
import "./color.js" as Color
import "./font.js" as FontUtl

/*
    annotation:
    default visible==true    1、_label  2、_description_label 3、rightImage
    default visible==false   1、_topicCell  2、_right_label 3、distanceLine 4、_right_text
*/

Rectangle {
    id:root
    color: Color.Clear

    property alias label: _label           //标签
    property alias labelText: _label.text  //标签文字
    property alias labelColor: _label.color  //标签文字

    property alias decription: _description_label    // 描述标签
    property alias decriptionText: _description_label.text            //文字内容
    property alias decriptionColor: _description_label.color          //文字颜色
    property alias decriptionSize: _description_label.font.pointSize  //文字大小
    property alias textField:_textField                               //输入框
    property string placeholder;                                      //输入框提示
    property alias rightLabelText: _right_label      // 右边的标签 图标左边
    property alias rightLabelColor: _right_label.color      // 右边的标签 图标左边
    property alias rightTextText: _right_text      // 右边的标签
    property alias txtLeftImgVisible: _text_leftImg.visible
    // 下方线是否显示
    property alias distanceLineVisible: distanceLine.visible  // 左边距离10
    property bool isClickedBg: false                          // 点击是否需要背景效果
    property alias theDistanceLine: distanceLine //
    property alias theDistanceLineWidth: distanceLine.width //
    // 右边图标属性
    property int rightImageRightMargin:10;
    property alias rightImageWidth: rightImage.width
    property alias rightImageHeight: rightImage.height
    property alias rightImageVisible: rightImage.visible
    property string rightImageSource: "qrc:/res/choice_normal.png"
    // 基本资料选择语言/话题 默认隐藏
    property var lists:[];
    property var value;
    signal next()  // 整行点击事件
    property bool onClicked_vis: true;
    Rectangle{
        id: item
        anchors.top: parent.top;
        width: parent.width
        height: parent.height
        Text {//文本标签
            id:_label
            anchors.left: parent.left; anchors.leftMargin: Utl.dp(15)
            anchors.top: item.top;
            width: Utl.dp(70); height: parent.height-Utl.dp(1)
            verticalAlignment: Text.AlignVCenter
            font.pointSize: FontUtl.FontSizeMidB
            color:Color.BlackB
        }

        Text{
            id:_description_label
            anchors.left: _label.right
            anchors.leftMargin: Utl.dp(15)
            anchors.right: rightImage.left
            anchors.rightMargin: Utl.dp(10)
            anchors.verticalCenter: _label.verticalCenter
            elide: Text.ElideRight
            color:Color.Black
            font.pointSize: FontUtl.FontSizeMidD
        }       

        NewTextField{
            id:_textField
            visible: false
            height: parent.height-1
            anchors.left: _label.right
            anchors.leftMargin: Utl.dp(5)
            anchors.right: rightImage.left
            anchors.rightMargin: Utl.dp(10)
            font.pointSize:FontUtl.FontSizeMidB
            placeholderText:focus ? "" :placeholder
            placeholderColor:Color.LightGrayC
            onTextChanged: {
                next()
            }
        }

        Image {
            id: rightImage
            height: Utl.dp(11)
            width:  Utl.dp(5.5)
            visible: _right_text.visible?false:true
            anchors.right: parent.right;
            anchors.rightMargin: Utl.dp(rightImageRightMargin)
            anchors.verticalCenter: _label.verticalCenter
            source: rightImageSource
        }

        Text{
            id:_right_label
            visible: false
            anchors.right: rightImage.left
            anchors.rightMargin: Utl.dp(15)
            anchors.left: _label.right
            anchors.leftMargin: Utl.dp(10)
            elide: Text.ElideRight
            horizontalAlignment: Text.AlignRight
            //wrapMode: Text.WordWrap
            anchors.verticalCenter: _label.verticalCenter
            font.pointSize:  FontUtl.FontSizeMidB //FontUtl.FontSizeSmallA
        }

        // 下面的用于关于中的显示 其他页面不做更改
        Text{
            id:_right_text
            visible: false
            anchors.right: parent.right;anchors.rightMargin: Utl.dp(10)
            wrapMode: Text.WordWrap
            anchors.verticalCenter: _label.verticalCenter
            font.pointSize: FontUtl.FontSizeMidC  // FontUtl.FontSizeSmallA
        }
        Image {
            id: _text_leftImg
            visible: false
            anchors.right: _right_label.left;
            anchors.rightMargin: Utl.dp(10)
            anchors.verticalCenter: _label.verticalCenter
            width: Utl.dp(8)
            height: Utl.dp(8)
            source: "qrc:/res/red_dot.png"
        }

        Line{
            id: distanceLine
            visible:false
            color:Color.VeryLightGray
            anchors.bottom: item.bottom
            anchors.left: _description_label.left
            width: parent.width-Utl.dp(10)
        }

    }

    MouseArea {
        id:onClicked
        visible: onClicked_vis
        anchors.fill: parent
        onClicked: {
            next()
        }
        onPressed: {
            if(isClickedBg){
                item.color = Color.rowClickColor
            }
        }
        onReleased: {
            if(isClickedBg){
                item.color = Color.Clear
            }
        }
        onExited: {
            if(isClickedBg){
                item.color = Color.Clear
            }
        }
        onCanceled: {
                item.color = Color.Clear
        }
    }
}

