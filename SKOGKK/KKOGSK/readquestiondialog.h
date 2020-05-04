#ifndef READQUESTIONDIALOG_H
#define READQUESTIONDIALOG_H

#include <QDialog>
#include "commentdialog.h"

namespace Ui {
class readQuestionDialog;
}

class readQuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit readQuestionDialog(QWidget *parent = nullptr);
    ~readQuestionDialog();

    void readComments();
    QString getComment;
    commentDialog readComment;

private slots:
    void on_pushButton_clicked();


private:
    Ui::readQuestionDialog *ui;
};

#endif // READQUESTIONDIALOG_H
