#ifndef REWARDDIALOG_H
#define REWARDDIALOG_H

#include <QDialog>

namespace Ui {
class rewardDialog;
}

class rewardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit rewardDialog(QWidget *parent = nullptr);
    ~rewardDialog();


private:
    Ui::rewardDialog *ui;
};

#endif // REWARDDIALOG_H
