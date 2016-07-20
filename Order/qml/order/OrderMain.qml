import QtQuick 2.0
import QtQuick.Window 2.2
import "../controls"
import "../toolsbox/color.js" as Color
import "../toolsbox/config.js" as Config
import "../toolsbox/font.js" as FontUtl

Window {
    id: root
    width: Utl.dp(600)
    height: Utl.dp(400)
    title: qsTr("随机点餐")

    Item {
        anchors.fill: parent
        Rectangle {
            width: root.width
            height: Utl.dp(45)
            color: Color.ViewColor

            TextFieldGroup {
                id: price
                anchors.left: parent.left;
                anchors.leftMargin: Utl.dp(20)
                anchors.verticalCenter: parent.verticalCenter
                height: Utl.dp(40)
                width: parent.width/5
                label.width: Utl.dp(40)
                labelText: qsTr("饭价: ")
                inputField.text: "2"
                inputField.inputMethodHints: Qt.ImhDialableCharactersOnly
                inputField.validator: RegExpValidator{regExp: Config.CheckPositiveNum}
            }
            Text {
                id: uinit1
                anchors.left: price.right
                anchors.leftMargin: Utl.dp(5)
                anchors.verticalCenter: price.verticalCenter
                font.pointSize: FontUtl.FontSizeSmallA
                color:Color.DarkGray
                text: qsTr("元/人")
            }

            TextFieldGroup {
                id: num
                height: Utl.dp(40)
                width: parent.width/4
                anchors.left: uinit1.right;
                anchors.leftMargin: Utl.dp(20)
                anchors.verticalCenter: parent.verticalCenter
                label.width: Utl.dp(40)
                labelText: qsTr("人数: ")
                inputField.text: ""
                inputField.inputMethodHints: Qt.ImhDialableCharactersOnly
                inputField.validator: RegExpValidator{regExp: Config.CheckPositiveNum}
            }
            Text {
                id: unit2
                anchors.left: num.right
                anchors.leftMargin: Utl.dp(5)
                anchors.verticalCenter: price.verticalCenter
                font.pointSize: FontUtl.FontSizeSmallA
                color:Color.DarkGray
                text: qsTr("人")
            }

            Button {
                id: btn
                width: Utl.dp(65)
                height: Utl.dp(35)
                radius: Utl.dp(4)
                color: enabled ? Color.White : Color.GrayBackground
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: unit2.right
                anchors.leftMargin: Utl.dp(20)
                label.text: qsTr("生成订单")
                onClicked: {
                    createOrder()
                }
            }
        }
    }

    TipView {
        id: tip
    }

    function createOrder() {
        if(price.inputText == "") {
            tip.content = qsTr("饭免费了？")
            tip.show()
            return
        }
        if(num.inputText == "") {
            tip.content = qsTr("没人点啥？")
            tip.show()
            return
        }
        btn.enabled  = false
    }

    function selectDishs() {
//        var
    }
}

