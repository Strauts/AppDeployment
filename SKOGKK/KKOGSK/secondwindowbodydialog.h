#ifndef SECONDWINDOWBODYDIALOG_H
#define SECONDWINDOWBODYDIALOG_H

#include <QDialog>

namespace Ui {
class secondWindowBodyDialog;
}

class secondWindowBodyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secondWindowBodyDialog(QWidget *parent = nullptr);
    ~secondWindowBodyDialog();

private:
    Ui::secondWindowBodyDialog *ui;
};

#endif // SECONDWINDOWBODYDIALOG_H
