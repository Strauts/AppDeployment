#include "mainwindow.h"
//#include "./ui_mainwindow.h"
#include <iostream>
#include "questiondialog.h"
#include <ui_mainwindow.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //    openQuestion.setModal(true);
    //    openQuestion.exec();
    //    if(startUpTest.loginOK == false)
    //    {
    //        startUpTest.setModal(true);
    //        startUpTest.exec();
    //    }
    //    if(startUpTest.isWorker == false && startUpTest.loginOK == true)
    //    {

    //        ui->setupUi(this);
    //        presetProfileImage_Main();
    //    }
    //    else if(startUpTest.isWorker == true && startUpTest.loginOK == true)
    //    {
    //        openWorkerHome.setModal(true);
    //        openWorkerHome.exec();
    //    }
    //ui->setupUi(this);
    //ui->~MainWindow();
    //setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    //openMain.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
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

//void MainWindow::presetProfileImage_Main()
//{
//    //    auto fs = cmrc::foo::get_filesystem();
//    //    auto data = fs.open("IMG_0292.PNG");
//    //    const auto data_size = std::distance(data.begin(), data.end());
//    //    bool f = QResource::registerResource("resources.rcc");
//    //    f = QResource::registerResource("resources-small.rcc");
//    //    QPixmap test(":/Glad_fjes.GIF");

//    QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
//    ui->label_profilePicture_Main->setPixmap(pix);
//    ui->label_profilePicture_Main->setScaledContents(true);
//    ui->label_profilePicture_Main->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
//}

//void MainWindow::on_pushButton_Profile_clicked()
//{
//    openProfile.setModal(true);
//    openProfile.exec();
//}

//void MainWindow::on_pushButton_startTest_clicked()
//{
//    openQuestion.setModal(true);
//    openQuestion.exec();
//}

//void MainWindow::on_pushButton_Results_clicked()
//{
//    openResults.setModal(true);
//    openResults.exec();
//}

//void MainWindow::on_pushButton_Reminders_clicked()
//{
//    openTasks.setModal(true);
//    openTasks.exec();
//}

//void MainWindow::on_pushButton_clicked()
//{
//    QMessageBox::information(this, "Inactive", "KroppKunn er ikke satt opp");
//    //startUpBodyTest.setModal(true);
//    //startUpBodyTest.exec();

//}

//void MainWindow::on_pushButton_2_clicked()
//{
//    close();
//}

//void MainWindow::on_pushButton_3_clicked()
//{
//    openDatabase.setModal(true);
//    openDatabase.exec();
//}
