import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.2
import "./color.js" as Color
import "./font.js" as FontUtl
import "../controls"
TextField{//输入框
    id:_field
    property bool isDelete: true
    property int nmb:0
    property var placeholderColor:Color.LightText
    property string inputColor: Color.Black
    property alias buttonDelete: _delete;
    property bool buttonDeleteVisible:true;//是否使用X删除键
    z:1
    focus: false
    width:parent.width-Utl.dp(11)
    height:parent.height-2
    anchors.left: parent.left
    anchors.leftMargin: Utl.dp(10)
    anchors.verticalCenter:parent.verticalCenter
    font.pointSize: FontUtl.FontSizeSmallA
//    selectByMouse:true
    onEditingFinished:{
        console.log("丢失焦点")
        _delete.visible=false
    }

    onFocusChanged: {
        nmb++
        console.log(nmb+"获得焦点" + _field.text.length)
        if(nmb==1){
            if(_field.text.length>0){
                _delete.visible=true
            }else{
                return
            }
        }else{
            nmb=0
        }
    }

    style: TextFieldStyle {
        textColor: inputColor
        placeholderTextColor:placeholderColor
        background: Rectangle {
            implicitWidth: _field.width
            implicitHeight: _field.height
        }
    }
    onLengthChanged:{
        if(buttonDeleteVisible){
            if(length>0&&isDelete){
                _delete.visible=true
            }else{
                _delete.visible=false
            }
        }
    }
    Button{
        id:_delete
        z:2
        width: Utl.dp(30)
        height: parent.height
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        icon.width: Utl.dp(15)
        icon.height: Utl.dp(15)
        container.anchors.centerIn: _delete
        visible:false
        scaleOnPressed: false
        icon.normalSource: "qrc:/res/x_p.png"
        icon.selectedSource:"qrc:/res/x.png"
        onClicked: {
            _field.text=""
            _delete.visible=false
        }
    }
}

