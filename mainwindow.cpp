#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_accept_pushButton_clicked()
{
    rolls = 0;
    result = 0;
    finalScore = 0;

    ui->result_label->setText("");
    ui->final_score_label->setText("");
    ui->first_number_label->setText("");
    ui->second_number_label->setText("");
    ui->third_number_label->setText("");
    ui->fourth_number_label->setText("");

    rolls = ui->amount_lineEdit->text().toInt();

    if (rolls > 0) {
        ui->number_of_games_label->setText(QString::number(rolls));
    }
    else {
        ui->number_of_games_label->setText("0");
    }
}

void MainWindow::on_roll_pushButton_clicked()
{
    if (rolls <= 0) {
        return;
    }

    labels = {ui->first_number_label, ui->second_number_label, ui->third_number_label, ui->fourth_number_label};

    result = 0;

    for (int i = 0; i < 4; i++) {
        int randomNumber = QRandomGenerator::global()->bounded(1, 7);
        labels[i]->setText(QString::number(randomNumber));
        result += randomNumber;
    }

    finalScore += result;
    ui->result_label->setText(QString::number(result));

    rolls--;

    ui->number_of_games_label->setText(QString::number(rolls));

    if (rolls == 0) {
        ui->final_score_label->setText(QString::number(finalScore));
    }
}
