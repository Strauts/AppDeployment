#include "mainwindow.h"
#include <QApplication>
#include <iostream>

/*If having problem with dll files you can go to the bin file for your installed builder and copy the needed dll files into your project
 * folder (C:\Qt\5.13.0\msvc2017_64\bin) - copy the relevant dll files from here */

/*https://www.youtube.com/watch?v=2N238ctZfhY&t=359s at this link, from time 30.15, you can find how to block so
that nothing will execute until the current "task" is completed w.exec()???*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

   // w.setWindowFlag(Qt::w | Qt::FramelessWindowHint);
    w.show();


    //w.exec();
    return a.exec();
}
