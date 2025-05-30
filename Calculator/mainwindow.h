#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_eq_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_C_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_com_clicked();
    void on_pushButton_div_clicked();
    void on_pushButton_mult_clicked();
    void on_pushButton_perc_clicked();
    void on_pushButton_rev_clicked();
    void on_pushButton_sub_clicked();

private:
    Ui::MainWindow *ui;

    double counting(double first, char operation_, double second);
    void handleDigitButton(int digit);

    double currentNumder = 0.0;
    double firstNumber = 0.0;
    char operation = ' ';
    double secondNumder = 0.0;

    bool decimalPointAdded = false;
    int decimalPlaces = 0;

    bool isStart = true;
};

#endif // MAINWINDOW_H
