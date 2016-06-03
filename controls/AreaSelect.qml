import QtQuick 2.0
import "./color.js" as Color
import "font.js" as FontUtl
import "../config.js" as Config
import "../api"

Rectangle {
    id: root

    //用户选择，idx-0取消；1-确定
    signal itemSelected(int idx, int proId, string proName, int cityId, string cityName);

    clip: true
    anchors.fill: parent
    color: "#33000000"
    visible: false

    //选择的省市
    property int preSelectIdPro: -1
    property string preSelectNamePro: ""
    property int preSelectIdCity: -1
    property string preSelectNameCity: ""

    property int fontPointSize: FontUtl.FontSizeMidC
    property string selectPlace: ""
    property int marginSize: Utl.dp(10)
    property int cellHeight: Utl.dp(60)
    property int radiusSize: Utl.dp(8)

    Component.onCompleted: {
        loadProvince()
    }

    onVisibleChanged: {
        btnSure.label.color = Color.White
        btnSure.enabled = false
        _listViewProvince.currentIndex = -1
        listCity.clear()
        selectPlace = ""
        root.preSelectIdPro = -1
    }


    //    Image{
    //        id: _locationImg
    //        anchors.top: parent.top
    //        anchors.left: parent.left
    //        source: "qrc:/res/loacation.png"
    //    }

    //    Text {
    //        id: _loacatationText
    //        anchors.left: _locationImg.right
    //        anchors.leftMargin: Utl.dp(6)
    //        anchors.verticalCenter: _locationImg.verticalCenter
    //        verticalAlignment: Text.AlignVCenter
    //        font.pointSize: fontPointSize
    //        text: selectPlace//qsTr("测试")
    //    }

    MouseArea {
        anchors.fill: parent
        onClicked: {}
    }

    Rectangle{
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: _choiceButton.bottom
        anchors.bottom: parent.bottom

        Rectangle { //省
            id: _province
            anchors.top: parent.top//_locationImg.bottom
            anchors.left: parent.left//_loacatationText.left
            anchors.bottom: parent.bottom
            width: parent.width / 3
            color: "#f6f6f6"

            ListView{
                id: _listViewProvince
                anchors.fill: parent
                clip: true
                currentIndex: -1

                model: listProvince
                delegate: delegate_listViewProvince
            }
        }

        Rectangle { //市
            id: _city
            anchors.top: parent.top//_locationImg.bottom
//            anchors.topMargin: marginSize
            anchors.left: _province.right
            anchors.right: parent.right
            anchors.bottom: parent.bottom
//            radius: Utl.dp(3)
//            color: "#f0f0f0"

            ListView{
                id: _listViewCity
                anchors.fill: parent
                anchors.leftMargin: marginSize
                clip: true
                currentIndex: -1

                model: listCity
                delegate: delegate_listViewCity
            }
            //进度条
            BusyView{
                id:buyview1
            }
        }
    }

    ListModel {
        id: listProvince
    }

    ListModel {
        id: listCity
    }

    Component { //省 列表
        id: delegate_listViewProvince
        Rectangle{
            id:_section1
            anchors.left: parent.left
            anchors.right: parent.right
            height: cellHeight
            color: "#f6f6f6"

            Text{
                id: _cellText
                width: parent.width - marginSize
                height: parent.height
                anchors.left: parent.left
                anchors.leftMargin: marginSize
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                font.pointSize: fontPointSize
                color: (_listViewProvince.currentIndex == index) ? Color.LoginBtcolor : Color.Black
                elide: Text.ElideRight
                text: provinceName
            }

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    btnSure.label.color = Color.White
                    btnSure.enabled = false

                    _listViewProvince.currentIndex = index
                    loadCity(provinceId)
                    _listViewCity.currentIndex = -1
                    root.preSelectNamePro = provinceName
                    root.preSelectIdPro = provinceId
                    root.preSelectIdCity = -1
                    selectPlace = ""
                    selectPlace = _cellText.text
                }
            }

            Line {
                anchors.right: parent.right
                height: parent.height
                width: Utl.dp(1)
            }

            Line {
                anchors.bottom: parent.bottom
                color: "#d5d3d3"
            }
        }
    }

    Component { //市 列表
        id: delegate_listViewCity
        Rectangle{
            id:_section1
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.rightMargin: Utl.dp(13)
            height: cellHeight
            color: "transparent"

            Text{
                id: _cellText
                width: parent.width
                height: parent.height
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignLeft
                font.pointSize: fontPointSize
                color: (_listViewCity.currentIndex == index) ? Color.LoginBtcolor : Color.Black
                elide: Text.ElideRight
                text: cityName
            }

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    btnSure.label.color = Color.LoginBtcolor
                    btnSure.enabled = true

                    _listViewCity.currentIndex = index
                    root.preSelectIdCity = cityId
                    root.preSelectNameCity = cityName
                    selectPlace = ""
                    selectPlace = root.preSelectNamePro + qsTr(" ") + root.preSelectNameCity
                }
            }
        }
    }

    //加载省份信息
    function loadProvince() {
        buyview.running = true
        Api.addressGetProvince(function(obj) {
            buyview.running = false
            if(obj && obj.d) {
                for(var i = 0; i < obj.d.length; i++) {
                    listProvince.append({provinceId:obj.d[i].id, provinceName:obj.d[i].pn})
                }
            } else {
                tip.content = qsTr("加载失败")
                tip.show()
            }
        })
    }
    //加载市的信息
    function loadCity(pid) {
        buyview1.running = true
        listCity.clear()
        Api.addressGetCity(pid, function(obj){
            buyview1.running = false
            if(obj && obj.d) {
                for(var i = 0; i < obj.d.length; i++) {
                    listCity.append({cityId:obj.d[i].id, cityName:obj.d[i].cn})
                }
            } else {
                tip.content = qsTr("加载失败")
                tip.show()
            }
        })
    }

    //按钮
    Rectangle {
        id: _choiceButton
        width: parent.width
        height: Utl.dp(50)
        anchors.top: parent.verticalCenter//_halfTransparent.bottom
        anchors.left: parent.left
        color: buttonColor

        Button {
            height: parent.height
            width: Utl.dp(50)
            anchors.left: parent.left
            anchors.leftMargin: Utl.dp(10)
            label.text: qsTr("取消")
            label.color: Color.LoginBtcolor
            font.pointSize: FontUtl.FontSizeMidA

            onPressed: label.color = Color.White
            onReleased: label.color = Color.LoginBtcolor

            onClicked: {
                buyview1.running = false
                itemSelected(0,0,"",0,"")
            }
        }

        Button {
            id: btnSure
            height: parent.height
            anchors.right: parent.right
            width: Utl.dp(50)
            anchors.rightMargin: Utl.dp(10)
            label.text: qsTr("确定")
            font.pointSize: FontUtl.FontSizeMidA
            label.color: Color.White

            onPressed: label.color = Color.White
            onReleased: label.color = Color.LoginBtcolor

            onClicked: {
                if(root.preSelectIdPro == -1 || root.preSelectIdCity == -1) {
                    tip.content = qsTr("请选择完整地区")
                    tip.show()
                    return
                }
                itemSelected(1,preSelectIdPro,preSelectNamePro,preSelectIdCity,preSelectNameCity)
            }
        }

        Line {
            anchors.bottom: parent.bottom
            color: "#999898"
        }
    }

    TipView{
        id:tip
    }

    //进度条
    BusyView{
        id:buyview
    }
}

