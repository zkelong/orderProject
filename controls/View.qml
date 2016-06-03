import QtQuick 2.0
import QtQuick.Controls 1.2
import QKit 1.0
import "../controls/color.js" as Color
import "../tools.js" as Tools
Rectangle {

    property StackView navigationView: null
    property bool hidenTabbarWhenPush: false
    property int currentPageState:1
    property alias bgImage: img
    //是否需要特殊的返回功能 如果有,需要实现back()方法
    property bool specialBack:false
    color:Color.ViewColor

    function getAbsolutePosition(node) {
          var returnPos = {};
          returnPos.x = 0;
          returnPos.y = 0;
          if(node !== undefined && node !== null) {
              var parentValue = getAbsolutePosition(node.parent);
              returnPos.x = parentValue.x + node.x;
              returnPos.y = parentValue.y + node.y;
          }
          return returnPos;
    }

    onVisibleChanged: {
        if(visible){
            Tools.setStackView(navigationView)
        }
    }
    //隐藏软键盘
    MouseArea{
        id:bgArea
        anchors.fill: parent
        property bool wasHeld: false
        property int startX: 0

        onClicked: {
            if(root.height - bgArea.mouseY > Utl.dp(230)){
                console.log("隐藏软键盘和焦点")
                Qt.inputMethod.hide()
                parent.focus=false
            }
        }

        onPressed: {
            if(navigationView.depth > 1){
                wasHeld = true;
                startX = getAbsolutePosition(bgArea).x + mouseX;
            }

        }
    }

    WindowEventListenner{
        id:winListenner
        property bool prePop: false

        onMouseReleaseEvent: {
            if(bgArea.wasHeld && navigationView && navigationView.currentItem == root){
                var dis = event.x - bgArea.startX;
                var pt = dis/root.width;
                if(pt > 0.45){
                    winListenner.prePop = true;
                    mn.to = root.width;
                    mn.from = root.x;
                    mn.start();

                } else {
                    mn.to = 0;
                    mn.from = root.x;
                    mn.start();
                }
            }
            bgArea.startX = 0;
            bgArea.wasHeld = false;
        }

        onMouseMoveEvent: {
            if(navigationView && bgArea.wasHeld && navigationView.currentItem == root){
                var dis = event.x - bgArea.startX;
                var pt = dis/root.width;
                if( pt > 0.02 ){
                    var item = navigationView.get(navigationView.depth - 2);
                    if(item && !item.visible) item.visible = true;

                    root.x = dis;
                }
            }
        }
    }

    NumberAnimation {
        id:mn
        target: root
        property: "x"
        duration: 200
        easing.type: Easing.InOutQuad
        onStopped: {
            if(winListenner.prePop){
                navigationView.pop({immediate: true});
                winListenner.prePop = false;
            }else {
                var item = navigationView.get(navigationView.depth - 2);
                if(item && !item.visible) item.visible = false;
            }
        }
    }


    Image {
        id: img
        anchors.fill: parent
        visible: false
        source: "qrc:/res/background.png"
    }

    Component.onCompleted: {
        Qt.inputMethod.hide()
    }

}

