#include "sdkdemo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SDKDemo w;
    w.show();

    return a.exec();
}
