#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "resultsdialog.h"
#include "calenderdialog.h"
#include "avatardialog.h"
#include "tasksdialog.h"
#include "rewarddialog.h"
#include "settingsdialog.h"

namespace Ui {
class ProfileDialog;
}

class ProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileDialog(QWidget *parent = nullptr);
    ~ProfileDialog();

    void presetProfilePicture();

    calenderDialog openCalenderProfile;
    resultsDialog openResultsProfile;
    avatarDialog openAvatarProfile;
    tasksDialog openTasksProfile;
    rewardDialog openRewardProfile;
    settingsDialog openSettingsProfile;

public slots:
    void on_pushButton_Calender_Profile_clicked();

    void on_pushButton_Tasks_clicked();

    void on_pushButton_Results_Profile_clicked();

    void on_pushButton_Rewards_Profile_clicked();

    void on_pushButton_Avatar_Profile_clicked();

    void on_pushButton_Settings_Profile_clicked();

private slots:


    void on_pushButton_clicked();

private:
    Ui::ProfileDialog *ui;
};

#endif // PROFILEDIALOG_H
