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

private:
    Ui::bodyQuestionDialog *ui;
};

#endif // BODYQUESTIONDIALOG_H
