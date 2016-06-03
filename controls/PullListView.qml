import QtQuick 2.4
import "./color.js" as ColorUtl
import "./font.js" as FontUtl
import "../tools.js" as Tools

ListView {
    id:root
    property bool loading: false //是否正处于加载中
    property bool hasMore: true //是否还有更多
    property bool isFooter:false
    property int n : 0;
    property int timeout : 30000;   //超时定时
    property double pullProgress: 0 //下拉进度
    signal reload //重新加载
    signal loadmore //加载更多

    property real oldTopMargin: -1

    property var pullItem: null

    // 开始刷新时调用
    // @param animated 是否使用动画过渡
    function startLoading(animated){
        if(loading)
            return
        loading = true
        timer.start()
        if(!pullItem){
            return
        }
        _doStartAction(animated)
    }

    // 加载完成时调用
    // @param animated 是否使用动画过渡
    function stopLoading(animated){
        if(!loading)
            return

        if(!pullItem){
            return
        }
        _doStopAction(animated)
        loading = false
        timer.stop()
    }

    //执行加载操作，将加载元素显示出来
    function _doStartAction(animated){
        if(startAnimation.running)
            startAnimation.stop()
        if(oldTopMargin == -1){
            oldTopMargin = root.topMargin
        }

        if(animated){
            startAnimation.start()
        } else {
            root.topMargin = oldTopMargin + pullItem.height
        }
    }

    //停止加载操作，将加载元素隐藏
    function _doStopAction(animated){
        //if(root.topMargin == _p.oldTopMargin)
        //     return

        if(stopAnimation.running){
            stopAnimation.stop()
        }
        if(animated){
            stopAnimation.start()
        }else {
            root.topMargin = oldTopMargin
        }
    }

    onOldTopMarginChanged: {
        if(pullItem){
            pullItem.y = -(pullItem.height + root.oldTopMargin)
        }
    }

    Component.onCompleted:  {
        pullItem = pullComponent.createObject(root.contentItem)
        pullItem.y = -(pullItem.height + root.topMargin)
        if(loading){
            _doStartAction(true)
        }
    }

    Timer{
        id:timer
        running: false;
        repeat: false;
        interval: timeout
        onTriggered: {
            console.log("获取数据超时")
            stopLoading(true)
            loading = false
            Tools.hidenBusy()
        }
    }

    Component{
        id:pullComponent
        Rectangle{
            width: parent.width
            height: Utl.dp(60)
            color: ColorUtl.Clear

            Image{
                id:refreshImg; source: "qrc:/res/refresh_0.png"
                width: Utl.dp(16); height: Utl.dp(13); anchors.centerIn: parent
                NumberAnimation{
                    id:rotationPlay
                    target:refreshImg;
                    property:"rotation";
                    from: 0;
                    to: 360;
                    loops: -1
                    duration: 800
                }
//                RotationAnimator on rotation {
//                    id:rotationPlay
//                    running:false//root.loading
//                    loops: -1
//                    from: 0;
//                    to: 360;
//                    duration: 800
//                }
            }
            Text {
                id:refreshText; horizontalAlignment: Text.AlignHCenter; color:ColorUtl.DarkGray
                text:{
                    if(root.loading || root.pullProgress >= 1){
                        rotationPlay.start()
                        refreshImg.source = "qrc:/res/refresh.png"
                    }else {
                        rotationPlay.stop()
                        refreshImg.rotation = 0;
                        refreshImg.source = "qrc:/res/refresh_0.png"
                    }

                    if(root.loading){
                        return qsTr("加载中")
                    }
                    if(root.pullProgress >= 1){
                        return qsTr("释放刷新")
                    }

                    return qsTr("下拉刷新")
                }

                font.pointSize: FontUtl.FontSizeSmallB
                anchors.top: refreshImg.bottom; anchors.topMargin: Utl.dp(5); anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }

    Component{
        id:moreComponent
        Rectangle{
            property alias label: _label
            width: parent.width
            height: Utl.dp(30)
            visible: root.isFooter
            color: ColorUtl.Clear

            Text {
                id:_label
                text: {
                    console.log("hasMore1       "+root.hasMore)
                    if(root.loading){
                        return qsTr("正在加载更多...")
                    } else if (root.hasMore){
                        return qsTr("加载更多")
                    }
                    return qsTr("全部加载完毕")
                }

                anchors.centerIn: parent
                font.pointSize: FontUtl.FontSizeSmallB
            }
        }
    }
    footer:moreComponent

    onContentYChanged: {//在滚动过程中计算滚动值，更新加载元素的状态
        if(loading)
            return

        var cur = -root.contentY - root.topMargin
        if(cur > 0){
            root.pullProgress = cur/pullItem.height
        }
        if(root.hasMore && root.contentHeight > root.height){
            if(root.contentY - root.originY >= (root.contentHeight - root.footerItem.height/2)-root.height){//加载更多
                loading = true
                loadmore()
            }
        }
    }


    onDragEnded: {
        if(loading)
            return

        if (root.contentY <= -(pullItem.height + root.topMargin)){
            startLoading(false)
            reload()
        }
    }

    NumberAnimation on topMargin {
        id: startAnimation
        running: false
        from: root.topMargin
        to: oldTopMargin + pullItem.height
        onStopped: {

        }
    }

    NumberAnimation on topMargin {
        id: stopAnimation
        running: false
        from: root.topMargin
        to: oldTopMargin
        onStopped: {
            if(!loading){
                root.contentY = -oldTopMargin
                root.topMargin = oldTopMargin
            }
        }
    }
}

