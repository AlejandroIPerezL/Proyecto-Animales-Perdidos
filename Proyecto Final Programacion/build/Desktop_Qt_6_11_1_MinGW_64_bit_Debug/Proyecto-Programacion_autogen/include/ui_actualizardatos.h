/********************************************************************************
** Form generated from reading UI file 'actualizardatos.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTUALIZARDATOS_H
#define UI_ACTUALIZARDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Actualizardatos
{
public:
    QLabel *label_10;
    QComboBox *Especie;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QLineEdit *C_Busqueda;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_3;
    QTextEdit *Descripcion;
    QLineEdit *nombre;
    QPushButton *registrar;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *Zona;
    QLabel *label_2;
    QLabel *label;
    QComboBox *Estado;
    QLabel *label_9;
    QLineEdit *contacto;

    void setupUi(QDialog *Actualizardatos)
    {
        if (Actualizardatos->objectName().isEmpty())
            Actualizardatos->setObjectName("Actualizardatos");
        Actualizardatos->resize(352, 822);
        label_10 = new QLabel(Actualizardatos);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 290, 201, 31));
        QPalette palette;
        QBrush brush(QColor(74, 90, 104, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(229, 229, 229, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(74, 90, 104, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_10->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(74, 90, 104);"));
        Especie = new QComboBox(Actualizardatos);
        Especie->addItem(QString());
        Especie->addItem(QString());
        Especie->addItem(QString());
        Especie->addItem(QString());
        Especie->addItem(QString());
        Especie->addItem(QString());
        Especie->setObjectName("Especie");
        Especie->setGeometry(QRect(20, 260, 301, 28));
        QPalette palette1;
        QBrush brush3(QColor(26, 39, 51, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        QBrush brush5(QColor(26, 39, 51, 128));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        Especie->setPalette(palette1);
        QFont font1;
        font1.setPointSize(12);
        Especie->setFont(font1);
        Especie->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        label_4 = new QLabel(Actualizardatos);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 80, 201, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_4->setPalette(palette2);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        dateEdit = new QDateEdit(Actualizardatos);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(20, 320, 301, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        dateEdit->setPalette(palette3);
        dateEdit->setFont(font);
        dateEdit->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        C_Busqueda = new QLineEdit(Actualizardatos);
        C_Busqueda->setObjectName("C_Busqueda");
        C_Busqueda->setGeometry(QRect(20, 120, 301, 28));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        C_Busqueda->setPalette(palette4);
        C_Busqueda->setFont(font1);
        C_Busqueda->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        C_Busqueda->setReadOnly(true);
        label_7 = new QLabel(Actualizardatos);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 420, 181, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_7->setPalette(palette5);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        label_6 = new QLabel(Actualizardatos);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 230, 71, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_6->setPalette(palette6);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        label_3 = new QLabel(Actualizardatos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 311, 81));
        QPalette palette7;
        QBrush brush6(QColor(43, 108, 176, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        label_3->setPalette(palette7);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";\n"
"background-color: rgb(3\n"
"6, 36, 36);"));
        Descripcion = new QTextEdit(Actualizardatos);
        Descripcion->setObjectName("Descripcion");
        Descripcion->setGeometry(QRect(20, 530, 301, 131));
        Descripcion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(199, 208, 216);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;\n"
"font: 12pt \"Segoe UI\";\n"
""));
        nombre = new QLineEdit(Actualizardatos);
        nombre->setObjectName("nombre");
        nombre->setGeometry(QRect(20, 200, 301, 28));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        nombre->setPalette(palette8);
        nombre->setFont(font1);
        nombre->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        registrar = new QPushButton(Actualizardatos);
        registrar->setObjectName("registrar");
        registrar->setGeometry(QRect(50, 750, 241, 51));
        QPalette palette9;
        QBrush brush7(QColor(56, 161, 105, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush7);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush7);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush7);
        QBrush brush8(QColor(31, 155, 93, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush7);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush7);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush7);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush7);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush7);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush7);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Highlight, brush8);
        registrar->setPalette(palette9);
        registrar->setFont(font);
        registrar->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(56, 161, 105);\n"
"border-radius: 8px;"));
        label_5 = new QLabel(Actualizardatos);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 160, 211, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_5->setPalette(palette10);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        label_8 = new QLabel(Actualizardatos);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 490, 281, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_8->setPalette(palette11);
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        Zona = new QLineEdit(Actualizardatos);
        Zona->setObjectName("Zona");
        Zona->setGeometry(QRect(20, 460, 301, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        Zona->setPalette(palette12);
        Zona->setFont(font1);
        Zona->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        label_2 = new QLabel(Actualizardatos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 20, 281, 41));
        QPalette palette13;
        QBrush brush9(QColor(58, 58, 58, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush9);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush10(QColor(58, 58, 58, 128));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush9);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush9);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush9);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        label_2->setPalette(palette13);
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"color: rgb(58, 58, 58);"));
        label = new QLabel(Actualizardatos);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 360, 81, 20));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(74, 90, 104);"));
        Estado = new QComboBox(Actualizardatos);
        Estado->addItem(QString());
        Estado->addItem(QString());
        Estado->setObjectName("Estado");
        Estado->setGeometry(QRect(20, 390, 181, 28));
        Estado->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));
        label_9 = new QLabel(Actualizardatos);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 670, 281, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        label_9->setPalette(palette14);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);"));
        contacto = new QLineEdit(Actualizardatos);
        contacto->setObjectName("contacto");
        contacto->setGeometry(QRect(20, 710, 301, 31));
        QPalette palette15;
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush3);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
        contacto->setPalette(palette15);
        contacto->setFont(font1);
        contacto->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;"));

        retranslateUi(Actualizardatos);

        QMetaObject::connectSlotsByName(Actualizardatos);
    } // setupUi

    void retranslateUi(QDialog *Actualizardatos)
    {
        Actualizardatos->setWindowTitle(QCoreApplication::translate("Actualizardatos", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Actualizardatos", "Fecha de desaparici\303\263n", nullptr));
        Especie->setItemText(0, QCoreApplication::translate("Actualizardatos", "Gato", nullptr));
        Especie->setItemText(1, QCoreApplication::translate("Actualizardatos", "Perro", nullptr));
        Especie->setItemText(2, QCoreApplication::translate("Actualizardatos", "Conejo", nullptr));
        Especie->setItemText(3, QCoreApplication::translate("Actualizardatos", "Hamster", nullptr));
        Especie->setItemText(4, QCoreApplication::translate("Actualizardatos", "Cuy", nullptr));
        Especie->setItemText(5, QCoreApplication::translate("Actualizardatos", "Huron", nullptr));

        label_4->setText(QCoreApplication::translate("Actualizardatos", "Codigo de Busqueda", nullptr));
        C_Busqueda->setText(QCoreApplication::translate("Actualizardatos", "ANML000", nullptr));
        label_7->setText(QCoreApplication::translate("Actualizardatos", "Visto por ultima vez", nullptr));
        label_6->setText(QCoreApplication::translate("Actualizardatos", "Especie", nullptr));
        label_3->setText(QCoreApplication::translate("Actualizardatos", "__________________________________________________________", nullptr));
        registrar->setText(QCoreApplication::translate("Actualizardatos", "Actualizar", nullptr));
        label_5->setText(QCoreApplication::translate("Actualizardatos", "Nombre de la mascota", nullptr));
        label_8->setText(QCoreApplication::translate("Actualizardatos", "Descripcion fisica y vestimenta ", nullptr));
        label_2->setText(QCoreApplication::translate("Actualizardatos", "REGISTRO DE DATOS", nullptr));
        label->setText(QCoreApplication::translate("Actualizardatos", "Estado", nullptr));
        Estado->setItemText(0, QCoreApplication::translate("Actualizardatos", "Perdido", nullptr));
        Estado->setItemText(1, QCoreApplication::translate("Actualizardatos", "Econtrado", nullptr));

        label_9->setText(QCoreApplication::translate("Actualizardatos", "Contacto en caso de encuentro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Actualizardatos: public Ui_Actualizardatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTUALIZARDATOS_H
