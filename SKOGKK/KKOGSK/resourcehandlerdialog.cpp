#include "resourcehandlerdialog.h"
#include "ui_resourcehandlerdialog.h"

resourceHandlerDialog::resourceHandlerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resourceHandlerDialog)
{
    ui->setupUi(this);
}

resourceHandlerDialog::~resourceHandlerDialog()
{
    delete ui;
}
