#ifndef ELIMINARDATOS_H
#define ELIMINARDATOS_H

#include <QDialog>

namespace Ui {
class Eliminardatos;
}

class Eliminardatos : public QDialog
{
    Q_OBJECT

public:
    explicit Eliminardatos(QWidget *parent = nullptr);
    ~Eliminardatos();
    void recibirDatos(QString codigo, QString nombre);

private slots:
    void on_eliminar_clicked();

private:
    Ui::Eliminardatos *ui;
    QString codigoOculto;
    QString nombreOculto;
};

#endif // ELIMINARDATOS_H
