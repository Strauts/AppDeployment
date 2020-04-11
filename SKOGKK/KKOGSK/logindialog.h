#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "registerdialog.h"

namespace Ui { class LoginDialog; }

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    bool loginOK = false;
    bool isWorker = false;
    int iCheck;

    void presetPicture();

    registerDialog regUser;

private slots:
  //  void on_pushButton_clicked();

    void on_pushButton_login_clicked(bool loginSucceded);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
