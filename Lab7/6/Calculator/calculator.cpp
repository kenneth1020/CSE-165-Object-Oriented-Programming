#include "calculator.h"
#include "ui_calculator.h"
#include <QRegularExpression>
double calcVal = 0.00;
int intcalcVal = 0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool perTrigger = false;
bool squareTrigger = false;
bool powTrigger = false;
Calculator::Calculator(QWidget *parent):
    QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[11];
    for(int i =0; i < 11; i++){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

     connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
     connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
     connect(ui->Mulitiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
     connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));
     connect(ui->Percent, SIGNAL(released()), this, SLOT(MathButtonPressed()));
      connect(ui->SquareRoot, SIGNAL(released()), this, SLOT(MathButtonPressed()));
       connect(ui->Power, SIGNAL(released()), this, SLOT(MathButtonPressed()));

     connect(ui->Equal, SIGNAL(released()), this, SLOT(EqualButton()));
     connect(ui->ChangeSigns, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
      connect(ui->Clear, SIGNAL(released()), this, SLOT(ClearPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble()==0) || (displayVal.toDouble()== 0.00)){
        ui->Display->setText(butVal);
    }
    else{
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    perTrigger = false;
    powTrigger = false;
    squareTrigger = false;
    QString displayVal =ui->Display->text();
    intcalcVal = displayVal.toInt();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *) sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    }
    else if(QString::compare(butVal, "X", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    }
    else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    }
    else if(QString::compare(butVal, "%", Qt::CaseInsensitive) == 0){
        perTrigger = true;
    }
    else if(QString::compare(butVal, "^", Qt::CaseInsensitive) == 0){
        powTrigger = true;
    }
    else if(QString::compare(butVal, "sqrt()", Qt::CaseInsensitive) == 0){
        squareTrigger = true;
    }
    else{
        subTrigger = true;
    }
    ui->Display->setText("");
}
void Calculator::EqualButton(){
    double solution = 0.00;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger || perTrigger || powTrigger || squareTrigger){
        if(addTrigger){
            solution = calcVal +dblDisplayVal;
        }
        else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        }
        else if(multTrigger){
            solution = (calcVal * dblDisplayVal);
        }
        else if(perTrigger){
            int intDisplayVal = displayVal.toInt();
            solution = intcalcVal % intDisplayVal;
        }
        else if(powTrigger){
            solution = pow(calcVal, dblDisplayVal);
        }
        else if(squareTrigger){
            dblDisplayVal = 1/dblDisplayVal;
            solution = pow(calcVal, dblDisplayVal);
        }
        else{
            solution = calcVal / dblDisplayVal;
        }
     ui->Display->setText(QString::number(solution));
    }
}

void Calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    //QRegularExpression version(QRegularExpression::anchoredPattern(QLatin1String("[-]?[0-9.]*")));
    //QRegularExpressionMatch match = version.match(displayVal);
    //if(match.hasMatch()){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1*dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    //}
}

void Calculator::ClearPressed(){
    ui->Display->setText(QString::number(0.00));
}
