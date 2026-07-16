#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(
        "QMessageBox { background-color: #212733; }"
        "QMessageBox QLabel { color: #212733; font-size: 13px; }"
        "QMessageBox QPushButton { background-color: #2b6cb0; color: #212733; border: 1px solid #1a4a75; border-radius: 6px; padding: 6px 16px; min-width: 60px; font-weight: bold; }"
        "QMessageBox QPushButton:hover { background-color: #3182ce; }"
        );

    MainWindow w;
    w.show();
    return QApplication::exec();
}
