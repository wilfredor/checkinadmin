==Spanish==

checkinadmin es un sistema creado para el registro de entrada y salida de equipos de una instalaci�n.
para poder compilar checkinadmin el camino m�s f�cil es utilizar qtcreator.
Adicionalmente se va a agregar el plugin QMySQL, necesario para el proceso de compilaci�n.
Cualquier duda visitar http://doc.qt.nokia.com/4.6/sql-driver.html#qmysql-for-mysql-4-and-higher.

	# apt-get install libqt4-sql-mysql qtcreator mysql-server

Posteriormente se abre el archivo "checkinadmin.pro" y se hace clic en el bot�n play de color verde.


;Requerimientos necesarios

*MySQL 5.x
*Crear una base de datos llamada "checkinadmin"

checkin admin posee un archivo de configuraci�n llamado "checkinadmin.cnf", en donde se colocan los
par�metros necesarios del servidor MySQL y que son configurables desde el menu "Configuraci�n" de la
aplicaci�n.
