#include "mysharedlib.h"
#include <QDebug>

MySharedLib::MySharedLib(QObject *parent) : QObject(parent)
{
}

void MySharedLib::sayHelloWorld()
{
    emit helloWorld("Hello from Shared library");
}
