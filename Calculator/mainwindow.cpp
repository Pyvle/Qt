#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


double MainWindow::counting(double first, char operation_, double second) {
    switch (operation_) {
    case '+':
        return first + second;
    case '-':
        return first - second;
    case '*':
        return first * second;
    case '/':
        if (second != 0) {
            return first / second;
        } else {
            return 0.0; // Деление на ноль
        }
    default:
        return 0.0;
    }
}

void MainWindow::handleDigitButton(int digit) {
    QString currentText = ui->label_result->text();
    if (decimalPointAdded) {
        currentNumder += std::pow(0.1, ++decimalPlaces) * digit;
        ui->label_result->setText(currentText + QString::number(digit));
    } else {
        if (currentText == "0" || isStart) {
            ui->label_result->setText(QString::number(digit));
            currentNumder = digit;
        } else {
            ui->label_result->setText(currentText + QString::number(digit));
            currentNumder = currentNumder * 10 + digit;
        }
    }
    isStart = false;
}

//
void MainWindow::on_pushButton_0_clicked() { handleDigitButton(0); }
void MainWindow::on_pushButton_1_clicked() { handleDigitButton(1); }
void MainWindow::on_pushButton_2_clicked() { handleDigitButton(2); }
void MainWindow::on_pushButton_3_clicked() { handleDigitButton(3); }
void MainWindow::on_pushButton_4_clicked() { handleDigitButton(4); }
void MainWindow::on_pushButton_5_clicked() { handleDigitButton(5); }
void MainWindow::on_pushButton_6_clicked() { handleDigitButton(6); }
void MainWindow::on_pushButton_7_clicked() { handleDigitButton(7); }
void MainWindow::on_pushButton_8_clicked() { handleDigitButton(8); }
void MainWindow::on_pushButton_9_clicked() { handleDigitButton(9); }

// C
void MainWindow::on_pushButton_C_clicked() {
    ui->label_result->setText("0");
    ui->label_expr->setText("");
    currentNumder = 0.0;
    firstNumber = 0.0;
    secondNumder = 0.0;
    operation = ' ';
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

// "+
void MainWindow::on_pushButton_add_clicked() {
    if (operation == ' ') {
        firstNumber = currentNumder;
    } else {
        secondNumder = currentNumder;
        firstNumber = counting(firstNumber, operation, secondNumder);
    }
    operation = '+';
    ui->label_expr->setText(ui->label_expr->text() + QString::number(firstNumber) + "+");
    currentNumder = 0.0;
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

// .
void MainWindow::on_pushButton_com_clicked() {
    if (!decimalPointAdded) {
        ui->label_result->setText(ui->label_result->text() + ".");
        decimalPointAdded = true;
    }
    isStart = false;
}

// =
void MainWindow::on_pushButton_eq_clicked() {
    if (operation != ' ') {
        secondNumder = currentNumder;
        if (operation == '/' && secondNumder == 0) {
            ui->label_result->setText("ERROR");
            return;
        }
        firstNumber = counting(firstNumber, operation, secondNumder);
        ui->label_result->setText(QString::number(firstNumber));
        ui->label_expr->setText(ui->label_expr->text() + "=");
    } else {
        ui->label_result->setText(QString::number(currentNumder));
    }
    operation = ' ';
    currentNumder = 0.0;
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

// -, *, /
void MainWindow::on_pushButton_div_clicked() {
    if (operation == ' ') {
        firstNumber = currentNumder;
    } else {
        secondNumder = currentNumder;
        firstNumber = counting(firstNumber, operation, secondNumder);
    }
    operation = '/';
    ui->label_expr->setText(ui->label_expr->text() + QString::number(firstNumber) + "/");
    currentNumder = 0.0;
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

void MainWindow::on_pushButton_mult_clicked() {
    if (operation == ' ') {
        firstNumber = currentNumder;
    } else {
        secondNumder = currentNumder;
        firstNumber = counting(firstNumber, operation, secondNumder);
    }
    operation = '*';
    ui->label_expr->setText(ui->label_expr->text() + QString::number(firstNumber) + "*");
    currentNumder = 0.0;
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

void MainWindow::on_pushButton_sub_clicked() {
    if (operation == ' ') {
        firstNumber = currentNumder;
    } else {
        secondNumder = currentNumder;
        firstNumber = counting(firstNumber, operation, secondNumder);
    }
    operation = '-';
    ui->label_expr->setText(ui->label_expr->text() + QString::number(firstNumber) + "-");
    currentNumder = 0.0;
    decimalPointAdded = false;
    decimalPlaces = 0;
    isStart = true;
}

// %
void MainWindow::on_pushButton_perc_clicked() {
    if (currentNumder != 0) {
        currentNumder /= 100;
        ui->label_result->setText(QString::number(currentNumder));
    }
}

// +/-
void MainWindow::on_pushButton_rev_clicked() {
    currentNumder *= -1;
    ui->label_result->setText(QString::number(currentNumder));
}
