/********************************************************************************
** Form generated from reading UI file 'chekinadmin.ui'
**
** Created: Thu 26. Apr 15:46:39 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEKINADMIN_H
#define UI_CHEKINADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chekinadmin
{
public:
    QAction *actionSalir;
    QAction *actionAcerca_de_checkinadmin;
    QAction *actionConfiguraci_n;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Checkin;
    QGroupBox *groupBox;
    QLineEdit *nombrelineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *apellidolineEdit;
    QLabel *label_3;
    QLineEdit *cedulalineEdit;
    QPushButton *pushButton;
    QPushButton *limpiarPpushButton;
    QLabel *errorCedula;
    QGroupBox *equipogroupBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *seriallineEdit;
    QComboBox *tipocomboBox;
    QLineEdit *marcalineEdit;
    QPushButton *addButton;
    QPushButton *limpiarLpushButton;
    QLineEdit *modelolineEdit;
    QLabel *label_7;
    QWidget *Checkout;
    QGroupBox *groupBox_3;
    QLabel *label_9;
    QLineEdit *cedulaBlineEdit;
    QLabel *nombrelabel;
    QLabel *apellidolabel;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuCheckinadmin;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *chekinadmin)
    {
        if (chekinadmin->objectName().isEmpty())
            chekinadmin->setObjectName(QString::fromUtf8("chekinadmin"));
        chekinadmin->resize(610, 430);
        actionSalir = new QAction(chekinadmin);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAcerca_de_checkinadmin = new QAction(chekinadmin);
        actionAcerca_de_checkinadmin->setObjectName(QString::fromUtf8("actionAcerca_de_checkinadmin"));
        actionConfiguraci_n = new QAction(chekinadmin);
        actionConfiguraci_n->setObjectName(QString::fromUtf8("actionConfiguraci_n"));
        centralWidget = new QWidget(chekinadmin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 381));
        Checkin = new QWidget();
        Checkin->setObjectName(QString::fromUtf8("Checkin"));
        groupBox = new QGroupBox(Checkin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 581, 171));
        nombrelineEdit = new QLineEdit(groupBox);
        nombrelineEdit->setObjectName(QString::fromUtf8("nombrelineEdit"));
        nombrelineEdit->setGeometry(QRect(110, 60, 181, 21));
        nombrelineEdit->setMaxLength(50);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 91, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 91, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        apellidolineEdit = new QLineEdit(groupBox);
        apellidolineEdit->setObjectName(QString::fromUtf8("apellidolineEdit"));
        apellidolineEdit->setGeometry(QRect(110, 90, 181, 21));
        apellidolineEdit->setMaxLength(50);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(19, 30, 81, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cedulalineEdit = new QLineEdit(groupBox);
        cedulalineEdit->setObjectName(QString::fromUtf8("cedulalineEdit"));
        cedulalineEdit->setGeometry(QRect(110, 30, 181, 21));
        cedulalineEdit->setMaxLength(10);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 130, 151, 27));
        limpiarPpushButton = new QPushButton(groupBox);
        limpiarPpushButton->setObjectName(QString::fromUtf8("limpiarPpushButton"));
        limpiarPpushButton->setGeometry(QRect(320, 130, 92, 27));
        errorCedula = new QLabel(groupBox);
        errorCedula->setObjectName(QString::fromUtf8("errorCedula"));
        errorCedula->setGeometry(QRect(300, 30, 171, 17));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush1(QColor(170, 171, 169, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        errorCedula->setPalette(palette);
        equipogroupBox = new QGroupBox(Checkin);
        equipogroupBox->setObjectName(QString::fromUtf8("equipogroupBox"));
        equipogroupBox->setEnabled(false);
        equipogroupBox->setGeometry(QRect(10, 200, 581, 141));
        label_4 = new QLabel(equipogroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 81, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(equipogroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 50, 81, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(equipogroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 80, 81, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        seriallineEdit = new QLineEdit(equipogroupBox);
        seriallineEdit->setObjectName(QString::fromUtf8("seriallineEdit"));
        seriallineEdit->setEnabled(false);
        seriallineEdit->setGeometry(QRect(110, 20, 181, 21));
        seriallineEdit->setMaxLength(50);
        tipocomboBox = new QComboBox(equipogroupBox);
        tipocomboBox->setObjectName(QString::fromUtf8("tipocomboBox"));
        tipocomboBox->setEnabled(false);
        tipocomboBox->setGeometry(QRect(110, 50, 181, 21));
        tipocomboBox->setEditable(true);
        tipocomboBox->setMaxCount(50);
        marcalineEdit = new QLineEdit(equipogroupBox);
        marcalineEdit->setObjectName(QString::fromUtf8("marcalineEdit"));
        marcalineEdit->setEnabled(false);
        marcalineEdit->setGeometry(QRect(110, 80, 181, 21));
        marcalineEdit->setMaxLength(50);
        addButton = new QPushButton(equipogroupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setEnabled(false);
        addButton->setGeometry(QRect(450, 110, 121, 27));
        limpiarLpushButton = new QPushButton(equipogroupBox);
        limpiarLpushButton->setObjectName(QString::fromUtf8("limpiarLpushButton"));
        limpiarLpushButton->setGeometry(QRect(350, 110, 92, 27));
        modelolineEdit = new QLineEdit(equipogroupBox);
        modelolineEdit->setObjectName(QString::fromUtf8("modelolineEdit"));
        modelolineEdit->setEnabled(false);
        modelolineEdit->setGeometry(QRect(390, 20, 181, 21));
        modelolineEdit->setMaxLength(50);
        label_7 = new QLabel(equipogroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 20, 81, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(Checkin, QString());
        Checkout = new QWidget();
        Checkout->setObjectName(QString::fromUtf8("Checkout"));
        groupBox_3 = new QGroupBox(Checkout);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 571, 91));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 30, 60, 17));
        cedulaBlineEdit = new QLineEdit(groupBox_3);
        cedulaBlineEdit->setObjectName(QString::fromUtf8("cedulaBlineEdit"));
        cedulaBlineEdit->setGeometry(QRect(100, 30, 181, 21));
        nombrelabel = new QLabel(groupBox_3);
        nombrelabel->setObjectName(QString::fromUtf8("nombrelabel"));
        nombrelabel->setGeometry(QRect(50, 60, 211, 17));
        apellidolabel = new QLabel(groupBox_3);
        apellidolabel->setObjectName(QString::fromUtf8("apellidolabel"));
        apellidolabel->setGeometry(QRect(290, 60, 211, 17));
        tableView = new QTableView(Checkout);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 100, 571, 192));
        tabWidget->addTab(Checkout, QString());
        chekinadmin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(chekinadmin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 610, 23));
        menuCheckinadmin = new QMenu(menuBar);
        menuCheckinadmin->setObjectName(QString::fromUtf8("menuCheckinadmin"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        chekinadmin->setMenuBar(menuBar);
        statusBar = new QStatusBar(chekinadmin);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        chekinadmin->setStatusBar(statusBar);
        QWidget::setTabOrder(cedulalineEdit, nombrelineEdit);
        QWidget::setTabOrder(nombrelineEdit, apellidolineEdit);
        QWidget::setTabOrder(apellidolineEdit, pushButton);
        QWidget::setTabOrder(pushButton, seriallineEdit);
        QWidget::setTabOrder(seriallineEdit, tipocomboBox);
        QWidget::setTabOrder(tipocomboBox, marcalineEdit);
        QWidget::setTabOrder(marcalineEdit, addButton);
        QWidget::setTabOrder(addButton, cedulaBlineEdit);
        QWidget::setTabOrder(cedulaBlineEdit, tableView);
        QWidget::setTabOrder(tableView, tabWidget);

        menuBar->addAction(menuCheckinadmin->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuCheckinadmin->addSeparator();
        menuCheckinadmin->addAction(actionConfiguraci_n);
        menuCheckinadmin->addAction(actionSalir);
        menuAyuda->addAction(actionAcerca_de_checkinadmin);

        retranslateUi(chekinadmin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(chekinadmin);
    } // setupUi

    void retranslateUi(QMainWindow *chekinadmin)
    {
        chekinadmin->setWindowTitle(QApplication::translate("chekinadmin", "chekinadmin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        chekinadmin->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        actionSalir->setText(QApplication::translate("chekinadmin", "Salir", 0, QApplication::UnicodeUTF8));
        actionAcerca_de_checkinadmin->setText(QApplication::translate("chekinadmin", "Acerca de checkinadmin...", 0, QApplication::UnicodeUTF8));
        actionConfiguraci_n->setText(QApplication::translate("chekinadmin", "Configuraci\303\263n...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("chekinadmin", "Persona responsable", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("chekinadmin", "Nombre(s):", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("chekinadmin", "Apellido(s):", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("chekinadmin", "Cedula:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("chekinadmin", "Guardar responsable", 0, QApplication::UnicodeUTF8));
        limpiarPpushButton->setText(QApplication::translate("chekinadmin", "Limpiar", 0, QApplication::UnicodeUTF8));
        errorCedula->setText(QApplication::translate("chekinadmin", "*La Cedula es requerida", 0, QApplication::UnicodeUTF8));
        equipogroupBox->setTitle(QApplication::translate("chekinadmin", "Equipo", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("chekinadmin", "Serial:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("chekinadmin", "Tipo:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("chekinadmin", "Marca:", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("chekinadmin", "Agregar equipo", 0, QApplication::UnicodeUTF8));
        limpiarLpushButton->setText(QApplication::translate("chekinadmin", "Limpiar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("chekinadmin", "Modelo:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Checkin), QApplication::translate("chekinadmin", "Checkin", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("chekinadmin", "Persona responsable", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("chekinadmin", "Cedula:", 0, QApplication::UnicodeUTF8));
        nombrelabel->setText(QApplication::translate("chekinadmin", "TextLabel", 0, QApplication::UnicodeUTF8));
        apellidolabel->setText(QApplication::translate("chekinadmin", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Checkout), QApplication::translate("chekinadmin", "Checkout", 0, QApplication::UnicodeUTF8));
        menuCheckinadmin->setTitle(QApplication::translate("chekinadmin", "Archivo", 0, QApplication::UnicodeUTF8));
        menuAyuda->setTitle(QApplication::translate("chekinadmin", "Ayuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chekinadmin: public Ui_chekinadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEKINADMIN_H
