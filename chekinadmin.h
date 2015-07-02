#ifndef CHEKINADMIN_H
#define CHEKINADMIN_H

#include <QMainWindow>

namespace Ui {
    class chekinadmin;
}

class chekinadmin : public QMainWindow {
    Q_OBJECT
public:
    chekinadmin(QWidget *parent = 0);
    ~chekinadmin();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::chekinadmin *ui;

private slots:
    void on_limpiarLpushButton_clicked();
    void on_limpiarPpushButton_clicked();
    void on_cedulaBlineEdit_returnPressed();
    void on_actionAcerca_de_checkinadmin_triggered();
    void on_pushButton_clicked();
    void on_actionSalir_triggered();
    //void on_nombrelineEdit_lostFocus();
    void on_addButton_clicked();
    void on_cedulalineEdit_returnPressed();
    void on_cedulalineEdit_lostFocus();
    void enable_items(bool);
    void on_actionConfiguraci_n_triggered();
    //void on_buttonBox_accepted();
};

#endif // CHEKINADMIN_H
