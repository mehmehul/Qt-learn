#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    // set style sheet application wise
    a.setStyleSheet("QPushButton {color : red; background-color : white; }");
    w.show();
    return a.exec();
}
