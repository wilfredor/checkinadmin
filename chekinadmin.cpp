#include "chekinadmin.h"
#include "dbConection.h"
#include "ui_chekinadmin.h"
#include <QDebug>
#include <QColor>
#include <QDialog>
#include <QMessageBox>
#include <QPalette>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QStyle>
#include <QValidator>
#include "checkablesortfilterproxymodel.h"
#include "cnfdialog.h"
#include "ui_cnfdialog.h"

/* Proxy Model Begin */
CheckableSortFilterProxyModel::CheckableSortFilterProxyModel(QObject *parent) :
    QSortFilterProxyModel(parent)
{
}

void CheckableSortFilterProxyModel::setParameters(QList<int> boolCols) {
    booleanSet.clear();
    if (!boolCols.isEmpty()) {
        for (const int column : boolCols)
        {
            booleanSet.append(column);
        }
    }
}

QVariant CheckableSortFilterProxyModel::data(const QModelIndex &index, int role) const {
    if(!index.isValid())
        return QVariant();

    if(booleanSet.contains(index.column()) && (role == Qt::CheckStateRole || role == Qt::DisplayRole)) {
        if (role == Qt::CheckStateRole)
            return index.data(Qt::EditRole).toBool() ? QVariant(Qt::Checked) : QVariant(Qt::Unchecked);
        else if (role == Qt::DisplayRole)
            return QVariant();
    }
    else
        return QSortFilterProxyModel::data(index,role);
}

bool CheckableSortFilterProxyModel::setData(const QModelIndex &index, const QVariant &value, int role) {
    if(!index.isValid())
        return false;

    if(booleanSet.contains(index.column()) && role==Qt::CheckStateRole)
    {
        QVariant data = (value.toInt()==Qt::Checked) ? QVariant(1) : QVariant (0);
        return QSortFilterProxyModel::setData(index, data, Qt::EditRole);
    }
    else
        return QSortFilterProxyModel::setData(index,value,role);

}

Qt::ItemFlags CheckableSortFilterProxyModel::flags ( const QModelIndex & index ) const {
    if(!index.isValid())
        return Qt::ItemIsEnabled;

    if(booleanSet.contains(index.column()))
        return Qt::ItemIsUserCheckable | Qt::ItemIsSelectable | Qt::ItemIsEnabled;
    else
        return QSortFilterProxyModel::flags(index);

}
/* Proxy Model End */
chekinadmin::chekinadmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chekinadmin)
{
    if (createConnection())
    {
        ui->setupUi(this);
        ui->tipocomboBox->addItem("Laptop");
        ui->tipocomboBox->addItem("PC");
        ui->tipocomboBox->addItem("Camara");
        ui->tipocomboBox->addItem("Celular");
        ui->tipocomboBox->addItem("Video Bean");
        ui->tipocomboBox->addItem("Case");
        ui->tipocomboBox->addItem("Mouse");
        ui->tipocomboBox->addItem("Teclado");
        ui->tipocomboBox->addItem("Regleta");
        ui->apellidolabel->hide();
        ui->nombrelabel->hide();
        ui->errorCedula->hide();
        QValidator *validator = new QIntValidator(0, 999999999, this);
        ui->cedulaBlineEdit->setValidator(validator);
        ui->cedulalineEdit->setValidator(validator);
    }
}

chekinadmin::~chekinadmin()
{
    delete ui;
}

void chekinadmin::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void chekinadmin::on_addButton_clicked()
{

        QSqlQuery qry;
        qry.prepare("INSERT INTO items VALUES (:serial, :tipo, :marca,:modelo,:salio,:responsable)");
        qry.bindValue(":serial",ui->seriallineEdit->text());
        qry.bindValue(":tipo",ui->tipocomboBox->currentText());
        qry.bindValue(":marca",ui->marcalineEdit->text());
        qry.bindValue(":modelo",ui->modelolineEdit->text());
        qry.bindValue(":salio",0);
        qry.bindValue(":responsable",ui->cedulalineEdit->text());
        if(!qry.exec())
         qDebug()<<qry.lastError().text();

}

void chekinadmin::on_actionSalir_triggered()
{
    qApp->exit(0);
}

