#ifndef WORKERPROFILEDIALOG_H
#define WORKERPROFILEDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "calenderdialog.h"
#include "avatardialog.h"
#include "tasksdialog.h"
#include "rewarddialog.h"
#include "settingsdialog.h"
#include "patientdialog.h"
#include "workerresultdialog.h"

namespace Ui {
class workerProfileDialog;
}

class workerProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit workerProfileDialog(QWidget *parent = nullptr);
    ~workerProfileDialog();

    void presetProfilePictureWorker();

    calenderDialog openCalenderProfileWorker;
    workerResultDialog openResultsProfileWorker;
    avatarDialog openAvatarProfileWorker;
    tasksDialog openTasksProfileWorker;
    rewardDialog openRewardProfileWorker;
    settingsDialog openSettingsProfileWorker;
    patientDialog openPatientProfileWorker;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_Calender_Profile_2_clicked();

    void on_pushButton_Tasks_2_clicked();

    void on_pushButton_Results_Profile_2_clicked();

//    void on_pushButton_Rewards_Profile_2_clicked();

    void on_pushButton_Avatar_Profile_2_clicked();

    void on_pushButton_Settings_Profile_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::workerProfileDialog *ui;
};

#endif // WORKERPROFILEDIALOG_H
