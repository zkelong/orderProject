import QtQuick 2.4
import "../controls/color.js" as Color
import "../controls/font.js" as FontUtl
Flickable {
    id: flick
    property alias textEdit: edit
    property alias text: edit.text
    property alias pointSize: edit.font.pointSize
    property alias placeholder:placeholder
    property int maxLength: 30
    property var placeholderText:" ";
    flickableDirection:Flickable.VerticalFlick
    contentWidth: edit.paintedWidth
    contentHeight: edit.paintedHeight
    interactive:contentHeight>height
    clip: true
    Component.onCompleted: {
        console.log("flick.height:   "+flick.height)
    }

    property int nm: 0;
    signal editFocus
    //    signal textChanged
    function ensureVisible(r)
    {
        if (contentX >= r.x)
            contentX = r.x;
        else if (contentX+width <= r.x+r.width)
            contentX = r.x+r.width-width;
        if (contentY >= r.y)
            contentY = r.y;
        else if (contentY+height <= r.y+r.height)
            contentY = r.y+r.height-height;
    }
    TextEdit {
        id: edit
        width: flick.width
        height: flick.height
        wrapMode: TextEdit.Wrap
        cursorPosition:0
        focus:visible
        horizontalAlignment:TextInput.AlignLeft
        verticalAlignment:TextInput.AlignTop
        color:Color.Black
        font.pointSize: FontUtl.FontSizeMidB
        onFocusChanged: {
            editFocus()
        }
        onLengthChanged:
        {
            if(edit.length > maxLength)
            {
                var prePosition = cursorPosition;
                edit.text = edit.text.substring(0, maxLength);
                cursorPosition = Math.min(prePosition, maxLength);
            }
        }
        onCursorRectangleChanged: flick.ensureVisible(cursorRectangle)
    }

    Text {
        id: placeholder
        anchors.fill:edit
        wrapMode:Text.Wrap
        color:Color.LightText
        font.pointSize:pointSize
        text: placeholderText
        visible: edit.length==0
    }
}
