#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRandomGenerator>
#include <QList>
#include <QLabel>

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
    void on_accept_pushButton_clicked();

    void on_roll_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int rolls = 0;
    int result = 0;
    int finalScore = 0;
    QList<QLabel*> labels;
};

#endif // MAINWINDOW_H
