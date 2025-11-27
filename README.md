checkinadmin is a Qt application to register equipment check-in/out. Updated to build with Qt 5/6 on Windows, macOS, and Linux.

Requirements
- Qt 5.15+ (widgets, sql) and a C++17 compiler.
- QMYSQL plugin available (bundled with Qt install or built separately).
- Reachable MySQL/MariaDB server with database `checkinadmin`.

OS dependencies
- Linux (Debian/Ubuntu): `sudo apt install qtbase5-dev qtbase5-dev-tools libqt5sql5-mysql mariadb-server`
  (Fedora/CentOS: `qt5-qtbase-devel qt5-qtbase-mysql mariadb-server`).
- macOS (Homebrew): `brew install qt mariadb` and `export PATH="/opt/homebrew/opt/qt/bin:$PATH"`.
- Windows:
  1) Install Qt 5/6 (widgets/sql) via Online Installer or MSYS2 (`mingw-w64-qt5/6-qtbase`).
  2) Install MySQL Connector/C so QMYSQL can link to client libs.
  3) Ensure Qt `bin` and MySQL Connector/C `bin` are on `PATH`.

Build
1) Create a build directory (shadow build recommended):
   - `mkdir build && cd build`
2) Generate and compile:
   - Linux/macOS: `qmake ../checkinadmin.pro && make`
   - Windows (MSVC): `qmake ..\\checkinadmin.pro && nmake`
   - Windows (MinGW): `qmake ..\\checkinadmin.pro && mingw32-make`
3) Run the produced binary (`checkinadmin` or `checkinadmin.exe`).

Database configuration
- The file `checkinadmin.cnf` (next to the executable) stores the connection:
  ```
  [Data]
  server=localhost
  database=checkinadmin
  login=user
  pass=secret
  ```
- These values can also be edited from the app menu “Configuracion”.

Database schema
- A ready-to-run MySQL/MariaDB schema is in `schema.sql`.
- Apply it with: `mysql -u<user> -p checkinadmin < schema.sql`
- Tables:
  - `users(user_id, first_name, last_name)`
  - `items(serial, item_type, brand, model, checked_out, user_id FK -> users.user_id)`
  - `events(description, timestamp)`
- The app will also auto-create these tables at startup if they are missing, but `schema.sql` is recommended for a clean setup (includes FK/indexes).

QMYSQL plugin from release (macOS)
- Download asset `libqsqlmysql-macos-qt6.9.3.zip` from release v1.0.0.
- Unzip and place `libqsqlmysql.dylib` into `checkinadmin.app/Contents/PlugIns/sqldrivers/`
  (create the folder if needed). Alternatively copy it to Qt’s plugin path:
  `/opt/homebrew/share/qt/plugins/sqldrivers/`.
- Run the app; QMYSQL will load if MySQL/MariaDB client libs are installed.
