#ifndef HOMEPAGEDIALOG_H
#define HOMEPAGEDIALOG_H

#include <QMainWindow>
#include <QFileDialog>
#include "secondwindowdialog.h"
#include "questiondialog.h"
#include "logindialog.h"
#include "ui_LoginDialog.h"
#include "workerprofiledialog.h"
#include "qt5databasedialog.h"
#include "tasksdialog.h"
#include "patientdialog.h"
#include "workerresultdialog.h"

namespace Ui {
class homepageDialog;
}

class homepageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit homepageDialog(QWidget *parent = nullptr);
    ~homepageDialog();

    void presetProfileImage_Main();

    QuestionDialog openQuestionWorker;
    SecondWindowDialog secWindowWorker;
    LoginDialog startUpTestWorker;
    workerProfileDialog openProfileWorker;
    workerResultDialog openResultsWorker;
    qt5DatabaseDialog openDatabaseWorker;
    tasksDialog openTasksWorker;
    patientDialog openPatients;

    bool dateCheckWorker;


private slots:
    void on_pushButton_Profile_clicked();

    void on_pushButton_startTest_clicked();

    void on_pushButton_Results_clicked();

    void on_pushButton_Reminders_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::homepageDialog *ui;
};

#endif // HOMEPAGEDIALOG_H
