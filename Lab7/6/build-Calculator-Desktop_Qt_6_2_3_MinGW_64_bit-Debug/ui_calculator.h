/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *Button2;
    QPushButton *SquareRoot;
    QPushButton *Subtract;
    QPushButton *Clear;
    QLineEdit *Display;
    QPushButton *Button5;
    QPushButton *Add;
    QPushButton *ChangeSigns;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *Power;
    QPushButton *Button3;
    QPushButton *Button1;
    QPushButton *Mulitiply;
    QPushButton *Button6;
    QPushButton *Percent;
    QPushButton *Divide;
    QPushButton *Button0;
    QPushButton *Equal;
    QPushButton *Button9;
    QMenuBar *menubar;
    QMenu *menuCalcuator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(342, 259);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        SquareRoot = new QPushButton(centralwidget);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 4, 4, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(24);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(70, 70, 70);\n"
"	boarder: 1px solid gray;\n"
"	color:rgb(220, 253, 255);\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        ChangeSigns = new QPushButton(centralwidget);
        ChangeSigns->setObjectName(QString::fromUtf8("ChangeSigns"));
        sizePolicy.setHeightForWidth(ChangeSigns->sizePolicy().hasHeightForWidth());
        ChangeSigns->setSizePolicy(sizePolicy);
        ChangeSigns->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSigns, 5, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Power = new QPushButton(centralwidget);
        Power->setObjectName(QString::fromUtf8("Power"));
        sizePolicy.setHeightForWidth(Power->sizePolicy().hasHeightForWidth());
        Power->setSizePolicy(sizePolicy);
        Power->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Power, 3, 4, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Mulitiply = new QPushButton(centralwidget);
        Mulitiply->setObjectName(QString::fromUtf8("Mulitiply"));
        sizePolicy.setHeightForWidth(Mulitiply->sizePolicy().hasHeightForWidth());
        Mulitiply->setSizePolicy(sizePolicy);
        Mulitiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Mulitiply, 3, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Percent = new QPushButton(centralwidget);
        Percent->setObjectName(QString::fromUtf8("Percent"));
        sizePolicy.setHeightForWidth(Percent->sizePolicy().hasHeightForWidth());
        Percent->setSizePolicy(sizePolicy);
        Percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Percent, 1, 4, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        sizePolicy.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 151, 47);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equal, 5, 4, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(140, 255, 247);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(46, 154, 255);\n"
"	boarder: 1px solid rgb(115, 110, 106);\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 342, 21));
        menuCalcuator = new QMenu(menubar);
        menuCalcuator->setObjectName(QString::fromUtf8("menuCalcuator"));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuCalcuator->menuAction());

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "sqrt()", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.00", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        ChangeSigns->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Power->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Mulitiply->setText(QCoreApplication::translate("Calculator", "X", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Percent->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        menuCalcuator->setTitle(QCoreApplication::translate("Calculator", "Calcuator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
