/********************************************************************************
** Form generated from reading UI file 'cnfdialog.ui'
**
** Created: Thu Apr 26 21:38:44 2012
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNFDIALOG_H
#define UI_CNFDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

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
            cnfDialog->setObjectName(QString::fromUtf8("cnfDialog"));
        cnfDialog->setWindowModality(Qt::WindowModal);
        cnfDialog->resize(307, 201);
        cnfDialog->setModal(true);
        buttonBox = new QDialogButtonBox(cnfDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(110, 160, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        passlineEdit = new QLineEdit(cnfDialog);
        passlineEdit->setObjectName(QString::fromUtf8("passlineEdit"));
        passlineEdit->setGeometry(QRect(100, 130, 181, 20));
        label = new QLabel(cnfDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 81, 16));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(cnfDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 81, 16));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverlineEdit = new QLineEdit(cnfDialog);
        serverlineEdit->setObjectName(QString::fromUtf8("serverlineEdit"));
        serverlineEdit->setGeometry(QRect(100, 40, 181, 20));
        databaselineEdit = new QLineEdit(cnfDialog);
        databaselineEdit->setObjectName(QString::fromUtf8("databaselineEdit"));
        databaselineEdit->setGeometry(QRect(100, 70, 181, 20));
        label_4 = new QLabel(cnfDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 130, 81, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(cnfDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 16));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        loginlineEdit = new QLineEdit(cnfDialog);
        loginlineEdit->setObjectName(QString::fromUtf8("loginlineEdit"));
        loginlineEdit->setGeometry(QRect(100, 100, 181, 20));
        label_5 = new QLabel(cnfDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 10, 291, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QWidget::setTabOrder(serverlineEdit, databaselineEdit);
        QWidget::setTabOrder(databaselineEdit, loginlineEdit);
        QWidget::setTabOrder(loginlineEdit, passlineEdit);
        QWidget::setTabOrder(passlineEdit, buttonBox);

        retranslateUi(cnfDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), cnfDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), cnfDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(cnfDialog);
    } // setupUi

    void retranslateUi(QDialog *cnfDialog)
    {
        cnfDialog->setWindowTitle(QApplication::translate("cnfDialog", "Configuraci\303\263n", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("cnfDialog", "Servidor:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("cnfDialog", "Usuario:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("cnfDialog", "Password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("cnfDialog", "Base de datos:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("cnfDialog", "Par\303\241metros  de conexi\303\263n al servidor MySQL:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class cnfDialog: public Ui_cnfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNFDIALOG_H
