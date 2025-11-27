checkinadmin es una aplicacion Qt para registrar la entrada y salida de equipos. El proyecto fue
actualizado para compilar con Qt 5/6 en Windows, macOS y Linux.

Requerimientos
- Qt 5.15+ (modulos widgets y sql) y un compilador C++11 o superior.
- Plugin QMYSQL (incluido en la instalacion de Qt o como paquete separado).
- Servidor MySQL/MariaDB accesible y base de datos llamada `checkinadmin`.

Dependencias por sistema operativo
- Linux (Debian/Ubuntu): `sudo apt install qtbase5-dev qtbase5-dev-tools libqt5sql5-mysql mariadb-server`
  (en Fedora/CentOS: `qt5-qtbase-devel qt5-qtbase-mysql mariadb-server`).
- macOS (Homebrew): `brew install qt mariadb` y exportar `PATH="/opt/homebrew/opt/qt/bin:$PATH"`.
- Windows:
  1. Instalar Qt 5/6 (widgets y sql) desde el Online Installer o MSYS2 (`mingw-w64-qt5/6-qtbase`).
  2. Instalar MySQL Connector/C (para que QMYSQL tenga las librerias de cliente).
  3. Asegurar que el directorio `bin` de Qt y el de MySQL Connector/C esten en `PATH`.

Compilacion
1. Crear un directorio de build (shadow build recomendado):
   - `mkdir build && cd build`
2. Generar y compilar:
   - Linux/macOS: `qmake ../checkinadmin.pro && make`
   - Windows (MSVC): `qmake ..\\checkinadmin.pro && nmake`
   - Windows (MinGW): `qmake ..\\checkinadmin.pro && mingw32-make`
3. Ejecutar el binario generado (`checkinadmin` o `checkinadmin.exe`).

Configuracion de base de datos
- El archivo `checkinadmin.cnf` en el directorio del ejecutable guarda la conexion:
  [Data]
  server=localhost
  database=checkinadmin
  login=usuario
  pass=clave
- Estos valores se pueden editar desde el menu "Configuracion" de la aplicacion.

Plugin QMYSQL desde el release (macOS)
- Descarga el asset `libqsqlmysql-macos-qt6.9.3.zip` del release (v1.0.0).
- Descomprime y coloca `libqsqlmysql.dylib` en `checkinadmin.app/Contents/PlugIns/sqldrivers/`
  (crea la carpeta si no existe). Tambien se puede copiar a la ruta de plugins de Qt:
  `/opt/homebrew/share/qt/plugins/sqldrivers/`.
- Ejecuta la app normalmente; el driver QMYSQL se cargara si el cliente MySQL/MariaDB esta instalado.
