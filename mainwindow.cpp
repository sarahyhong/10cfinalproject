#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect( ui->tissue ,SIGNAL( clicked() ),
                      this, SLOT(record_tissue() )  );
    QObject::connect( ui->lysate ,SIGNAL( clicked() ),
                      this, SLOT(record_lysate() )  );
    QObject::connect( ui->buttonBox ,SIGNAL( clicked() ),
                      this, SLOT(is_correct() )  );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::record_tissue()
{
    tissue = true;
}

void MainWindow::record_lysate()
{
    lysate = true;
}

void MainWindow::is_correct()
{
    if (tissue == true && lysate == true)
    {
        ui->label = "Good Job!";
    }
