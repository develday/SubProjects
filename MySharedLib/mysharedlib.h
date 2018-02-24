#ifndef MYSHAREDLIB_H
#define MYSHAREDLIB_H

#include "mysharedlib_global.h"
#include <QObject>

class MYSHAREDLIBSHARED_EXPORT MySharedLib : public QObject
{
    Q_OBJECT
public:
    MySharedLib(QObject *parent = nullptr);
    void sayHelloWorld();
signals:
    void helloWorld(QString);
};

#endif // MYSHAREDLIB_H
