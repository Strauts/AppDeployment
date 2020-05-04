#include "patientdialog.h"
#include "ui_patientdialog.h"

patientDialog::patientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

patientDialog::~patientDialog()
{
    delete ui;
}

void patientDialog::on_pushButton_clicked()
{
    openPatientInformation.setModal(true);
    openPatientInformation.exec();
}

void patientDialog::on_pushButton_7_clicked()
{
    close();
}
