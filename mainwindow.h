#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_actualizar_clicked();

    void on_eliminados_clicked();

    void on_registrar_clicked();

    void on_buscar_clicked();

    void on_buscar_2_clicked();

    void on_eliminar_clicked();

private:
    Ui::MainWindow *ui;
    void cargarDatosTabla();

};
#endif // MAINWINDOW_H
