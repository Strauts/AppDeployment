#ifndef BODYQUESTIONDIALOG_H
#define BODYQUESTIONDIALOG_H

#include <QDialog>

namespace Ui {
class bodyQuestionDialog;
}

class bodyQuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit bodyQuestionDialog(QWidget *parent = nullptr);
    ~bodyQuestionDialog();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::bodyQuestionDialog *ui;
};

#endif // BODYQUESTIONDIALOG_H
