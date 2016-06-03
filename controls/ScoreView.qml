import QtQuick 2.0
import "./color.js" as Color
import "font.js" as FontUtl

//评分系统视图
Rectangle {
    id: root
    width: row.width
    height: row.height
    color:Color.Clear
    property int num:5
    property int max:5
    property int imgWidth;
    property string imgUrl:"qrc:/res/star1.png";
    property string imgUrl2:"qrc:/res/star2.png";
    property alias spacing:row.spacing
    property bool isSelect:false
    property var stars:[]

    Component.onCompleted: {
        if(num>=0){
            for(var i=0;i<max;i++){
                var item =star.createObject(row,{id:i,imgWidth:imgWidth})
                stars.push(item)
            }
        }
    }

    Row{
        id:row
        spacing:2
    }

    Component{
        id:star
        Rectangle{
            property int imgWidth:Utl.dp(13)
            property int id:0
            width: imgWidth
            height: width
            color:Color.Clear
            Image {
                anchors.fill: parent
                source: id<num?imgUrl:imgUrl2
            }
            MouseArea{
                anchors.fill: parent
                visible: isSelect
                onClicked: {
                    num=id+1
                }
            }
        }
    }
}

