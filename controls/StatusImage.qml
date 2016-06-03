import QtQuick 2.0
import QtGraphicalEffects 1.0

Rectangle {
    id:root
    property bool selected: false //是否处于选中状态,会根据此状态来切换normalSource,selectedSource的显示
    property alias normalSource: normalImage.source //正常情况下的图片地址
    property alias selectedSource: selectedImage.source //选中状态下的图片地址
    property alias disableSource: disableImage.source //禁用情况下的图片地址
    property bool cache: false //是否启用缓存
    property var sueSaturation:null;

    color: "transparent"

    function update(){
        if (sueSaturation == null)
            return

//        sueSaturation.visible = selected === false && enabled;

        if (enabled){
            if (selected){
                if (selectedSource == ""){
                    sueSaturation.hue = 0.0;
                    sueSaturation.saturation = 0.0;
                    sueSaturation.lightness = -0.4;
                }

            } else {
                sueSaturation.hue = 0.0;
                sueSaturation.saturation = 0.0;
                sueSaturation.lightness = 0.0;
            }

        } /*else {
            if (disableSource == ""){
                sueSaturation.hue = 0.0;
                sueSaturation.saturation = -0.6;
                sueSaturation.lightness = 0.6;
            }
        }*/
    }

    onSelectedChanged: {
        update()
    }

    onEnabledChanged: {
        update()
    }

    Image {
        id: normalImage
        z:0
        anchors.fill: parent
        visible: selected === false && enabled
        smooth: smooth
        cache:cache
        onStatusChanged: {
            if (normalImage.status === Image.Ready){

                if (root.width == 0 && root.height == 0){
                    root.width = normalImage.implicitWidth;
                    root.height = normalImage.implicitHeight;
                } else if (root.width == 0){
                    root.width = Math.floor(normalImage.implicitWidth * root.height / normalImage.implicitHeight);
                } else if (root.height == 0){                    
                    root.height = Math.floor(normalImage.implicitHeight * root.width / normalImage.implicitWidth);
                }

                if (sueSaturation === null && selectedSource == "" && disableSource == "" && normalImage.status === Image.Ready){
                    sueSaturation = hslComponent.createObject(root);
    //                sueSaturation.visible = Qt.binding(function(){return selected === false && enabled;})
                }
            }

        }
    }

    Image {
        id: selectedImage
        z:2
        anchors.fill: parent
        visible: selected && enabled
        smooth: smooth
        cache:cache
    }

    Image {
        id: disableImage
        z:3
        anchors.fill: parent
        visible: enabled === false
        smooth: smooth
        cache:cache
    }

    Component{
        id:hslComponent
        HueSaturation {
            id:sueSaturation
            cached: true
            z:1
            smooth: smooth
            anchors.fill: normalImage
            source:normalImage
            hue: 0.0
            saturation: 0.0
            lightness: 0.0
        }
    }

}

