#ifndef MAINWINDOWUSERDIALOG_H
#define MAINWINDOWUSERDIALOG_H

#include <QMainWindow>
#include <QFileDialog>
#include "secondwindowdialog.h"
#include "questiondialog.h"
#include "logindialog.h"
#include "ui_LoginDialog.h"
#include "profiledialog.h"
#include "qt5databasedialog.h"
#include "tasksdialog.h"
#include "homepagedialog.h"
#include "resultsdialog.h"
#include "bodyquestiondialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowUserDialog; }
QT_END_NAMESPACE

class MainWindowUserDialog : public QDialog
{
    //Ensures that everything works as expected for qt5 - this macro is declared in the header files
    Q_OBJECT

public:
    MainWindowUserDialog(QWidget *parent = nullptr);
    ~MainWindowUserDialog();
    void presetProfileImage_Main();

    QuestionDialog openQuestion;
    SecondWindowDialog secWindow;
    LoginDialog startUpTest;
    ProfileDialog openProfile;
    resultsDialog openResults;
    qt5DatabaseDialog openDatabase;
    tasksDialog openTasks;
    homepageDialog openWorkerHome;
    bodyQuestionDialog startUpBodyTest;


    bool dateCheck;


public slots:

    void on_pushButton_Profile_clicked();

    void on_pushButton_startTest_clicked();

    void on_pushButton_Results_clicked();

    void on_pushButton_Reminders_clicked();


private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindowUserDialog *ui;
};

#endif // MAINWINDOWUSERDIALOG_H
