#ifndef QUESTIONDIALOG_H
#define QUESTIONDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "secondwindowdialog.h"
#include "onepicquestiondialog.h"
#include "textquestiondialog.h"

namespace Ui { class QuestionDialog; }

class QuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionDialog(QWidget *parent = nullptr);
    ~QuestionDialog();

    void chooseImage();

    SecondWindowDialog gifWindow;
    textQuestionDialog openText;
    onePicQuestionDialog openImage;

    int buttonValue;
    int buttonValue1;
    int buttonValue2;
    int buttonValue3;
    int buttonValue4;

    int test = 0;

    bool jump;

    QString text;
    QString theme;

    void chooseNr();

    void setupImage();
    void setupImage_2();
    void setupImage_3();
    void setupImage_4();
    void setupImage_5();
    void setupImage_6();
    void setupImage_7();
    void setupImage_8();
    void setupImage_9();
    void setupImage_10();
    void setupImage_11();
    void setupImage_12();
    void setupImage_13();
    void setupImage_14();
    void setupImage_15();
    void setupImage_16();
    void setupImage_17();
    void setupImage_18();
    void setupImage_19();
    void setupImage_20();
    void setupImage_21();
    void setupImage_22();
    void setupImage_23();
    void setupImage_24();
    void setupImage_25();
    void setupImage_26();
    void setupImage_27();
    void setupImage_28();
    void setupImage_29();
    void setupImage_30();
    void setupImage_31();
    void setupImage_32();
    void setupImage_33();
    void setupImage_34();
    void setupImage_35();
    void setupImage_36();
    void setupImage_37();
    void setupImage_38();
    void setupImage_39();
    void setupImage_40();
    void setupImage_41();
    void setupImage_42();
    void setupImage_43();
    void setupImage_44();
    void setupImage_45();
    void setupImage_46();
    void setupImage_47();
    void setupImage_48();
    void setupImage_49();
    void setupImage_50();
    void setupImage_51();
    void setupImage_52();
    void setupImage_53();
    void setupImage_54();
    void setupImage_55();
    void setupImage_56();
    void setupImage_57();
    void setupImage_58();
    void setupImage_59();
    void setupImage_60();
    void setupImage_61();
    void setupImage_62();
    void setupImage_63();
    void setupImage_64();

public slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private slots:


private:
    Ui::QuestionDialog *ui;
};

#endif // QUESTIONDIALOG_H
