#ifndef AVATARDIALOG_H
#define AVATARDIALOG_H

#include <QDialog>

namespace Ui {
class avatarDialog;
}

class avatarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit avatarDialog(QWidget *parent = nullptr);
    ~avatarDialog();
    void presetAvatar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::avatarDialog *ui;
};

#endif // AVATARDIALOG_H
