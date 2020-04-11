#ifndef RESULTSDIALOG_H
#define RESULTSDIALOG_H

#include <QDialog>
#include "commentdialog.h"

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

private slots:
    void on_pushButton_clicked();

    void on_pushButto_Comment_1_clicked();

private:
    Ui::resultsDialog *ui;
};

#endif // RESULTSDIALOG_H
