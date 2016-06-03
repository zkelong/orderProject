import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.3
import QtGraphicalEffects 1.0
import QKit 1.0
import "../controls"
import "../controls/color.js" as Color
import "../controls/font.js" as FontUtl

Rectangle{
    id:root
    width: Utl.dp(50)
    height: Utl.dp(50)
    color: Color.Clear
    radius: root.width
    smooth: true
    antialiasing:true
    property alias circle:_circle
    property alias colorMask:_colorMask
    property alias source: _avatar.source
    property alias defaultSource: _avatar.defaultSource
    property alias avatar:_avatar
    property alias mask:_mask
    property alias delbtn:_delbtn
    property bool selected: false
    property double hue:0.0
    property double saturation:0.0
    property double lightness:-0.3
    onSelectedChanged: {
        if(selected){
            colorMask.visible = true;
        }else{
            colorMask.visible = false;
        }
    }

    Rectangle{
        id: _circle
        anchors.fill: parent
        z:2
        color: Color.Clear
        border.color: Color.White
        border.width: 1
        radius:width
        smooth: true
        antialiasing:true
    }

    Rectangle{
        id:_mask
        width: parent.width
        height: parent.height
        anchors.centerIn: _circle
        radius: root.radius
        color:  "#fff"
        smooth: true
    }

    ImageLoader{
        id: _avatar
        width: parent.width
        height: parent.height
        image.fillMode: Image.PreserveAspectCrop
        defaultSource:"qrc:/res/default_Avatar.jpg"
        smooth: true
        antialiasing:true
        image.sourceSize.width: 140
        image.sourceSize.height:140
        opacity: 0
    }

    OpacityMask {
        anchors.fill: _mask
        source: _avatar
        maskSource: _mask
    }

    Rectangle{
        id:_colorMask
        anchors.fill: parent
        color: "#60000000"
        visible: false
        radius: parent.radius
    }

    Button{
       id:_delbtn
       width: Utl.dp(15)
       height: Utl.dp(15)
       visible: false
       scaleOnPressed:false
       anchors.horizontalCenter: parent.right
       anchors.verticalCenter: parent.top
       icon.width: Utl.dp(15)
       icon.height: Utl.dp(15)
       icon.normalSource: "qrc:/res/del.png";
       onClicked: {
           _delbtn.selected=!_delbtn.selected
           _avatar.source=""
       }
    }
}


