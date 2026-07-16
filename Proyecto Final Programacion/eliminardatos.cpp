#include "eliminardatos.h"
#include "ui_eliminardatos.h"
#include "QFile"
#include "QMessageBox"

Eliminardatos::Eliminardatos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Eliminardatos)
{
    ui->setupUi(this);
}

Eliminardatos::~Eliminardatos()
{
    delete ui;
}
void Eliminardatos::recibirDatos(QString codigo, QString nombre)
{
    codigoOculto = codigo;
    nombreOculto = nombre;
}
void Eliminardatos::on_eliminar_clicked()
{
    QString motivo = ui->motivo->toPlainText().trimmed();
    if (motivo.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Por favor, describa el motivo de la eliminación.");
        return;
    }
    QFile archElim("eliminados.txt");
    if (archElim.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream(&archElim) << codigoOculto << " | " << nombreOculto << " | " << motivo << "\n";
        archElim.close();
    }
    QFile archAct("mascotas_registradas.txt");
    QFile temp("temp.txt");
    if (archAct.open(QIODevice::ReadOnly | QIODevice::Text) && temp.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream in(&archAct);
        QTextStream out(&temp);
        while (!in.atEnd()) {
            QString linea = in.readLine();
            if (!linea.startsWith(codigoOculto + " | ")) {
                out << linea << "\n";
            }
        }
    }
    archAct.close();
    temp.close();
    archAct.remove();
    temp.rename("mascotas_registradas.txt");
    QMessageBox::information(this, "Éxito", "La mascota ha sido eliminada.");
    this->close();
}