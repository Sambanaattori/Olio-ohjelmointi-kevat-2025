#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//Numeroiden yhteydet
    connect(ui->numeroNappi0, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi1, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi2, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi3, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi4, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi5, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi6, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi7, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi8, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);
    connect(ui->NumeroNappi9, &QPushButton::clicked,
            this, &MainWindow::numberClickHandler);

//Operand yhteydet
    connect(ui->plus, &QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->minus, &QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->divide, &QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->times, &QPushButton::clicked,
            this, &MainWindow::addSubMulDivClickHandler);

//Enter ja Clear yhteydet
    connect(ui->enter, &QPushButton::clicked,
            this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->clear, &QPushButton::clicked,
            this, &MainWindow::clearAndEnterClickHandler);
}
//Numeroiden handleri
void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString buttonValue = button->text();

    if(this->state == 1)
    {
        number1 += buttonValue;
        ui->inputNum1->setText(number1);
    }

    else if(this->state == 2)
    {
        number2 +=buttonValue;
        ui->inputNum2->setText(number2);
    }
}
//Operaattorin handlerit
void MainWindow::addSubMulDivClickHandler ()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());

    if(button->objectName() == "plus")
    {
        operand = 0;
    }
    else if(button->objectName() == "minus")
    {
        operand = 1;
    }
    else if(button->objectName() == "times")
    {
        operand = 2;
    }
    else if(button->objectName() == "divide")
    {
        operand = 3;
    }
    this->state = 2;
}
//Clear ja Enter nappien handlerit
void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    if(button->objectName() == "clear")
    {
    state = 1;
    number1 = "";
    number2 = "";
    ui->inputNum1->clear();
    ui->inputNum2->clear();
    ui->result->clear();
    }
    else if(button->objectName() == "enter")
    {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        switch(operand)
        {
        case 0: result = num1 + num2; break;
        case 1: result = num1 - num2; break;
        case 2: result = num1 * num2; break;
        case 3: result = num1 / num2; break;
        }
        ui->result->setText(QString::number(result));
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
