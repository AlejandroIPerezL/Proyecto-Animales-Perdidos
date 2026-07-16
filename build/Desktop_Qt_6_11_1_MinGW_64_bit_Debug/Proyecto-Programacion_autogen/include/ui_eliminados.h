/********************************************************************************
** Form generated from reading UI file 'eliminados.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINADOS_H
#define UI_ELIMINADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_eliminados
{
public:
    QPushButton *Eliminar;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *eliminados)
    {
        if (eliminados->objectName().isEmpty())
            eliminados->setObjectName("eliminados");
        eliminados->resize(725, 448);
        Eliminar = new QPushButton(eliminados);
        Eliminar->setObjectName("Eliminar");
        Eliminar->setGeometry(QRect(260, 360, 211, 51));
        Eliminar->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(199, 208, 216);\n"
"background-color: rgb(226, 75, 74);\n"
"font: 12pt \"Segoe UI\";\n"
"border-radius: 8px;"));
        tableWidget = new QTableWidget(eliminados);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 100, 661, 241));
        QFont font;
        font.setPointSize(12);
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    border: 2px solid rgb(199, 208, 216);\n"
"    border-radius: 8px;\n"
"    gridline-color: rgb(199, 208, 216);\n"
"    background-color: white;\n"
"color: rgb(26, 39, 51);\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: #2B6CB0;\n"
"    color: white;\n"
"    padding: 5px;\n"
"    border: 1px solid rgb(199, 208, 216);\n"
"	font: 12pt \"Segoe UI\";\n"
"}"));
        tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setDefaultSectionSize(149);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        label_3 = new QLabel(eliminados);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 20, 561, 81));
        QPalette palette;
        QBrush brush(QColor(43, 108, 176, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label_3->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";\n"
"background-color: rgb(3\n"
"6, 36, 36);"));
        label_2 = new QLabel(eliminados);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 40, 281, 41));
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

        retranslateUi(eliminados);

        QMetaObject::connectSlotsByName(eliminados);
    } // setupUi

    void retranslateUi(QDialog *eliminados)
    {
        eliminados->setWindowTitle(QCoreApplication::translate("eliminados", "Dialog", nullptr));
        Eliminar->setText(QCoreApplication::translate("eliminados", "Regresar al inicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("eliminados", "Codigo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("eliminados", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("eliminados", "Motivo de eliminacion", nullptr));
        label_3->setText(QCoreApplication::translate("eliminados", "__________________________________________________________", nullptr));
        label_2->setText(QCoreApplication::translate("eliminados", "Mascotas eliminadas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eliminados: public Ui_eliminados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINADOS_H
