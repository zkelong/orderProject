import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.3
import QKit 1.0
import "../api"
import "../service"
import "./color.js" as Color
import "./font.js" as FontUtl
//律师认证
Rectangle {
    id:root
    width: parent.width
    height:column.height
    color:Color.Clear
    property var extData:({type:2})
    signal dataChanged()

    function checkData(){
        console.log(extData.name)
        console.log(extData.orgNum)
        console.log(extData.orgName)
        console.log(extData.address)
        console.log(extData.idCard)
        console.log(extData.jobCard)
        if(!extData.name){
            return false
        }else if(!extData.orgNum){
            return false
        }else if(!extData.orgName){
            return false
        }else if(!extData.address){
            return false
        }else if(!extData.idCard){
            return false
        }else if(!extData.jobCard){
            return false
        }else{
            return true
        }
    }
    //选择图片
    function imageTakerTest(type){
        imageSelected=false
        ImageTakeHelper.showImageTaker(function(selectedItems){
            imageSelected=true
            console.log("**** done selected")
            if(selectedItems.length){
                console.log("preview = " + selectedItems[0].preview + " path = " + selectedItems[0].path)
                if(type===1){
                   _idCard.avatar.source=selectedItems[0].preview
                }else{
                   _jobCard.avatar.source=selectedItems[0].preview
                }
                uploadImage(type,selectedItems[0].path)
            }
        });
    }
    //上传图片
    function uploadImage(type,imagePath){
        console.log("imagePath------------------------ "+imagePath)
        Api.uploadFile(imagePath, function (obj){
            if(obj){
                console.log("上传图片成功")
                if(type===1){
                   extData.idCard=obj
                }else{
                   extData.jobCard=obj
                }
            }else{
                Tools.showTip("上传图片失败请重试")
            }
        })
    }

    Column{
        id:column
        width: parent.width
        // 服务设置
        Rectangle{
            id: _ext_label
            width: parent.width
            height: Utl.dp(38)
            color: Color.RegistBgColor
            Line{
                color:Color.VeryLightGray
                anchors.top: parent.top
                width: parent.width
            }

            Text{
                anchors.left: parent.left
                anchors.leftMargin: Utl.dp(15)
                anchors.verticalCenter: parent.verticalCenter
                text: qsTr("资质认证")
                color:Color.DarkGray
                font.pointSize: FontUtl.FontSizeSmallB  //FontUtl.FontSizeSmallD
            }

            Line{
                color:Color.VeryLightGray
                anchors.bottom: parent.bottom
                width: parent.width
            }
        }
        UserInfoItem{
            id: _name
            width: parent.width
            color:Color.White
            height:Utl.dp(44)
            labelText: qsTr("姓        名")
            textField.visible:true
            textField.text:extData.name?extData.name:""
            onClicked_vis:false
            distanceLineVisible: true
            placeholder:qsTr("请输入真实姓名(和身份证一致)")
            rightImageVisible:false
            onNext: {
                extData.name=textField.text.trim()
            }
        }
        UserInfoItem{
            id: _orgNum
            width: parent.width
            color:Color.White
            height:Utl.dp(44)
            labelText: qsTr("执业证号")
            textField.visible:true
            textField.text:extData.orgNum?extData.orgNum:""
            onClicked_vis:false
            distanceLineVisible: true
            placeholder:qsTr("请输入执业证号")
            rightImageVisible:false
            onNext: {
                extData.orgNum=textField.text.trim()
            }
        }
        UserInfoItem{
            id: _orgName
            width: parent.width
            color:Color.White
            height:Utl.dp(44)
            labelText: qsTr("工作单位")
            textField.visible:true
            textField.text:extData.orgName?extData.orgName:""
            onClicked_vis:false
            distanceLineVisible: true
            placeholder:qsTr("请输入工作单位")
            rightImageVisible:false
            onNext: {
                extData.orgName=textField.text.trim()
            }
        }
        UserInfoItem{
            id: _address
            width: parent.width
            color:Color.White
            height:Utl.dp(44)
            labelText: qsTr("联系地址")
            textField.visible:true
            textField.text:extData.address?extData.address:""
            onClicked_vis:false
            distanceLineVisible: true
            placeholder:qsTr("请输入联系地址")
            rightImageVisible:false
            onNext: {
                extData.address=textField.text.trim()
            }
        }
        Rectangle{
            id:_card
            width: parent.width
            height:Utl.dp(280)
            color: Color.White

            Text {//文本标签
                id:_label
                anchors.left: parent.left; anchors.leftMargin: Utl.dp(15)
                width: Utl.dp(70); height:Utl.dp(44)
                verticalAlignment: Text.AlignVCenter
                font.pointSize: FontUtl.FontSizeMidD
                color:Color.BlackB
                text:qsTr("证件信息")
            }

            Text{
                id:_idCard_text
                anchors.left: _label.right
                anchors.leftMargin: Utl.dp(10)
                anchors.verticalCenter: _label.verticalCenter
                elide: Text.ElideRight
                font.pointSize: FontUtl.FontSizeMidB
                color:Color.LightGrayC
                text:qsTr("手持身份证照片(正面)")
            }

            AvatarImage{
                id: _idCard
                width: Utl.dp(76)
                height: Utl.dp(76)
                anchors.left:_idCard_text.left
                anchors.top: _idCard_text.bottom
                anchors.topMargin:Utl.dp(15)
                radius:0
                avatar.source:extData.idCard?extData.idCard:""
                avatar.defaultSource:"qrc:/res/add_card_normal.png"
                circle.visible: false
                delbtn.visible: avatar.source==extData.idCard
                colorMask.color:"#10000000"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        imageTakerTest(1)
                    }
                    onPressed: {
                        parent.selected=true
                    }
                    onReleased: {
                        parent.selected=false
                    }
                    onCanceled: {
                        parent.selected=false
                    }
                }
            }

            Line{
                id:cardline
                anchors.left:_idCard_text.left
                anchors.top: _idCard.bottom
                anchors.topMargin:Utl.dp(15)
                color:Color.VeryLightGray
            }

            Text{
                id:_jobCard_text
                anchors.left:_idCard_text.left
                anchors.top: cardline.bottom
                anchors.topMargin:Utl.dp(15)
                elide: Text.ElideRight
                font.pointSize: FontUtl.FontSizeMidB
                color:Color.LightGrayC
                text:qsTr("律师证照片(正面)")
            }

            AvatarImage{
                id: _jobCard
                width: Utl.dp(76)
                height: Utl.dp(76)
                anchors.left:_jobCard_text.left
                anchors.top: _jobCard_text.bottom
                anchors.topMargin:Utl.dp(15)
                radius:0
                avatar.source:extData.jobCard?extData.jobCard:""
                avatar.defaultSource:"qrc:/res/add_card_normal.png"
                circle.visible: false
                delbtn.visible:avatar.source==extData.jobCard
                colorMask.color:"#10000000"
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        imageTakerTest(2)
                    }
                    onPressed: {
                        parent.selected=true
                    }
                    onReleased: {
                        parent.selected=false
                    }
                    onCanceled: {
                        parent.selected=false
                    }
                }
            }
        }
    }
}

