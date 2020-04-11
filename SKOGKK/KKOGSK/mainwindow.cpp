#include "mainwindow.h"
#include "./ui_mainwindow.h"
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
#include <ui_mainwindow.h>
#include <QApplication>
#include <QTimer>
#include <QPixmap>

//#include <cmrc/cmrc.hpp>



//CMRC_DECLARE(foo);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    if(startUpTest.loginOK == false)
    {
        startUpTest.setModal(true);
        startUpTest.exec();
    }
    if(startUpTest.isWorker == false && startUpTest.loginOK == true)
    {
        ui->setupUi(this);
        presetProfileImage_Main();
    }
    else if(startUpTest.isWorker == true && startUpTest.loginOK == true)
    {
        openWorkerHome.setModal(true);
        openWorkerHome.exec();
    }
    QObject::connect(ui->actionOpen_File, SIGNAL(triggered()), this, SLOT(onOpenActionTriggered()));
}

inline void MainWindow::initializeImageFileDialog(QFileDialog & dialog)
{
    static bool first_dialog = true;

    if(first_dialog)
    {
        first_dialog = false;
        const QStringList pictures_locations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
        dialog.setDirectory(pictures_locations.isEmpty() ? QDir::currentPath() : pictures_locations.last());
    }

    auto image_types_array = QImageReader::supportedMimeTypes();
    QStringList mime_type_filters;
    for (const auto type : image_types_array)
    {
        mime_type_filters.append(type);
    }
    mime_type_filters.sort();

    dialog.setMimeTypeFilters(mime_type_filters);
    dialog.selectMimeTypeFilter("image/jpec/gif/png");
}

//qt5Qaction - check for what slots and signals are available - example - "triggered()"
void MainWindow::onOpenActionTriggered()
{
    QFileDialog file_dialog(this, tr("Open Image"));
    initializeImageFileDialog(file_dialog);
    const auto result = file_dialog.exec();
    if(result == QDialog::Accepted)
    {
        //load the file
        auto path = file_dialog.selectedFiles().first();
        QImageReader image_reader(path);
        const QImage image = image_reader.read();

        if(!image.isNull())
        {
            //QMovie *movie = new QMovie("C:/Users/morga/Downloads/IMG_0294.GIF");
            ui->label_profilePicture_Main->setPixmap(QPixmap::fromImage(image));
            ui->label_profilePicture_Main->setScaledContents(true);
            ui->label_profilePicture_Main->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            //ui->label->setMovie(movie);
            // movie->start();

            //ui->label->resize(ui->label->pixmap()->size());
        }
    }
    //Open a file dialog - QFileDialog -- static functions give good functionality
    //    auto selected_file = QFileDialog::getOpenFileName(this, tr("Open a file"), QApplication::applicationDirPath());
    //    if(!selected_file.isNull())
    //    {
    //        std::cout << selected_file.toStdString() << std::endl;
    //    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::presetProfileImage_Main()
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

void MainWindow::on_pushButton_Profile_clicked()
{
    openProfile.setModal(true);
    openProfile.exec();
}

void MainWindow::on_pushButton_startTest_clicked()
{
    openQuestion.setModal(true);
    openQuestion.exec();
}

void MainWindow::on_pushButton_Results_clicked()
{
    openResults.setModal(true);
    openResults.exec();
}

void MainWindow::on_pushButton_Reminders_clicked()
{
    openTasks.setModal(true);
    openTasks.exec();
}

void MainWindow::on_pushButton_clicked()
{
    close();
    openWorkerHome.setModal(true);
    openWorkerHome.exec();

}
