#ifndef RESOURCEHANDLERDIALOG_H
#define RESOURCEHANDLERDIALOG_H

#include <QDialog>

namespace Ui {
class resourceHandlerDialog;
}

class resourceHandlerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit resourceHandlerDialog(QWidget *parent = nullptr);
    ~resourceHandlerDialog();


private:
    Ui::resourceHandlerDialog *ui;
};

#endif // RESOURCEHANDLERDIALOG_H
