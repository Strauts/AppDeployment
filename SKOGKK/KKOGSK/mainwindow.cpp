#include "mainwindow.h"
//#include "./ui_mainwindow.h"
#include <iostream>
#include "questiondialog.h"
#include <ui_mainwindow.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    openMain.setModal(true);
    openMain.exec();
    for(int i = 1; i <10; i++)
    {
        if(openMain.exit == true || openWorkerHome.exit == true)
        {
            close();
        }
        i--;
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
