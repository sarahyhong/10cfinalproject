#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void record_tissue();
    void record_lysate();
    void is_correct();

private:
    Ui::MainWindow *ui;
    bool tissue;
    bool lysate;
};
#endif // MAINWINDOW_H
