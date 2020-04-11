#ifndef CHANGEPWDIALOG_H
#define CHANGEPWDIALOG_H

#include <QDialog>

namespace Ui {
class changePWDialog;
}

class changePWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit changePWDialog(QWidget *parent = nullptr);
    ~changePWDialog();

private:
    Ui::changePWDialog *ui;
};

#endif // CHANGEPWDIALOG_H
