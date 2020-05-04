#include "resourcehandlerdialog.h"
#include "ui_resourcehandlerdialog.h"

resourceHandlerDialog::resourceHandlerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resourceHandlerDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

resourceHandlerDialog::~resourceHandlerDialog()
{
    delete ui;
}
