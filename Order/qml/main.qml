import QtQuick 2.4
import QtQuick.Window 2.2
import QKit 1.0
import "."
import "./controls"
import "./order"
import "toolsbox/tools.js" as Tools
import "toolsbox/api.js" as Api
import "toolsbox/config.js" as Config
import "toolsbox/color.js" as Color
import "toolsbox/font.js" as FontUtl

Window {
    id: win
    visible: true
    width: Utl.dp(600)
    height: Utl.dp(400)
    title: qsTr("点餐")
    //flags: Qt.Window | Qt.WindowMaximizeButtonHint



    property int btnHeight: Utl.dp(25)
    property int btnWidth: Utl.dp(45)
    property string btnColor: "#4488ff"

    Component.onCompleted: {
        win.setMinimumHeight(Utl.dp(400))
        win.setMinimumWidth(Utl.dp(600))
        win.setMaximumWidth(Utl.dp(600))
        win.setMaximumHeight(Utl.dp(400))
        Tools.setMainWindow(win);
    }

    Item {
        anchors.fill: parent
        Rectangle { //点餐
            id: rect_order
            color: Color.ViewColor
            width: Utl.dp(250)
            height: childrenRect.y + childrenRect.height + Utl.dp(10)
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.horizontalCenter
            anchors.rightMargin: Utl.dp(30)

            Text {
                id: txt_order
                anchors.top: parent.top
                anchors.topMargin: Utl.dp(10)
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: FontUtl.FontSizeMidB
                text: "点餐"
            }
            Button {
                id: btn_random
                width: btnWidth
                height: btnHeight
                anchors.top: txt_order.bottom
                anchors.topMargin: Utl.dp(40)
                anchors.right: parent.horizontalCenter
                anchors.rightMargin: Utl.dp(20)
                radius: Utl.dp(4)
                border.color: Color.LightGray
                label.text: qsTr("随机")
                onClicked: {
                    win.visible = false
                    order_random.show()
                }
            }

            Button {
                id: btn_self
                width: btnWidth
                height: btnHeight
                anchors.verticalCenter: btn_random.verticalCenter
                anchors.left: parent.horizontalCenter
                anchors.leftMargin: Utl.dp(20)
                radius: Utl.dp(4)
                border.color: Color.LightGray
                label.text: qsTr("自选")
                onClicked: {

                }
            }

        }

        Rectangle { //菜单
            id: rect_menu
            color: Color.ViewColor
            width: Utl.dp(250)
            height: childrenRect.y + childrenRect.height + Utl.dp(10)
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.horizontalCenter
            anchors.leftMargin: Utl.dp(30)

            Text {
                id: txt_menu
                anchors.top: parent.top
                anchors.topMargin: Utl.dp(10)
                anchors.horizontalCenter: parent.horizontalCenter
                font.pointSize: FontUtl.FontSizeMidB
                text: "菜单"
            }
            Button {
                id: btn_menu
                width: btnWidth
                height: btnHeight
                anchors.top: txt_menu.bottom
                anchors.topMargin: Utl.dp(40)
                anchors.right: parent.horizontalCenter
                anchors.rightMargin: Utl.dp(20)
                radius: Utl.dp(4)
                border.color: Color.LightGray
                label.text: qsTr("查看")
                onClicked: {

                }
            }

            Button {
                id: btn_order
                width: btnWidth
                height: btnHeight
                anchors.verticalCenter: btn_menu.verticalCenter
                anchors.left: parent.horizontalCenter
                anchors.leftMargin: Utl.dp(20)
                radius: Utl.dp(4)
                border.color: Color.LightGray
                label.text: qsTr("修改")
                onClicked: {

                }
            }
        }
    }
    OrderMain{
        id: order_random
        onVisibleChanged: {
            if(!visible) {
                win.show()
                win.raise() //显示窗口空白--加上后，就不出现了
            }
        }
    }
}
