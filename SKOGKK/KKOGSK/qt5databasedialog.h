#ifndef QT5DATABASEDIALOG_H
#define QT5DATABASEDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class qt5DatabaseDialog;
}

class qt5DatabaseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit qt5DatabaseDialog(QWidget *parent = nullptr);
    ~qt5DatabaseDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::qt5DatabaseDialog *ui;
};

#endif // QT5DATABASEDIALOG_H
