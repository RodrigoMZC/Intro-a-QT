/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineNumero;
    QPushButton *pushButFacIt;
    QPushButton *pushButFacRe;
    QPushButton *pushButEsPrimo;
    QPushButton *pushButAND;
    QPushButton *pushButOR;
    QPushButton *pushButNOR;
    QLabel *label_4;
    QLineEdit *lineNumero_2;
    QPushButton *pushButXOR;
    QPushButton *pushButCoIz;
    QPushButton *pushButCorDer;
    QRadioButton *radioButDec;
    QRadioButton *radioButBin;
    QFrame *frame_2;
    QLabel *label_3;
    QPushButton *pushButSalir;
    QLabel *labResult;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *labBin1;
    QLabel *labBin2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(550, 400);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 550, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);\n"
"border-radius: 20px;\n"
"color: rgb(0, 0, 0);\n"
"font: 25pt \"Farah\";\n"
""));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame = new QFrame(Dialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(5, 60, 265, 330));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);\n"
"border-radius: 20px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 95, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 20pt \"Farah\";"));
        lineNumero = new QLineEdit(frame);
        lineNumero->setObjectName("lineNumero");
        lineNumero->setGeometry(QRect(5, 35, 255, 35));
        lineNumero->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        lineNumero->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 22pt \"Andale Mono\";\n"
"background-color: rgb(37, 44, 52);\n"
"color: rgb(250, 250, 250);"));
        lineNumero->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButFacIt = new QPushButton(frame);
        pushButFacIt->setObjectName("pushButFacIt");
        pushButFacIt->setGeometry(QRect(5, 285, 125, 30));
        pushButFacIt->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButFacIt->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButFacRe = new QPushButton(frame);
        pushButFacRe->setObjectName("pushButFacRe");
        pushButFacRe->setGeometry(QRect(135, 285, 125, 30));
        pushButFacRe->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButFacRe->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButEsPrimo = new QPushButton(frame);
        pushButEsPrimo->setObjectName("pushButEsPrimo");
        pushButEsPrimo->setGeometry(QRect(5, 250, 255, 30));
        pushButEsPrimo->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButEsPrimo->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButAND = new QPushButton(frame);
        pushButAND->setObjectName("pushButAND");
        pushButAND->setGeometry(QRect(5, 140, 80, 50));
        pushButAND->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButAND->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButOR = new QPushButton(frame);
        pushButOR->setObjectName("pushButOR");
        pushButOR->setGeometry(QRect(92, 140, 80, 50));
        pushButOR->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButOR->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButNOR = new QPushButton(frame);
        pushButNOR->setObjectName("pushButNOR");
        pushButNOR->setGeometry(QRect(178, 140, 80, 50));
        pushButNOR->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButNOR->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 75, 90, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 20pt \"Farah\";"));
        lineNumero_2 = new QLineEdit(frame);
        lineNumero_2->setObjectName("lineNumero_2");
        lineNumero_2->setGeometry(QRect(5, 100, 255, 35));
        lineNumero_2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        lineNumero_2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 22pt \"Andale Mono\";\n"
"background-color: rgb(37, 44, 52);\n"
"color: rgb(250, 250, 250);"));
        lineNumero_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        pushButXOR = new QPushButton(frame);
        pushButXOR->setObjectName("pushButXOR");
        pushButXOR->setGeometry(QRect(5, 195, 80, 50));
        pushButXOR->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButXOR->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButCoIz = new QPushButton(frame);
        pushButCoIz->setObjectName("pushButCoIz");
        pushButCoIz->setGeometry(QRect(92, 195, 80, 50));
        pushButCoIz->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButCoIz->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        pushButCorDer = new QPushButton(frame);
        pushButCorDer->setObjectName("pushButCorDer");
        pushButCorDer->setGeometry(QRect(178, 195, 80, 50));
        pushButCorDer->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButCorDer->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        radioButDec = new QRadioButton(frame);
        radioButDec->setObjectName("radioButDec");
        radioButDec->setGeometry(QRect(120, 10, 41, 20));
        radioButDec->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 18pt \"Andale Mono\";"));
        radioButDec->setChecked(true);
        radioButBin = new QRadioButton(frame);
        radioButBin->setObjectName("radioButBin");
        radioButBin->setGeometry(QRect(180, 10, 41, 20));
        radioButBin->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 18pt \"Andale Mono\";"));
        frame_2 = new QFrame(Dialog);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(280, 60, 265, 330));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 233);\n"
"border-radius: 20px;\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 20pt \"Farah\";"));
        pushButSalir = new QPushButton(frame_2);
        pushButSalir->setObjectName("pushButSalir");
        pushButSalir->setGeometry(QRect(135, 285, 122, 30));
        pushButSalir->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButSalir->setStyleSheet(QString::fromUtf8("color: rgb(233, 233, 233);\n"
"border-radius: 15px;\n"
"font: 14pt \"Farah\";\n"
"background-color: rgb(37, 44, 52);\n"
""));
        labResult = new QLabel(frame_2);
        labResult->setObjectName("labResult");
        labResult->setGeometry(QRect(5, 35, 255, 35));
        labResult->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 22pt \"Andale Mono\";\n"
"background-color: rgb(37, 44, 52);\n"
"color: rgb(250, 250, 250);"));
        labResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 75, 191, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 20pt \"Farah\";"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 140, 191, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 20pt \"Farah\";"));
        labBin1 = new QLabel(frame_2);
        labBin1->setObjectName("labBin1");
        labBin1->setGeometry(QRect(5, 100, 255, 35));
        labBin1->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 20pt \"Andale Mono\";\n"
"background-color: rgb(37, 44, 52);\n"
"color: rgb(250, 250, 250);"));
        labBin1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        labBin2 = new QLabel(frame_2);
        labBin2->setObjectName("labBin2");
        labBin2->setGeometry(QRect(5, 165, 255, 35));
        labBin2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"font: 20pt \"Andale Mono\";\n"
"background-color: rgb(37, 44, 52);\n"
"color: rgb(250, 250, 250);"));
        labBin2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Calculadora", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Numero 1:", nullptr));
        pushButFacIt->setText(QCoreApplication::translate("Dialog", "Factroria Iter", nullptr));
        pushButFacRe->setText(QCoreApplication::translate("Dialog", "Factroria Rec", nullptr));
        pushButEsPrimo->setText(QCoreApplication::translate("Dialog", "Es Primo", nullptr));
        pushButAND->setText(QCoreApplication::translate("Dialog", "AND", nullptr));
        pushButOR->setText(QCoreApplication::translate("Dialog", "OR", nullptr));
        pushButNOR->setText(QCoreApplication::translate("Dialog", "NOR", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Numero 2:", nullptr));
        pushButXOR->setText(QCoreApplication::translate("Dialog", "XOR", nullptr));
        pushButCoIz->setText(QCoreApplication::translate("Dialog", "<<", nullptr));
        pushButCorDer->setText(QCoreApplication::translate("Dialog", ">>", nullptr));
        radioButDec->setText(QCoreApplication::translate("Dialog", "10", nullptr));
        radioButBin->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Respuesta:", nullptr));
        pushButSalir->setText(QCoreApplication::translate("Dialog", "Salir", nullptr));
        labResult->setText(QString());
        label_5->setText(QCoreApplication::translate("Dialog", "Binario numreo 1:", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Binario numreo 2:", nullptr));
        labBin1->setText(QString());
        labBin2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
