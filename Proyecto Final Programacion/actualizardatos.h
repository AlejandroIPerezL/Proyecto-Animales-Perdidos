#ifndef ACTUALIZARDATOS_H
#define ACTUALIZARDATOS_H

#include <QDialog>

namespace Ui {
class Actualizardatos;
}

class Actualizardatos : public QDialog
{
    Q_OBJECT

public:
    explicit Actualizardatos(QWidget *parent = nullptr);
    ~Actualizardatos();
    void cargarDatosMascota(QString codigoBuscado);

private slots:
    void on_registrar_clicked();

private:
    Ui::Actualizardatos *ui;

};

#endif // ACTUALIZARDATOS_H
