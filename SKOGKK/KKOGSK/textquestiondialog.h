#ifndef TEXTQUESTIONDIALOG_H
#define TEXTQUESTIONDIALOG_H

#include <QDialog>

namespace Ui {
class textQuestionDialog;
}

class textQuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit textQuestionDialog(QWidget *parent = nullptr);
    ~textQuestionDialog();

    QString text;
    QString text2;

    int textNr;
    int jumpQ;
    void chooseNr();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::textQuestionDialog *ui;
};

#endif // TEXTQUESTIONDIALOG_H
