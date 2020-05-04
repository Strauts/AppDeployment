#ifndef ONEPICQUESTIONDIALOG_H
#define ONEPICQUESTIONDIALOG_H

#include <QDialog>

namespace Ui {
class onePicQuestionDialog;
}

class onePicQuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit onePicQuestionDialog(QWidget *parent = nullptr);
    ~onePicQuestionDialog();

    QString text;
    QString text2;

    int imageNr;
    void chooseImage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::onePicQuestionDialog *ui;
};

#endif // ONEPICQUESTIONDIALOG_H
