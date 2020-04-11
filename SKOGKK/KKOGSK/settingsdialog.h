#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class settingsDialog;
}

class settingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingsDialog(QWidget *parent = nullptr);
    ~settingsDialog();

private slots:
    void on_goBackPushButton_clicked();

    void on_settings1_clicked();

    void on_settings2_clicked();

    void on_settings3_clicked();

    void on_settings4_clicked();

    void on_settings5_clicked();

    void on_settings6_clicked();

private:
    Ui::settingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
