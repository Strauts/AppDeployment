#ifndef RESULTSDIALOG_H
#define RESULTSDIALOG_H

#include <QDialog>
#include "commentdialog.h"
#include "readquestiondialog.h"

namespace Ui {
class resultsDialog;
}

class resultsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit resultsDialog(QWidget *parent = nullptr);
    ~resultsDialog();

    commentDialog openCommentDialog;
    readQuestionDialog getQuestionComment;

private slots:
    void on_pushButton_clicked();

    void on_pushButto_Comment_1_clicked();

    void on_pushButton_Comment_2_clicked();

    void on_pushButton_Comment_9_clicked();

    void on_pushButton_Comment_3_clicked();

    void on_pushButton_Comment_4_clicked();

    void on_pushButton_Comment_5_clicked();

    void on_pushButton_Comment_6_clicked();

    void on_pushButton_Comment_7_clicked();

    void on_pushButton_Comment_8_clicked();

    void on_pushButton_Comment_10_clicked();

private:
    Ui::resultsDialog *ui;
};

#endif // RESULTSDIALOG_H
