#ifndef QUESTIONDIALOG_H
#define QUESTIONDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "secondwindowdialog.h"


namespace Ui { class QuestionDialog; }

class QuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionDialog(QWidget *parent = nullptr);
    ~QuestionDialog();

    void setupImage();
    void setupImage_2();
    void setupImage_3();
    void setupImage_4();
    void setupImage_5();

    void chooseImage();

    SecondWindowDialog gifWindow;

    int buttonValue;
    int test;

public slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private slots:


    void on_pushButton_6_clicked();

private:
    Ui::QuestionDialog *ui;
};

#endif // QUESTIONDIALOG_H
