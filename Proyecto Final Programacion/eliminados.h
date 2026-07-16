#ifndef ELIMINADOS_H
#define ELIMINADOS_H

#include <QDialog>

namespace Ui {
class eliminados;
}

class eliminados : public QDialog
{
    Q_OBJECT

public:
    explicit eliminados(QWidget *parent = nullptr);
    ~eliminados();
    void cargarEliminados();

private slots:
    void on_Eliminar_clicked();

private:
    Ui::eliminados *ui;
};

#endif // ELIMINADOS_H
