import QtQuick 2.0
import "controls"

View {
    id: root

    property int btnHeight: Utl.dp(25)
    property int btnWidth: Utl.dp(45)
    property string btnColor: "#4488ff"

    Button {
        id: btn_menu
        width: btnWidth
        height: btnHeight
        radius: Utl.dp(4)
        label.text: qsTr("餐单")
        onClicked: {

        }
    }

    Button {
        id: btn_order
        width: btnWidth
        height: btnHeight
        radius: Utl.dp(4)
        label.text: qsTr("点餐")
        onClicked: {

        }
    }
}

