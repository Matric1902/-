#include <QApplication>
#include "Single.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Single s;
    s.show();
    return app.exec();
}
