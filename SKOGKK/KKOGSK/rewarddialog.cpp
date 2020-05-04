#include "rewarddialog.h"
#include "ui_rewarddialog.h"

rewardDialog::rewardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rewardDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

rewardDialog::~rewardDialog()
{
    delete ui;
}
