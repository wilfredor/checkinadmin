#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>

class Settings {

public:
    QString server;
    QString database;
    QString login;
    QString pass;
    QString configfile;


        void writeSettings()
         {
             QSettings setting_file (this->configfile, QSettings::IniFormat);
             setting_file.beginGroup("Data");
             setting_file.setValue("server", this->server);
             setting_file.setValue("database", this->database);
             setting_file.setValue("login", this->login);
             setting_file.setValue("pass", this->pass);
             setting_file.endGroup();
         }

         Settings()
         {
             this->configfile="checkinadmin.cnf";
             QSettings setting_file (this->configfile, QSettings::IniFormat);

             setting_file.beginGroup("Data");
             this->server=setting_file.value("server").toString();
             this->database=setting_file.value("database").toString();
             this->login=setting_file.value("login").toString();
             this->pass=setting_file.value("pass").toString();

             setting_file.endGroup();
         }
};
#endif // SETTINGS_H
