#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "secondwindowdialog.h"
//#include "questiondialog.h"
#include "logindialog.h"
//#include "ui_LoginDialog.h"
//#include "profiledialog.h"
//#include "qt5databasedialog.h"
//#include "tasksdialog.h"
#include "homepagedialog.h"
//#include "resultsdialog.h"
//#include "bodyquestiondialog.h"
#include "mainwindowuserdialog.h"
#include "jumpqdialog.h"

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

    LoginDialog startUpTest;
    jumpQDialog jumpQuestion;
    homepageDialog openWorkerHome;
    MainWindowUserDialog openMain;

    bool dateCheck;


public slots:


private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
