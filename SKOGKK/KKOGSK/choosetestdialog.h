#ifndef CHOOSETESTDIALOG_H
#define CHOOSETESTDIALOG_H

#include <QDialog>
#include "questiondialog.h"

namespace Ui {
class chooseTestDialog;
}

class chooseTestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit chooseTestDialog(QWidget *parent = nullptr);
    ~chooseTestDialog();

    QuestionDialog openSexKunn;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::chooseTestDialog *ui;
};

#endif // CHOOSETESTDIALOG_H
