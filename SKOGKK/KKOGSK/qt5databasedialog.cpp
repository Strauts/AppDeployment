#include "qt5databasedialog.h"
#include "ui_qt5databasedialog.h"
#include <QSqlDatabase>

qt5DatabaseDialog::qt5DatabaseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::qt5DatabaseDialog)
{
    ui->setupUi(this);
}

qt5DatabaseDialog::~qt5DatabaseDialog()
{
    delete ui;
}

void qt5DatabaseDialog::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("userid");

    if(db.open())
    {
        QMessageBox::information(this, "Connection", "Database Connection Succeded");
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database Connection Failed");
    }
}

void qt5DatabaseDialog::on_pushButton_2_clicked()
{
    close();
}
