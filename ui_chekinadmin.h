/********************************************************************************
** Form generated from reading UI file 'chekinadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEKINADMIN_H
#define UI_CHEKINADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

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
            chekinadmin->setObjectName("chekinadmin");
        chekinadmin->resize(610, 430);
        actionSalir = new QAction(chekinadmin);
        actionSalir->setObjectName("actionSalir");
        actionAcerca_de_checkinadmin = new QAction(chekinadmin);
        actionAcerca_de_checkinadmin->setObjectName("actionAcerca_de_checkinadmin");
        actionConfiguraci_n = new QAction(chekinadmin);
        actionConfiguraci_n->setObjectName("actionConfiguraci_n");
        centralWidget = new QWidget(chekinadmin);
        centralWidget->setObjectName("centralWidget");
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 601, 381));
        Checkin = new QWidget();
        Checkin->setObjectName("Checkin");
        groupBox = new QGroupBox(Checkin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 581, 171));
        nombrelineEdit = new QLineEdit(groupBox);
        nombrelineEdit->setObjectName("nombrelineEdit");
        nombrelineEdit->setGeometry(QRect(110, 60, 181, 21));
        nombrelineEdit->setMaxLength(50);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 91, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 91, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        apellidolineEdit = new QLineEdit(groupBox);
        apellidolineEdit->setObjectName("apellidolineEdit");
        apellidolineEdit->setGeometry(QRect(110, 90, 181, 21));
        apellidolineEdit->setMaxLength(50);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(19, 30, 81, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cedulalineEdit = new QLineEdit(groupBox);
        cedulalineEdit->setObjectName("cedulalineEdit");
        cedulalineEdit->setGeometry(QRect(110, 30, 181, 21));
        cedulalineEdit->setMaxLength(10);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 130, 151, 27));
        limpiarPpushButton = new QPushButton(groupBox);
        limpiarPpushButton->setObjectName("limpiarPpushButton");
        limpiarPpushButton->setGeometry(QRect(320, 130, 92, 27));
        errorCedula = new QLabel(groupBox);
        errorCedula->setObjectName("errorCedula");
        errorCedula->setGeometry(QRect(300, 30, 171, 17));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush1(QColor(170, 171, 169, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        errorCedula->setPalette(palette);
        equipogroupBox = new QGroupBox(Checkin);
        equipogroupBox->setObjectName("equipogroupBox");
        equipogroupBox->setEnabled(false);
        equipogroupBox->setGeometry(QRect(10, 200, 581, 141));
        label_4 = new QLabel(equipogroupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 20, 81, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(equipogroupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 50, 81, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(equipogroupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 80, 81, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        seriallineEdit = new QLineEdit(equipogroupBox);
        seriallineEdit->setObjectName("seriallineEdit");
        seriallineEdit->setEnabled(false);
        seriallineEdit->setGeometry(QRect(110, 20, 181, 21));
        seriallineEdit->setMaxLength(50);
        tipocomboBox = new QComboBox(equipogroupBox);
        tipocomboBox->setObjectName("tipocomboBox");
        tipocomboBox->setEnabled(false);
        tipocomboBox->setGeometry(QRect(110, 50, 181, 21));
        tipocomboBox->setEditable(true);
        tipocomboBox->setMaxCount(50);
        marcalineEdit = new QLineEdit(equipogroupBox);
        marcalineEdit->setObjectName("marcalineEdit");
        marcalineEdit->setEnabled(false);
        marcalineEdit->setGeometry(QRect(110, 80, 181, 21));
        marcalineEdit->setMaxLength(50);
        addButton = new QPushButton(equipogroupBox);
        addButton->setObjectName("addButton");
        addButton->setEnabled(false);
        addButton->setGeometry(QRect(450, 110, 121, 27));
        limpiarLpushButton = new QPushButton(equipogroupBox);
        limpiarLpushButton->setObjectName("limpiarLpushButton");
        limpiarLpushButton->setGeometry(QRect(350, 110, 92, 27));
        modelolineEdit = new QLineEdit(equipogroupBox);
        modelolineEdit->setObjectName("modelolineEdit");
        modelolineEdit->setEnabled(false);
        modelolineEdit->setGeometry(QRect(390, 20, 181, 21));
        modelolineEdit->setMaxLength(50);
        label_7 = new QLabel(equipogroupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(300, 20, 81, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(Checkin, QString());
        Checkout = new QWidget();
        Checkout->setObjectName("Checkout");
        groupBox_3 = new QGroupBox(Checkout);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 10, 571, 91));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 30, 60, 17));
        cedulaBlineEdit = new QLineEdit(groupBox_3);
        cedulaBlineEdit->setObjectName("cedulaBlineEdit");
        cedulaBlineEdit->setGeometry(QRect(100, 30, 181, 21));
        nombrelabel = new QLabel(groupBox_3);
        nombrelabel->setObjectName("nombrelabel");
        nombrelabel->setGeometry(QRect(50, 60, 211, 17));
        apellidolabel = new QLabel(groupBox_3);
        apellidolabel->setObjectName("apellidolabel");
        apellidolabel->setGeometry(QRect(290, 60, 211, 17));
        tableView = new QTableView(Checkout);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 100, 571, 192));
        tabWidget->addTab(Checkout, QString());
        chekinadmin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(chekinadmin);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 610, 23));
        menuCheckinadmin = new QMenu(menuBar);
        menuCheckinadmin->setObjectName("menuCheckinadmin");
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName("menuAyuda");
        chekinadmin->setMenuBar(menuBar);
        statusBar = new QStatusBar(chekinadmin);
        statusBar->setObjectName("statusBar");
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
        chekinadmin->setWindowTitle(QCoreApplication::translate("chekinadmin", "chekinadmin", nullptr));
#if QT_CONFIG(statustip)
        chekinadmin->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        actionSalir->setText(QCoreApplication::translate("chekinadmin", "Salir", nullptr));
        actionAcerca_de_checkinadmin->setText(QCoreApplication::translate("chekinadmin", "Acerca de checkinadmin...", nullptr));
        actionConfiguraci_n->setText(QCoreApplication::translate("chekinadmin", "Configuraci\303\263n...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("chekinadmin", "User", nullptr));
        label->setText(QCoreApplication::translate("chekinadmin", "First name:", nullptr));
        label_2->setText(QCoreApplication::translate("chekinadmin", "Last name:", nullptr));
        label_3->setText(QCoreApplication::translate("chekinadmin", "User ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("chekinadmin", "Save user", nullptr));
        limpiarPpushButton->setText(QCoreApplication::translate("chekinadmin", "Clear", nullptr));
        errorCedula->setText(QCoreApplication::translate("chekinadmin", "*User ID is required", nullptr));
        equipogroupBox->setTitle(QCoreApplication::translate("chekinadmin", "Equipo", nullptr));
        label_4->setText(QCoreApplication::translate("chekinadmin", "Serial:", nullptr));
        label_5->setText(QCoreApplication::translate("chekinadmin", "Tipo:", nullptr));
        label_6->setText(QCoreApplication::translate("chekinadmin", "Marca:", nullptr));
        addButton->setText(QCoreApplication::translate("chekinadmin", "Agregar equipo", nullptr));
        limpiarLpushButton->setText(QCoreApplication::translate("chekinadmin", "Limpiar", nullptr));
        label_7->setText(QCoreApplication::translate("chekinadmin", "Modelo:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Checkin), QCoreApplication::translate("chekinadmin", "Checkin", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("chekinadmin", "User", nullptr));
        label_9->setText(QCoreApplication::translate("chekinadmin", "User ID:", nullptr));
        nombrelabel->setText(QCoreApplication::translate("chekinadmin", "TextLabel", nullptr));
        apellidolabel->setText(QCoreApplication::translate("chekinadmin", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Checkout), QCoreApplication::translate("chekinadmin", "Checkout", nullptr));
        menuCheckinadmin->setTitle(QCoreApplication::translate("chekinadmin", "Archivo", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("chekinadmin", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chekinadmin: public Ui_chekinadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEKINADMIN_H
