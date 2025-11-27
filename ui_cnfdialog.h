/********************************************************************************
** Form generated from reading UI file 'cnfdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNFDIALOG_H
#define UI_CNFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_cnfDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *passlineEdit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *serverlineEdit;
    QLineEdit *databaselineEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *loginlineEdit;
    QLabel *label_5;

    void setupUi(QDialog *cnfDialog)
    {
        if (cnfDialog->objectName().isEmpty())
            cnfDialog->setObjectName("cnfDialog");
        cnfDialog->setWindowModality(Qt::WindowModal);
        cnfDialog->resize(307, 201);
        cnfDialog->setModal(true);
        buttonBox = new QDialogButtonBox(cnfDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(110, 160, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        passlineEdit = new QLineEdit(cnfDialog);
        passlineEdit->setObjectName("passlineEdit");
        passlineEdit->setGeometry(QRect(100, 130, 181, 20));
        label = new QLabel(cnfDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 81, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(cnfDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 81, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverlineEdit = new QLineEdit(cnfDialog);
        serverlineEdit->setObjectName("serverlineEdit");
        serverlineEdit->setGeometry(QRect(100, 40, 181, 20));
        databaselineEdit = new QLineEdit(cnfDialog);
        databaselineEdit->setObjectName("databaselineEdit");
        databaselineEdit->setGeometry(QRect(100, 70, 181, 20));
        label_4 = new QLabel(cnfDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 81, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(cnfDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 81, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        loginlineEdit = new QLineEdit(cnfDialog);
        loginlineEdit->setObjectName("loginlineEdit");
        loginlineEdit->setGeometry(QRect(100, 100, 181, 20));
        label_5 = new QLabel(cnfDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 10, 291, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bitstream Charter")});
        font.setPointSize(10);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QWidget::setTabOrder(serverlineEdit, databaselineEdit);
        QWidget::setTabOrder(databaselineEdit, loginlineEdit);
        QWidget::setTabOrder(loginlineEdit, passlineEdit);
        QWidget::setTabOrder(passlineEdit, buttonBox);

        retranslateUi(cnfDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, cnfDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, cnfDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(cnfDialog);
    } // setupUi

    void retranslateUi(QDialog *cnfDialog)
    {
        cnfDialog->setWindowTitle(QCoreApplication::translate("cnfDialog", "Configuraci\303\263n", nullptr));
        label->setText(QCoreApplication::translate("cnfDialog", "Servidor:", nullptr));
        label_3->setText(QCoreApplication::translate("cnfDialog", "Usuario:", nullptr));
        label_4->setText(QCoreApplication::translate("cnfDialog", "Password:", nullptr));
        label_2->setText(QCoreApplication::translate("cnfDialog", "Base de datos:", nullptr));
        label_5->setText(QCoreApplication::translate("cnfDialog", "Par\303\241metros  de conexi\303\263n al servidor MySQL:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cnfDialog: public Ui_cnfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNFDIALOG_H