void chekinadmin::on_pushButton_clicked()
{
    if (ui->cedulalineEdit->text().isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setText("El campo Cedula es necesario");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else
    {
        QSqlQuery qry;

        qry.prepare("INSERT INTO personas VALUES (:cedula, :nombre, :apellido)");
        qry.bindValue(":cedula",ui->cedulalineEdit->text());
        qry.bindValue(":nombre",ui->nombrelineEdit->text());
        qry.bindValue(":apellido",ui->apellidolineEdit->text());

        if(qry.exec())
        {
            enable_items(true);

        }
        else
        {
            qDebug()<<qry.lastError().text();
        }
    }
}
void chekinadmin::enable_items(bool visible)
{
    ui->seriallineEdit->setEnabled(visible);
    ui->tipocomboBox->setEnabled(visible);
    ui->marcalineEdit->setEnabled(visible);
    ui->addButton->setEnabled(visible);
    ui->equipogroupBox->setEnabled(visible);
    ui->modelolineEdit->setEnabled(visible);
}
void chekinadmin::on_actionAcerca_de_checkinadmin_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Licencia: GPL3");
    msgBox.setInformativeText("wilfredor@gmail.com");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.exec();
}

void chekinadmin::on_cedulaBlineEdit_returnPressed()
{

   QSqlTableModel *m = new QSqlTableModel();
        m->setTable("items");
        m->setFilter("responsable="+ui->cedulaBlineEdit->text());
        m->setEditStrategy(QSqlTableModel::OnFieldChange);
        m->select();
        CheckableSortFilterProxyModel *cfpm = new CheckableSortFilterProxyModel(this);
            QList<int> boolCols;
            boolCols.append( m->fieldIndex("salio") );
            cfpm->setParameters(boolCols);
            cfpm->setSourceModel( m );
            ui->tableView->setModel(cfpm);
        //ui->tableView->setModel(m);
        ui->tableView->hideColumn(5);

        qDebug() << m->query().lastError();


        QSqlQuery query("SELECT nombre,apellido FROM personas where cedula="+ui->cedulaBlineEdit->text());
        if (query.next())
        {
            ui->nombrelabel->setText("Nombre(s): "+ query.value(0).toString());
            ui->apellidolabel->setText("Apellido(s): "+ query.value(1).toString());
            ui->apellidolabel->show();
            ui->nombrelabel->show();
        }
        qDebug() << query.lastError();

}

void chekinadmin::on_cedulalineEdit_returnPressed()
{

        QSqlQuery query("SELECT nombre,apellido FROM personas where cedula="+ui->cedulalineEdit->text());
        if (query.next())
        {
            ui->nombrelineEdit->setText(query.value(0).toString());
            ui->apellidolineEdit->setText(query.value(1).toString());
        }
        qDebug() << query.lastError();

}

void chekinadmin::on_cedulalineEdit_lostFocus()
{
    chekinadmin::on_cedulalineEdit_returnPressed();
    if (ui->cedulalineEdit->text().isEmpty())
    {
        QPalette p = ui->cedulalineEdit->palette();
        p.setColor(QPalette::Normal, QPalette::Base, QColor(255,0,0));//red color
        ui->cedulalineEdit->setPalette(p);
        ui->errorCedula->show();
        enable_items(false);
    }
    else
    {
        ui->cedulalineEdit->setPalette( ui->cedulalineEdit->style()->standardPalette() );
        ui->errorCedula->hide();
    }

}

void chekinadmin::on_limpiarPpushButton_clicked()
{
    ui->cedulalineEdit->clear();
    ui->nombrelineEdit->clear();
    ui->apellidolineEdit->clear();
    enable_items(false);
    on_limpiarLpushButton_clicked();
}

void chekinadmin::on_limpiarLpushButton_clicked()
{
    ui->seriallineEdit->clear();
    ui->tipocomboBox->clear();
    ui->marcalineEdit->clear();
}

void chekinadmin::on_actionConfiguraci_n_triggered()
{

    QDialog *cnfDialog = new QDialog(ui->marcalineEdit->parentWidget());
    Ui::cnfDialog ui2;
    ui2.setupUi(cnfDialog);

    Settings setting;
    ui2.serverlineEdit->setText(setting.server);
    ui2.databaselineEdit->setText(setting.database);
    ui2.loginlineEdit->setText(setting.login);
    ui2.passlineEdit->setText(setting.pass);

    cnfDialog->setModal(true);
    cnfDialog->activateWindow();

    if (cnfDialog->exec() == QDialog::Accepted ) {

        setting.server=ui2.serverlineEdit->text();
        setting.database= ui2.databaselineEdit->text();
        setting.login=ui2.loginlineEdit->text();
        setting.pass=ui2.passlineEdit->text();
        setting.writeSettings();
    }

}
