import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.2
import QtQuick.Controls 2.0
import QMyTimer 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    QMyTimer {
        id:timer
        onClockUpdate: {
            txtDate.text = currentDate
            txtTime.text = currentTime
        }
    }

    ColumnLayout{
        Label{
            id:txtDate
            font.pointSize: 40
            text: "Current Date"
        }
        Label{
            id:txtTime
            font.pointSize: 40
            text: "Current Time"
        }

        // 2 button make it 1 component using RowLayout
        RowLayout{
            Button{
                text:"Start"
                onClicked: {
                    console.log("Start Timer")
                    timer.startTimer()
                }
            }
            Button{
                text:"Stop"
                onClicked: {
                    timer.stopTimer()
                    console.log("Quit")
                    Qt.quit()
                }
            }
        }
    }
}
