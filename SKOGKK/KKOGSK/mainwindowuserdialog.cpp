#include "mainwindowuserdialog.h"
#include "ui_mainwindowuserdialog.h"
#include <iostream>
#include <QAction>
#include <QFileDialog>
#include <QStandardPaths>
#include <QImageReader>
#include <QDir>
#include <QLabel>
#include <QByteArray>
#include <Qmovie>
#include "secondwindowdialog.h"
#include "questiondialog.h"
//#include <ui_mainwindow.h>
#include <QApplication>
#include <QTimer>
#include <QPixmap>
#include <QDialog>

//#include <cmrc/cmrc.hpp>

//CMRC_DECLARE(foo);

MainWindowUserDialog::MainWindowUserDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindowUserDialog)
{
    //    openQuestion.setModal(true);
    //    openQuestion.exec();
    if(startUpTest.loginOK == false)
    {
        startUpTest.setModal(true);
        startUpTest.exec();
    }
    if(startUpTest.isWorker == false && startUpTest.loginOK == true)
    {

        ui->setupUi(this);
        setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        presetProfileImage_Main();
    }
    else if(startUpTest.isWorker == true && startUpTest.loginOK == true)
    {
        openWorkerHome.setModal(true);
        openWorkerHome.exec();
    }
    // QObject::connect(ui->actionOpen_File, SIGNAL(triggered()), this, SLOT(onOpenActionTriggered()));
}


MainWindowUserDialog::~MainWindowUserDialog()
{
    delete ui;
}

void MainWindowUserDialog::presetProfileImage_Main()
{
    //    auto fs = cmrc::foo::get_filesystem();
    //    auto data = fs.open("IMG_0292.PNG");
    //    const auto data_size = std::distance(data.begin(), data.end());
    //    bool f = QResource::registerResource("resources.rcc");
    //    f = QResource::registerResource("resources-small.rcc");
    //    QPixmap test(":/Glad_fjes.GIF");

    QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
    ui->label_profilePicture_Main->setPixmap(pix);
    ui->label_profilePicture_Main->setScaledContents(true);
    ui->label_profilePicture_Main->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void MainWindowUserDialog::on_pushButton_Profile_clicked()
{
    openProfile.setModal(true);
    openProfile.exec();
}

void MainWindowUserDialog::on_pushButton_startTest_clicked()
{
    openQuestion.setModal(true);
    openQuestion.exec();
}

void MainWindowUserDialog::on_pushButton_Results_clicked()
{
    openResults.setModal(true);
    openResults.exec();
}

void MainWindowUserDialog::on_pushButton_Reminders_clicked()
{
    openTasks.setModal(true);
    openTasks.exec();
}

void MainWindowUserDialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Inactive", "KroppKunn er ikke satt opp");
    //startUpBodyTest.setModal(true);
    //startUpBodyTest.exec();

}

void MainWindowUserDialog::on_pushButton_2_clicked()
{
    close();
}

void MainWindowUserDialog::on_pushButton_3_clicked()
{
    openDatabase.setModal(true);
    openDatabase.exec();
}
