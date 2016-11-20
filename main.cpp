#include "findcrap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    findCrap w;
    w.show();

    return a.exec();
}
