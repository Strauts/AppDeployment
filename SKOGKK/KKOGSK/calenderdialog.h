#ifndef CALENDERDIALOG_H
#define CALENDERDIALOG_H

#include <QDialog>

namespace Ui {
class calenderDialog;
}

class calenderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit calenderDialog(QWidget *parent = nullptr);
    ~calenderDialog();

    void presetCalenderPicture();

private slots:
    void on_pushButton_clicked();

private:
    Ui::calenderDialog *ui;
};

#endif // CALENDERDIALOG_H
