#include "actualizardatos.h"
#include "ui_actualizardatos.h"
#include "QMessageBox"
#include "QFile"
#include <QRegularExpressionValidator>

Actualizardatos::Actualizardatos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Actualizardatos)
{
    ui->setupUi(this);
    QRegularExpression regLetras("^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$");
    QRegularExpressionValidator *validadorLetras = new QRegularExpressionValidator(regLetras, this);
    ui->nombre->setValidator(validadorLetras);

    QRegularExpression regNumeros("^[0-9]{0,10}$");
    QRegularExpressionValidator *validadorNumeros = new QRegularExpressionValidator(regNumeros, this);
    ui->contacto->setValidator(validadorNumeros);
}

Actualizardatos::~Actualizardatos()
{
    delete ui;
}

void Actualizardatos::on_registrar_clicked()
{
    QString codigoBuscado = ui->C_Busqueda->text().trimmed();

    QFile archivoOriginal("mascotas_registradas.txt");
    QFile archivoTemporal("temp.txt");

    if (!archivoOriginal.open(QIODevice::ReadOnly | QIODevice::Text) ||
        !archivoTemporal.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }

    QTextStream entrada(&archivoOriginal);
    QTextStream salida(&archivoTemporal);
    bool modificado = false;

    while (!entrada.atEnd()) {
        QString linea = entrada.readLine();
        QStringList partes = linea.split(" | ");

        if (partes.size() > 0 && partes[0].trimmed() == codigoBuscado) {
            salida << codigoBuscado << " | "
                   << ui->nombre->text() << " | "
                   << ui->Especie->currentText() << " | "
                   << ui->Zona->text() << " | "
                   << ui->Descripcion->toPlainText() << " | "
                   << ui->Estado->currentText() << " | "
                   << ui->dateEdit->text() << " | "
                   << ui->contacto->text() << "\n";
            modificado = true;
        } else {
            salida << linea << "\n";
        }
    }

    archivoOriginal.close();
    archivoTemporal.close();

    if (modificado) {
        archivoOriginal.remove();
        archivoTemporal.rename("mascotas_registradas.txt");
        QMessageBox::information(this, "Éxito", "Datos actualizados correctamente.");
        this->close();
    } else {
        archivoTemporal.remove();
        QMessageBox::warning(this, "Error", "No se encontró el código ingresado.");
    }
}

void Actualizardatos::cargarDatosMascota(QString codigoBuscado)
{
    ui->C_Busqueda->setText(codigoBuscado);
    ui->C_Busqueda->setReadOnly(true);

    QFile archivo("mascotas_registradas.txt");
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream entrada(&archivo);
    while (!entrada.atEnd()) {
        QString linea = entrada.readLine();
        QStringList datos = linea.split(" | ");

        if (datos.size() >= 8 && datos[0].trimmed() == codigoBuscado) {
            ui->nombre->setText(datos[1]);
            ui->Especie->setCurrentText(datos[2]);
            ui->Zona->setText(datos[3]);
            ui->Descripcion->setPlainText(datos[4]);
            ui->Estado->setCurrentText(datos[5]);
            ui->dateEdit->setDate(QDate::fromString(datos[6], "d/M/yyyy"));
            ui->contacto->setText(datos[7]);
            break;
        }
    }
    archivo.close();
}