#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "mysharedlib.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mySharedLib = new MySharedLib();

    QObject::connect(mySharedLib, &MySharedLib::helloWorld, [&](const QString &message){
//        qDebug() << "Message received";
//        qDebug() << message;
        QMessageBox::information(this, "Message", message);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    qDebug() << "quit!";
    close();
}

void MainWindow::on_actionSayHello_triggered()
{
//    QObject::connect(&mySharedLib, &MySharedLib::helloWorld, [&](const QString &message){
//        qDebug() << "Message received";
//        qDebug() << message;
//    });

//    mySharedLib.sayHelloWorld();
      mySharedLib->sayHelloWorld();
}
