#ifndef TASKSDIALOG_H
#define TASKSDIALOG_H

#include <QDialog>

namespace Ui {
class tasksDialog;
}

class tasksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit tasksDialog(QWidget *parent = nullptr);
    ~tasksDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::tasksDialog *ui;
};

#endif // TASKSDIALOG_H
