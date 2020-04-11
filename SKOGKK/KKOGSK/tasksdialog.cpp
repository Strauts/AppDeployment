#include "tasksdialog.h"
#include "ui_tasksdialog.h"

tasksDialog::tasksDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tasksDialog)
{
    ui->setupUi(this);
}

tasksDialog::~tasksDialog()
{
    delete ui;
}

void tasksDialog::on_pushButton_clicked()
{
    close();
}

void tasksDialog::on_pushButton_2_clicked()
{

}
