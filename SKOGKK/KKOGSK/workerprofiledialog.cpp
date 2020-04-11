#include "workerprofiledialog.h"
#include "ui_workerprofiledialog.h"

workerProfileDialog::workerProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workerProfileDialog)
{
    ui->setupUi(this);
    presetProfilePictureWorker();
}

workerProfileDialog::~workerProfileDialog()
{
    delete ui;
}

void workerProfileDialog::presetProfilePictureWorker()
{
    QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
    ui->label_profilePicture->setPixmap(pix);
    ui->label_profilePicture->setScaledContents(true);
    ui->label_profilePicture->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void workerProfileDialog::on_pushButton_2_clicked()
{
    openPatientProfileWorker.setModal(true);
    openPatientProfileWorker.exec();
}



void workerProfileDialog::on_pushButton_Calender_Profile_2_clicked()
{
    openCalenderProfileWorker.setModal(true);
    openCalenderProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_Tasks_2_clicked()
{
    openTasksProfileWorker.setModal(true);
    openTasksProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_Results_Profile_2_clicked()
{
    openResultsProfileWorker.setModal(true);
    openResultsProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_Rewards_Profile_2_clicked()
{
    openRewardProfileWorker.setModal(true);
    openRewardProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_Avatar_Profile_2_clicked()
{
    openAvatarProfileWorker.setModal(true);
    openAvatarProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_Settings_Profile_2_clicked()
{
    openSettingsProfileWorker.setModal(true);
    openSettingsProfileWorker.exec();
}

void workerProfileDialog::on_pushButton_clicked()
{
    close();
}
