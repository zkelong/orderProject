import QtQuick 2.4
import QtQuick.Controls 1.3
import "../tools.js" as Tools
StackView{
    property var tabView: null  //TabView
    property alias busy: root.busy
    property alias currentItem: root.currentItem
    property alias depth: root.depth
    property alias initialItem: root.initialItem
    id:root
    anchors.fill: parent
    enabled: !root.busy
    onDepthChanged: {
        console.log("栈内元素个数："+depth)
    }

    function isBack(){
        if(root.currentItem.specialBack){
            return root.currentItem.back()
        }
        return true
    }
    onCurrentItemChanged: {
        root.focus=false
        Qt.inputMethod.hide()
        if(root.currentItem){
            if(root.currentItem.navigationView === null){
                root.currentItem.navigationView = root;
                Tools.setStackView(root)
            }
            if(root.tabView){
                root.tabView.tabbarVisible = !root.currentItem.hidenTabbarWhenPush;
            }
        }

    }

    //跳转动画
//    delegate: StackViewDelegate {
//        function transitionFinished(properties)
//        {
//            properties.exitItem.x = 0
//            properties.exitItem.opacity = 1
//        }
//        function getTransition(properties)
//        {
//            if(properties.exitItem.jumpstate == "hangup"){
//                return hangup
//            }else{
//                var exit=properties.exitItem.Stack.index
//                var enter=properties.enterItem.Stack.index
//                if(exit>enter){
//                    return popTransition
//                }else{
//                    return pushTransition
//                }
//            }
//        }
//        //挂断动画
//        property Component hangup: StackViewTransition {
//            PropertyAnimation {
//                target: enterItem
//                property: "opacity"
//                from: 0
//                to: 1
//                duration: 700
//            }
//            PropertyAnimation {
//                target: exitItem
//                property: "opacity"
//                from: 0
//                to: 0
//                duration: 0
//            }
//        }
//        popTransition: StackViewTransition {
//            PropertyAnimation {
//                target: enterItem
//                property: "x"
//                from: -target.width
//                to: 0
//                duration: 300
//            }
//            PropertyAnimation {
//                target: exitItem
//                property: "x"
//                from: 0
//                to: target.width
//                duration: 300
//            }
//        }
//        pushTransition : StackViewTransition {
//            PropertyAnimation {
//                target: enterItem
//                property: "x"
//                from: target.width
//                to: 0
//                duration: 300
//            }
//            PropertyAnimation {
//                target: exitItem
//                property: "x"
//                from: 0
//                to: -target.width
//                duration: 300
//            }
//        }
//    }
}



