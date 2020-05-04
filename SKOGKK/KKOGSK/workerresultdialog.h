#ifndef WORKERRESULTDIALOG_H
#define WORKERRESULTDIALOG_H

#include <QDialog>
#include "commentdialog.h"

namespace Ui {
class workerResultDialog;
}

class workerResultDialog : public QDialog
{
    Q_OBJECT

public:
    explicit workerResultDialog(QWidget *parent = nullptr);
    ~workerResultDialog();

    commentDialog openComment;

private slots:
    void on_pushButto_Comment_1_clicked();

    void on_pushButton_clicked();

    void on_pushButton_Comment_2_clicked();

    void on_pushButton_Comment_3_clicked();

    void on_pushButton_Comment_4_clicked();

    void on_pushButton_Comment_5_clicked();

    void on_pushButton_Comment_6_clicked();

    void on_pushButton_Comment_7_clicked();

    void on_pushButton_Comment_8_clicked();

    void on_pushButton_Comment_9_clicked();

    void on_pushButton_Comment_10_clicked();

private:
    Ui::workerResultDialog *ui;
};

#endif // WORKERRESULTDIALOG_H
