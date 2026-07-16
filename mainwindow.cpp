#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QRegularExpression>
#include "actualizardatos.h "
#include "eliminardatos.h"
#include "eliminados.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpression regLetras("^[a-zA-ZáéíóúÁÉÍÓÚñÑ ]+$");
    QRegularExpressionValidator *validadorLetras = new QRegularExpressionValidator(regLetras, this);
    ui->nombre->setValidator(validadorLetras);

    QRegularExpression regNumeros("^[0-9]{0,10}$");
    QRegularExpressionValidator *validadorNumeros = new QRegularExpressionValidator(regNumeros, this);
    ui->contacto->setValidator(validadorNumeros);
    cargarDatosTabla();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::cargarDatosTabla()
{
    ui->tableWidget->setRowCount(0);

    QFile archivo("mascotas_registradas.txt");
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream entrada(&archivo);
    while (!entrada.atEnd()) {
        QStringList datos = entrada.readLine().split(" | ");

        if (datos.size() >= 8) {
            int fila = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(fila);

            ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(datos[0]));
            ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(datos[1]));
            ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(datos[2]));
            ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(datos[4]));
            ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(datos[5]));
            ui->tableWidget->setItem(fila, 5, new QTableWidgetItem(datos[6]));
            ui->tableWidget->setItem(fila, 6, new QTableWidgetItem(datos[7]));
        }
    }
    archivo.close();
}

void MainWindow::on_eliminados_clicked()
{
    this->hide();
    eliminados ventana(this);
    ventana.cargarEliminados();
    ventana.setModal(true);
    ventana.exec();
    this->show();
}

void MainWindow::on_registrar_clicked()
{
    if (ui->nombre->text().isEmpty()) {
        QMessageBox::warning(this, "Advertencia", "Por favor, llene el campo nombre.");
        return;
    }

    QFile archivo("mascotas_registradas.txt");
    if (!archivo.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "No se pudo abrir o crear el archivo.");
        return;
    }

    QTextStream(&archivo) << ui->C_Busqueda->text() << " | "
                          << ui->nombre->text() << " | "
                          << ui->Especie->currentText() << " | "
                          << ui->Zona->text() << " | "
                          << ui->Descripcion->toPlainText() << " | Perdido | "
                          << ui->dateEdit->text() << " | "
                          << ui->contacto->text() << "\n";
    archivo.close();

    QMessageBox::information(this, "Éxito", "La mascota se ha registrado correctamente.");

    ui->C_Busqueda->clear();
    ui->nombre->clear();
    ui->Especie->setCurrentIndex(0);
    ui->Zona->clear();
    ui->Descripcion->clear();
    ui->dateEdit->clear();
    ui->contacto->clear();

    cargarDatosTabla();
}

void MainWindow::on_buscar_clicked()
{
    QString codigoBuscado = ui->buscar_3->text().trimmed();

    if (codigoBuscado.isEmpty()) {
        QMessageBox::warning(this, "Advertencia", "Ingrese un código para buscar.");
        return;
    }

    ui->tableWidget->setRowCount(0);

    QFile archivo("mascotas_registradas.txt");
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream entrada(&archivo);
    bool encontrado = false;

    while (!entrada.atEnd()) {
        QStringList datos = entrada.readLine().split(" | ");

        if (datos.size() >= 8 && datos[0].trimmed() == codigoBuscado) {
            int fila = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(fila);

            ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(datos[0]));
            ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(datos[1]));
            ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(datos[2]));
            ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(datos[4]));
            ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(datos[5]));
            ui->tableWidget->setItem(fila, 5, new QTableWidgetItem(datos[6]));
            ui->tableWidget->setItem(fila, 6, new QTableWidgetItem(datos[7]));
            encontrado = true;
        }
    }
    archivo.close();

    if (!encontrado) {
        QMessageBox::information(this, "No encontrado", "No se encontró ninguna mascota con ese código.");
        ui->buscar_3->clear();
        cargarDatosTabla();
    }
}

void MainWindow::on_buscar_2_clicked()
{
    ui->buscar_3->clear();
    cargarDatosTabla();
}

void MainWindow::on_actualizar_clicked()
{
    int fila = ui->tableWidget->currentRow();
    if (fila == -1) {
        QMessageBox::warning(this, "Aviso", "Seleccione un animal de la tabla primero.");
        return;
    }

    this->hide();
    Actualizardatos ventanaEdicion(this);
    ventanaEdicion.cargarDatosMascota(ui->tableWidget->item(fila, 0)->text());
    ventanaEdicion.setModal(true);
    ventanaEdicion.exec();
    this->show();
    cargarDatosTabla();
    ui->buscar_3->clear();
}

void MainWindow::on_eliminar_clicked()
{
    int fila = ui->tableWidget->currentRow();
    if (fila == -1) {
        QMessageBox::warning(this, "Aviso", "Seleccione un animal de la tabla primero.");
        return;
    }

    this->hide();
    Eliminardatos ventana(this);
    ventana.recibirDatos(ui->tableWidget->item(fila, 0)->text(), ui->tableWidget->item(fila, 1)->text());
    ventana.setModal(true);
    ventana.exec();
    this->show();
    cargarDatosTabla();
}