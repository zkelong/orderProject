import QtQuick 2.4
import "./"
import "./color.js" as Color
import "./font.js" as FontUtl
import "../config.js" as Config

View {
    id: root
    width: parent.width
    height: parent.height
    hidenTabbarWhenPush: true
    color: Color.VeryLightGray
    property bool hidenShare: true //是否隐藏分享按钮
    property string url: "" //网址
    property string title: ""  //标题
    property string detailText: "" //简介
    property bool back_click: true  //自己页面的返回键事件处理
    property var webVew: null

    function click_back() {  //android返回webView页面要闪烁
        root.visible = false
        root.navigationView.pop();
    }

    Component{
        id:webCmp
        WebView{
            id:_webView
            property bool firstLoading: true
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: navBar.bottom
            anchors.bottom: parent.bottom
            visible: true
            url: url
            onLoadingChanged: {
                if (_webView.loading == false){
                    busy.running = false;
                    _webView.visible = true;
                } else {
                    firstLoading = false;
                    busy.running = true;
                }
            }

            Component.onCompleted: {
                _webView.visible = false;
            }
        }
    }

    Component.onCompleted: {
        webVew = webCmp.createObject(root);
        webVew.url = url;
    }

    BusyView{
        id:busy
        anchors.fill: parent
        running:true
    }

    NavigationBar{
        id:navBar
        title: root.title
        titleLabel.width: Utl.dp(180)
        titleLabel.elide: Text.ElideRight

        onBackClicked: {
            root.visible = false
            root.navigationView.pop()
        }

        Button{
            id:searchBtn
            visible: !hidenShare
            icon.normalSource: "qrc:/res/share_b.png"
            icon.width: Utl.dp(20)
            icon.height: Utl.dp(20)
            width: Utl.dp(40)
            height: parent.height
            anchors.right: parent.right
            anchors.verticalCenter: parent.verticalCenter

            onClicked: {
                var imgPath = K.grab(root);
                ShareSDK.showShare(title, detailText, url, imgPath)
            }
        }
        Line {
            anchors.bottom: parent.bottom
        }
    }
}

