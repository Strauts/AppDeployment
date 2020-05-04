#include "calenderdialog.h"
#include "ui_calenderdialog.h"

calenderDialog::calenderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calenderDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    presetCalenderPicture();
}

calenderDialog::~calenderDialog()
{
    delete ui;
}

void calenderDialog::presetCalenderPicture()
{
    QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
    ui->label_Calender_Picture->setPixmap(pix);
    ui->label_Calender_Picture->setScaledContents(true);
    ui->label_Calender_Picture->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void calenderDialog::on_pushButton_clicked()
{
    close();
}
