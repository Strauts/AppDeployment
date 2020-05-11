#include "profiledialog.h"
#include "ui_profiledialog.h"

ProfileDialog::ProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfileDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    presetProfilePicture();
}

ProfileDialog::~ProfileDialog()
{
    delete ui;
}

void ProfileDialog::presetProfilePicture()
{
    QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
    ui->label_profilePicture->setPixmap(pix);
    ui->label_profilePicture->setScaledContents(true);
    ui->label_profilePicture->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void ProfileDialog::on_pushButton_Calender_Profile_clicked()
{
    openCalenderProfile.setModal(true);
    openCalenderProfile.exec();
}

void ProfileDialog::on_pushButton_Tasks_clicked()
{
    openTasksProfile.setModal(true);
    openTasksProfile.exec();
}

void ProfileDialog::on_pushButton_Results_Profile_clicked()
{
    openResultsProfile.setModal(true);
    openResultsProfile.exec();
}

//void ProfileDialog::on_pushButton_Rewards_Profile_clicked()
//{
//    openRewardProfile.setModal(true);
//    openRewardProfile.exec();
//}

void ProfileDialog::on_pushButton_Avatar_Profile_clicked()
{
    openAvatarProfile.setModal(true);
    openAvatarProfile.exec();
}

void ProfileDialog::on_pushButton_Settings_Profile_clicked()
{
    openSettingsProfile.setModal(true);
    openSettingsProfile.exec();
}

void ProfileDialog::on_pushButton_clicked()
{
    close();
}
