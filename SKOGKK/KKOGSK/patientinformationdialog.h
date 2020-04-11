#ifndef PATIENTINFORMATIONDIALOG_H
#define PATIENTINFORMATIONDIALOG_H

#include <QDialog>

namespace Ui {
class patientInformationDialog;
}

class patientInformationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit patientInformationDialog(QWidget *parent = nullptr);
    ~patientInformationDialog();

    void presetPatientInformationPic();

private slots:
    void on_pushButton_clicked();

private:
    Ui::patientInformationDialog *ui;
};

#endif // PATIENTINFORMATIONDIALOG_H
