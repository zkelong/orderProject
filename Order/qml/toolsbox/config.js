.pragma library
.import "code.js" as Code

//默认图片
var DefaultImage = "qrc:/res/defalutImage.png"
//头像默认图片
var DefaultAvatar = "qrc:/res/defaultAvatar.png"

//////////////////////////////////////////////////
//正则表达式
//限制电话格式正则表达式
var CheckPhoneNum = /^((\+?86)|(\(\+86\)))?(13[0123456789][0-9]{8}|14[57][0-9]{8}|15[012356789][0-9]{8}|17[0678][0-9]{8}|18[0123456789][0-9]{8})$/;
//var CheckPhoneNum = /^1[3|5|7|8][0-9]\d{4,8}$/
//限制数字输入正则表达式
var CheckNum = /^[0-9]*$/
//正整数
var CheckPositiveNum = /^\+?[1-9][0-9]*$/
//密码必须为字母加数字
var checkPassword = /^(?=.*?[a-zA-Z])(?=.*?[0-9])[a-zA-Z0-9]{6,}$/
//////////////////////////////////////////////////
//菜单
var ColdDish = [   //凉菜
                ,{name: "风味兔丁", price: 30}
                ,{name: "蒜泥白肉", price: 18}
                ,{name: "红油鸡块", price: 30}
                ,{name: "红油耳片", price: 22}
                ,{name: "香酥花生", price: 10}
                ,{name: "蒜泥黄瓜", price: 10}
                ,{name: "爽口木耳", price: 10}
                ,{name: "青椒皮蛋", price: 10}
                ,{name: "香卤拱嘴", price: 20}
                ,{name: "香卤牛肉", price: 35}
                ,{name: "香卤仔排", price: 22}
                ,{name: "香卤郡干", price: 22}
                ,{name: "拌折耳根", price: 12}
                ,{name: "风味凉粉", price: 8}
        ]
var HotDish = [   //热菜
                ,{name: "蒜苗回锅", price: 16}
                ,{name: "盐菜回锅", price: 18}
                ,{name: "锅魁回锅", price: 16}
                ,{name: "土豆回锅", price: 16}
                ,{name: "鸡米芽菜", price: 15}
                ,{name: "番茄炒蛋", price: 12}
                ,{name: "肝腰合炒", price: 16}
                ,{name: "泡椒肝片", price: 14}
                ,{name: "仔姜肝片", price: 15}
                ,{name: "鱼香茄饼", price: 20}
                ,{name: "糖醋里脊", price: 26}
                ,{name: "椒盐立即", price: 26}
                ,{name: "干煸肥肠", price: 26}
                ,{name: "烂肉粉丝", price: 14}
                ,{name: "仔姜肉丝", price: 18}
                ,{name: "火爆腰花", price: 25}
                ,{name: "酱肉丝", price: 20}
                ,{name: "火爆郡干", price: 18}
                ,{name: "蒜苔肉丝", price: 16}
                ,{name: "榨菜肉丝", price: 16}
                ,{name: "烂肉豌豆", price: 16}
                ,{name: "腊肉豌豆", price: 20}
                ,{name: "香菇肉片", price: 16}
                ,{name: "小炒仔骨", price: 22}
                ,{name: "小炒肉", price:  16}
                ,{name: "宫保鸡丁", price: 15}
                ,{name: "青笋肉丝", price: 16}
        ]
var VegetableDish = [   //素菜
                     ,{name: "干煸四季豆",  price: 10}
                     ,{name: "干煸苦瓜",  price: 10}
                     ,{name: "土豆丝",  price: 8}
                     ,{name: "干煸土豆丝",  price: 12}
                     ,{name: "鱼香茄子",  price: 10}
                     ,{name: "醋熘白菜",  price: 10}
                     ,{name: "炝莲白",  price: 8}
                     ,{name: "炝凤尾",  price: 8}
                     ,{name: "青椒玉米",  price: 10}
                     ,{name: "金沙玉米",  price: 15}
                     ,{name: "炒时疏",  price: 10}
                     ,{name: "炝藕片",  price: 10}
                     ,{name: "白果菜心",  price: 15}
                     ,{name: "白灼菜心",  price: 12}
                     ,{name: "青椒香豆腐",  price: 12}
                     ,{name: "韭黄炒蛋",  price: 12}
                     ,{name: "苦瓜烘蛋",  price: 15}
                     ,{name: "山药炒木耳",  price: 12}
                     ,{name: "蒜泥豌豆尖",  price: 12}
        ]

//////////////////////////////////////////////////




//////////////////////////////////////////////////
//测试用的图片链接
var testPicUrl = [
            "http://d.hiphotos.baidu.com/image/pic/item/72f082025aafa40f58e927daa964034f78f0198d.jpg"
            ,"http://pic41.nipic.com/20140526/9159693_165138680000_2.jpg"
            ,"http://g.hiphotos.baidu.com/image/pic/item/bd315c6034a85edf9ba34e244b540923dd54758d.jpg"
            ,"http://g.hiphotos.baidu.com/image/pic/item/6c224f4a20a446230761b9b79c22720e0df3d7bf.jpg"
            ,"http://img4.duitang.com/uploads/item/201601/03/20160103175943_SkFQf.png"
            ,"http://img5.duitang.com/uploads/item/201410/27/20141027124824_e4hjS.png"
            ,"http://cdn.duitang.com/uploads/item/201509/27/20150927191624_2tnMS.thumb.224_0.jpeg"
            ,"http://img5.duitang.com/uploads/item/201512/21/20151221092455_3QMA2.png"
            ,"http://img4.duitang.com/uploads/item/201601/21/20160121102221_LjFyB.png"
            ,"http://cdn.duitang.com/uploads/item/201505/03/20150503170953_5MS8s.png"
            ,"http://imgsrc.baidu.com/forum/w%3D580/sign=6b1048f7d72a283443a636036bb4c92e/0101060828381f30e26dd543aa014c086f06f096.jpg"
            ,"http://img3.3lian.com/2014/s4/43/d/31.jpg"
            ,"http://3w.beva.cn/p/res/555/20140416_271352fe23b07479.jpg"
            ,"http://img3.3lian.com/2014/s4/43/d/25.jpg"
            ,"http://images.17173.com/2013/news/2013/01/03/lj0103xh06s.jpg"
            ,"http://image.s1979.com/allimg/130806/427_130806101635_1.jpg"
            ,"http://img.hb.aicdn.com/2b4c30abcfdb1b0eb6725767ca31a3048dbe5a6d34529-eWIlnB_fw580"
            ,"http://imgsrc.baidu.com/forum/w%3D580/sign=087c66a44fc2d562f208d0e5d71090f3/8111adaf2edda3cccd9d70e401e93901203f92a5.jpg"
            ,"http://henan.sinaimg.cn/2014/0903/U10691P827DT20140903084416.jpg"
            ,"http://images.17173.com/2012/news/2012/08/30/x0831h49.jpg"
        ]


















//签到规则描述
var signvuls = "1.每5天为一个周期，每天签到一次，连续签到5天后即可提现，获取充值话费2元，若中断，将从头再参与"

//积分与钱的兑换比例 1积分 * PointsExchangeToMoney = 1元
var PointsExchangeToMoney = 1600

