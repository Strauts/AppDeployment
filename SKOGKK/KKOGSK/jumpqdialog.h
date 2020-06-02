#ifndef JUMPQDIALOG_H
#define JUMPQDIALOG_H

#include <QDialog>
#include <QFileDialog>
#include "questiondialog.h"
#include "secondwindowdialog.h"

namespace Ui {
class jumpQDialog;
}

class jumpQDialog : public QDialog
{
    Q_OBJECT

public:
    explicit jumpQDialog(QWidget *parent = nullptr);
    ~jumpQDialog();

    QuestionDialog proceedTest;
    SecondWindowDialog nextQ;

    void nextQuestion();

private:
    Ui::jumpQDialog *ui;
};

#endif // JUMPQDIALOG_H
