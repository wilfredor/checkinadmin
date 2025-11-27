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
  query.exec("CREATE TABLE  IF NOT EXISTS personas (cedula INT PRIMARY KEY, nombre VARCHAR(50), apellido VARCHAR(50))");
  query.exec("CREATE TABLE  IF NOT EXISTS items (serial varchar(50), tipo varchar(50), marca varchar(50), modelo varchar(50),salio int, responsable int)");
  query.exec("CREATE TABLE  IF NOT EXISTS events (descripcion varchar(50), hora varchar(25))");

  qDebug() << query.lastError();


  return db.isValid();
}

#endif // DBCONNECTION_H
