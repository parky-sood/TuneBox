#include "TuneBox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TuneBox w;
    w.show();
    return a.exec();
}
