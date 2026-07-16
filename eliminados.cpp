#include "eliminados.h"
#include "ui_eliminados.h"
#include <QFile>
#include <QTextStream>

eliminados::eliminados(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::eliminados)
{
    ui->setupUi(this);
}

eliminados::~eliminados()
{
    delete ui;
}
void eliminados::cargarEliminados() {
    ui->tableWidget->setRowCount(0);

    QFile archivo("eliminados.txt");
    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&archivo);
    while(!in.atEnd()){
        QStringList datos = in.readLine().split(" | ");
        if(datos.size() >= 3){
            int fila = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(fila);
            ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(datos[0]));
            ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(datos[1]));
            ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(datos[2]));
        }
    }
    archivo.close();

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->setWordWrap(true);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

void eliminados::on_Eliminar_clicked()
{
    this->close();
}