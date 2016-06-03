import QtQuick 2.0
import "./color.js" as Color
import "font.js" as FontUtl

//评分系统视图
Item {
    id: root
    width: _list.width
    height: _list.height

    property int eScore: -1
    property int maxScore: 5

    ListView {
        id: _list
        interactive: false
        width: childrenRect.width
        height: childrenRect.height
        orientation: ListView.Horizontal
        model: _listModel
        delegate: _delegate
    }

    ListModel {
        id: _listModel
    }

    Component {
        id: _delegate
        Item {
            width: Utl.dp(13)
            height: width
            Image {
                anchors.fill: parent
                anchors.margins: Utl.dp(1)
                source: picUrl
            }
        }
    }

    onEScoreChanged: {
        _listModel.clear()
        for(var i = 0; i < maxScore; i++) {
            var item = {}
            if(i < eScore)
                item.picUrl = "qrc:/res/star1.png"
            else
                item.picUrl = "qrc:/res/star2.png"
            _listModel.append(item)
        }
    }
}

