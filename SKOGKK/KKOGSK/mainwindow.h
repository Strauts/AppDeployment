#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    //Ensures that everything works as expected for qt5 - this macro is declared in the header files
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void presetProfileImage_Main();

    QuestionDialog openQuestion;
    SecondWindowDialog secWindow;
    LoginDialog startUpTest;
    ProfileDialog openProfile;
    resultsDialog openResults;
    qt5DatabaseDialog openDatabase;
    tasksDialog openTasks;
    homepageDialog openWorkerHome;

    bool dateCheck;


public slots:
    void onOpenActionTriggered();
    inline void initializeImageFileDialog(QFileDialog & dialog);

    void on_pushButton_Profile_clicked();

    void on_pushButton_startTest_clicked();

    void on_pushButton_Results_clicked();

    void on_pushButton_Reminders_clicked();


private slots:


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
