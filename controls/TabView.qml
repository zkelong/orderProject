import QtQuick 2.4
import "../controls/color.js" as Color
import "../controls/font.js" as FontUtl
import "../api"
Rectangle {
    id:tabView

    signal tabSelected;
    property int selectedIndex:0

    // {barItem:obj, barItemProperties:obj, view:obj, viewProperties:obj}
    // barItem:  tabbar item的着色器
    // barItemProperties:  barItem 着色器属性
    // view: 主view着色器
    // viewProperties: 主view的属性
    property var tabs: [] //Tab 对象

    property var views: [] //Tab中的view对象

    property alias tabbar: tabbarView
    property alias tabbarVisible: tabbarView.visible;

    //取得指定tab的主view
    function getTab(index){
        return views[index];
    }

    onTabbarVisibleChanged: {
        if (tabbarVisible){
            contentView.anchors.bottom = tabbarView.top;
            Api.sysmsgGetInfoNum() //读取未读信息数量
        } else {
            contentView.anchors.bottom = tabView.bottom;
        }

    }

    onTabsChanged: {
        var children = contentView.children
        if (children && children.length){
            for (var i = 0; i < children.length;++i){
                var ch = children[i];
                ch.destroy();
            }
        }

        views = [];

        var items = [];
        var tab,view;
        for (i = 0; i < tabs.length; ++i){
            tab = tabs[i];
            if(tab.barItemProperties){
                items.push({component:tab.barItem, properties:tab.barItemProperties});
            } else {
                items.push(tab.barItem)
            }

            if (tab.viewProperties){
                view = tab.view.createObject(contentView,tab.viewProperties);
            } else {
                view = tab.view.createObject(contentView);
            }

            views.push(view)
            if (view.hasOwnProperty("tabView")){
                view.tabView = tabView;
            }
            view.anchors.fill = contentView;
            view.visible =selectedIndex == i;
        }
    }

    onTabSelected: {
            tabSelectedChanged();
    }
    function tabSelectedChanged(){
        for (var i = 0; i < views.length; ++i){
            views[i].visible = selectedIndex == i;
        }
    }

    Rectangle{
        id:contentView
        anchors.top: parent.top
        anchors.bottom:tabbarView.top
        width: parent.width
        color:"#000000"
    }
    Rectangle{
        id: tabbarView
        width: parent.width
        height: rect_main.height + Utl.dp(10)//background.height*0.675
        anchors.bottom:parent.bottom
        color: Color.Clear
        Image {
            id:background
            width: height * 950/135 //图片比例
            height: parent.height / 0.675
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom:parent.bottom
            source:"qrc:/res/footer.png"
        }

        Rectangle { //首页
            id: rect_main
            height: main_img.height
            anchors.left: parent.left
            anchors.right: seller.left
            anchors.verticalCenter: parent.verticalCenter
            color: Color.Clear

            StatusImage{
                id: main_img
                width: Utl.dp(29)
                height: Utl.dp(37)
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                normalSource:"qrc:/res/main_g.png"
                selectedSource:"qrc:/res/main_b.png"
                disableSource:"qrc:/res/main_g.png"
                selected:selectedIndex == 0
            }
            MouseArea {
                width: Utl.dp(45)
                height: tabbarView.height
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    selectedIndex = 0
                    tabView.tabSelected();
                }
            }
        }

        Rectangle { //我的
            height: dynamic_img.height
            anchors.right: parent.right
            anchors.left: seller.right
            anchors.verticalCenter: parent.verticalCenter
            color: Color.Clear

            StatusImage{
                id: dynamic_img
                width: Utl.dp(29)
                height: Utl.dp(37)
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
                normalSource:"qrc:/res/my_gray.png"
                selectedSource:"qrc:/res/my_blue.png"
                disableSource:"qrc:/res/my_gray.png"
                selected:selectedIndex == 2
            }

            Rectangle {
                id: redPoint
                width: Utl.dp(12)
                height: width
                radius: width/2
                visible: Api.haveUnreadMessage
                anchors.horizontalCenter: dynamic_img.right
                anchors.top: dynamic_img.top
                color: "red"
                Text {
                    anchors.centerIn: parent
                    color: "#fff"
                    font.pointSize: 6
                    font.bold: true
                    text: {
                        if(Api.haveUnreadMessage)
                            if(Api.unreadInfo.messageNum > 99)
                                return "99+"
                            else return Api.unreadInfo.messageNum
                        return ""
                    }
                }
            }
            MouseArea {
                width: Utl.dp(45)
                height: tabbarView.height
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    selectedIndex = 2
                    tabView.tabSelected();
                }
            }
        }

        Rectangle{
            id:seller
            width: Utl.dp(53)
            height: Utl.dp(53)
            radius:width
            anchors.centerIn: background
            color:Color.Clear
            StatusImage{
                width: background.height - Utl.dp(8)
                height: width
                anchors.centerIn: parent
                normalSource:"qrc:/res/seller_g.png"
                selectedSource:"qrc:/res/seller_b.png"
                disableSource:"qrc:/res/seller_g.png"
                selected:selectedIndex == 1
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    selectedIndex = 1
                    tabView.tabSelected();
                }
            }
        }
    }
}

