#ifndef SECONDWINDOWDIALOG_H
#define SECONDWINDOWDIALOG_H

#include <QDialog>
#include <QFileDialog>
namespace Ui { class SecondWindowDialog; }

class QuestionDialog;

class SecondWindowDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindowDialog(QWidget *parent = nullptr);
    ~SecondWindowDialog();

    void setUpGif();
    void setUpGif_2();
    void setUpGif_3();
    void setUpGif_4();
    void chooseGif();

    int getID();
    void setID(int &value);
    int getNextQuestion();
    void setNextQuestion(int &value);

    int ID;
    int nextQuestion = 0;
    QString text;
    QString text2;

    bool answerCorrect = false;


public slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private slots:

private:
    Ui::SecondWindowDialog *ui;

};

#endif // SECONDWINDOWDIALOG_H
