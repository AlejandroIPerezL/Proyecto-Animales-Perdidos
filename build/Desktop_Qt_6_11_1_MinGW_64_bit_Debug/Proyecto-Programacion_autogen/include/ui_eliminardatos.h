/********************************************************************************
** Form generated from reading UI file 'eliminardatos.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARDATOS_H
#define UI_ELIMINARDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Eliminardatos
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *eliminar;
    QTextEdit *motivo;
    QLabel *label;

    void setupUi(QDialog *Eliminardatos)
    {
        if (Eliminardatos->objectName().isEmpty())
            Eliminardatos->setObjectName("Eliminardatos");
        Eliminardatos->resize(626, 507);
        label_3 = new QLabel(Eliminardatos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 30, 561, 81));
        QPalette palette;
        QBrush brush(QColor(43, 108, 176, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_3->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";\n"
"background-color: rgb(3\n"
"6, 36, 36);"));
        label_2 = new QLabel(Eliminardatos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 50, 451, 41));
        QPalette palette1;
        QBrush brush1(QColor(58, 58, 58, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        QBrush brush2(QColor(229, 229, 229, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush2);
        QBrush brush3(QColor(58, 58, 58, 128));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
        label_2->setPalette(palette1);
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"color: rgb(58, 58, 58);"));
        eliminar = new QPushButton(Eliminardatos);
        eliminar->setObjectName("eliminar");
        eliminar->setGeometry(QRect(210, 380, 211, 51));
        eliminar->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(226, 75, 74);\n"
"font: 12pt \"Segoe UI\";\n"
"border-radius: 8px;"));
        motivo = new QTextEdit(Eliminardatos);
        motivo->setObjectName("motivo");
        motivo->setGeometry(QRect(60, 160, 501, 201));
        motivo->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"color: rgb(26, 39, 51);\n"
"border-radius: 8px;\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(Eliminardatos);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 120, 451, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(74, 90, 104);\n"
"font: 12pt \"Segoe UI\";"));

        retranslateUi(Eliminardatos);

        QMetaObject::connectSlotsByName(Eliminardatos);
    } // setupUi

    void retranslateUi(QDialog *Eliminardatos)
    {
        Eliminardatos->setWindowTitle(QCoreApplication::translate("Eliminardatos", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Eliminardatos", "__________________________________________________________", nullptr));
        label_2->setText(QCoreApplication::translate("Eliminardatos", "Eliminacion de mascota registrada", nullptr));
        eliminar->setText(QCoreApplication::translate("Eliminardatos", "Eliminar", nullptr));
        label->setText(QCoreApplication::translate("Eliminardatos", "Describa el motivo por la eliminacio de la mascota", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eliminardatos: public Ui_Eliminardatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARDATOS_H
