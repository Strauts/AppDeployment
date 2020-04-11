#ifndef PATIENTDIALOG_H
#define PATIENTDIALOG_H

#include <QDialog>
#include "patientinformationdialog.h"

namespace Ui {
class patientDialog;
}

class patientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit patientDialog(QWidget *parent = nullptr);
    ~patientDialog();

    patientInformationDialog openPatientInformation;



private slots:
    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::patientDialog *ui;
};

#endif // PATIENTDIALOG_H
