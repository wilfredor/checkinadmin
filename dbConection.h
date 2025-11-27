#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QApplication>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include "settings.h"

// Crea la conexion a la BD
static bool createConnection()
{
    Settings setting;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(setting.server);
    db.setDatabaseName(setting.database);
    db.setUserName(setting.login);
    db.setPassword(setting.pass);
    if (!db.open()) {
     QMessageBox::critical(0, qApp->tr("No se puede conectar a la base de datos"),
         qApp->tr("No se puede establecer conexion con la base de datos.\n"
                  "Verifique el archivo \"checkinadmin.cnf\""
                  ",corrobore el login y pass para el acceso \n\n"
                  "Clic en Cancelar para salir."), QMessageBox::Cancel);
     qDebug() << db.lastError().text();
     return false;
    }

  //Crea la tabla prueba
  QSqlQuery query;
  query.exec("CREATE TABLE  IF NOT EXISTS users (user_id INT PRIMARY KEY, first_name VARCHAR(50), last_name VARCHAR(50))");
  query.exec("CREATE TABLE  IF NOT EXISTS items (serial varchar(50) PRIMARY KEY, item_type varchar(50), brand varchar(50), model varchar(50), checked_out int, user_id int, KEY idx_user_id (user_id), CONSTRAINT fk_items_users FOREIGN KEY (user_id) REFERENCES users(user_id) ON DELETE SET NULL ON UPDATE CASCADE)");
  query.exec("CREATE TABLE  IF NOT EXISTS events (description varchar(50), timestamp varchar(25))");

  qDebug() << query.lastError();


  return db.isValid();
}

#endif // DBCONNECTION_H
