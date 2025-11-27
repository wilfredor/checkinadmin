#ifndef CNFDIALOG_H
#define CNFDIALOG_H

#include <QDialog>

namespace Ui {
class cnfDialog;
}

class cnfDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit cnfDialog(QWidget *parent = nullptr);
    ~cnfDialog();
    
/*
private slots:
    void on_buttonBox_accepted();
*/
private:
    Ui::cnfDialog *ui;
};

#endif // CNFDIALOG_H
