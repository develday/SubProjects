#include <QCoreApplication>
#include <QDebug>
#include "mysharedlib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello from CLIApplication";
    MySharedLib mySharedLib;
    mySharedLib.sayHelloWorld();
    return a.exec();
}
