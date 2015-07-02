#include "cnfdialog.h"
#include "ui_cnfdialog.h"
#include "settings.h"
#include <QMessageBox>
#include <QDebug>


cnfDialog::cnfDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cnfDialog)
{
    ui->setupUi(this);

}

cnfDialog::~cnfDialog()
{
    delete ui;
}


