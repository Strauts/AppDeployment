#include "homepagedialog.h"
#include "ui_homepagedialog.h"

homepageDialog::homepageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepageDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    presetProfileImage_Main();
}

homepageDialog::~homepageDialog()
{
    delete ui;
}

void homepageDialog::presetProfileImage_Main()
{
    QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
    ui->label_profilePicture_Main->setPixmap(pix);
    ui->label_profilePicture_Main->setScaledContents(true);
    ui->label_profilePicture_Main->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void homepageDialog::on_pushButton_Profile_clicked()
{
    openProfileWorker.setModal(true);
    openProfileWorker.exec();
}

void homepageDialog::on_pushButton_startTest_clicked()
{
    openPatients.setModal(true);
    openPatients.exec();
}

void homepageDialog::on_pushButton_Results_clicked()
{
    openResultsWorker.setModal(true);
    openResultsWorker.exec();
}

void homepageDialog::on_pushButton_Reminders_clicked()
{
    openTasksWorker.setModal(true);
    openTasksWorker.exec();
}

void homepageDialog::on_pushButton_clicked()
{
    openDatabaseWorker.setModal(true);
    openDatabaseWorker.exec();
}

void homepageDialog::on_pushButton_2_clicked()
{
    exit = true;
    close();
}
