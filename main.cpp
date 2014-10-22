#include "widget.h"
#include <QApplication>
#include "drawer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Drawer drawer;
    drawer.resize(250,700);
    drawer.show();
# this line is add in simple2
    return a.exec();
}
