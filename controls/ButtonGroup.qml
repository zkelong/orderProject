import QtQuick 2.0

QtObject{
    id:root
    property var selectedButton:null
    property var buttons: []

    function addButton(btn){
        for(var i = 0; i < buttons.length; ++i){
            if (buttons[i] === btn){
                return
            }
        }
        buttons.push(btn)
        btn.clicked.connect(onClicked)
    }

    function onClicked(button){

        if (selectedButton === button){
            return;
        }

        var idx = 0;
        for(var i = 0; i < buttons.length; ++i){
            buttons[i].selected = false;
        }
        button.selected = true;
        selectedButton = button;
    }
}

