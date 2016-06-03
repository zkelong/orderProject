import QtQuick 2.0
import "../controls/font.js" as FontUtl

Rectangle {
    id: root
    width: Utl.dp(41)
    height: width

    property alias canvas: canvas

    property int originX: 0
    property int originY: 0
    property int radius: root.height
    property int progressBarWidth: Utl.dp(3)    
    property string progressBgColor: "#EBEBEB"
    property string progressColor: "#f87614"
    property double beginAngle: -Math.PI*5/6
    property double maximumValue: 100 //最大值, 将会取value/maximumValue的结果做为百分比
    property double minimumValue: 0 //最小值,如果value小于此值，那么使用此值做为计算标准
    property double value: 0 //当前值
    property double percent: Math.max(value,minimumValue)/maximumValue //当前值和最大值的比值

    Component.onCompleted: {
        originX = root.width / 2
        originY = root.height / 2
        radius = root.height > root.width ? root.width / 2 : root.height / 2;
        console.log(maximumValue, minimumValue, value, percent)
        canvas.requestPaint();
    }

    Canvas {
        id: canvas
        anchors.fill: parent

        onPaint: {
            var context = canvas.getContext("2d");
            //背景
            context.beginPath();
            getCircularPath(context, originX, originY, radius);
            context.fillStyle = progressBgColor;
            context.fill();
            //进度
            context.beginPath();
            if(percent >= 1) {
                getCircularPath(context, originX, originY, radius);
            } else {
                getSectorPath(context, originX, originY, radius, beginAngle, beginAngle+Math.PI*2*percent);
            }
            context.fillStyle = progressColor;
            context.fill();
            //显示圆圈
            context.beginPath();
            getCircularPath(context, originX, originY, radius-progressBarWidth);
            context.fillStyle = root.color;
            context.fill();
        }
    }

    Text {
        id: progress_txt
        anchors.centerIn: parent
        color: progressColor
        font.pointSize: FontUtl.FontSizeSmallC
        text: (percent*100).toFixed(0) + "%"
    }

    /** 点/圆
      * @param x 圆心x坐标
      * @param y 圆心y坐标
      * @param r 圆半径
      */
    function getCircularPath(ctx, x, y, r)
    {
        try
        {
            //ctx.beginPath();
            //arc(圆心x,圆心y,半径,开始的角度,结束的角度,是否逆时针)
            ctx.arc(x, y, r, 0, Math.PI*2);
        } catch(e) {
            console.log(e);
        }
    }

    /** 扇形
      * @param x 扇形圆心x左标
      * @param y 扇形圆心y坐标
      * @param r 扇形半径
      * @param angleBegin 扇形开始角度
      * @param angleEnd 扇形结束角度
      * @param ifAnticlockwise 是否是逆时针
      */
    function getSectorPath(ctx, x, y, r, angleBegin, angelEnd, ifAnticlockwise)
    {
        try
        {
            ctx.arc(x, y, r, angleBegin, angelEnd, ifAnticlockwise);
            ctx.lineTo(x,y);
            ctx.closePath();
        } catch(e) {
            console.log(e)
        }
    }
}

