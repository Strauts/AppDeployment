#include "secondwindowbodydialog.h"
#include "ui_secondwindowbodydialog.h"

secondWindowBodyDialog::secondWindowBodyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondWindowBodyDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

secondWindowBodyDialog::~secondWindowBodyDialog()
{
    delete ui;
}
