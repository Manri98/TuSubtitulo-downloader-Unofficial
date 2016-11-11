#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_downloadButton_clicked()
{

}

void MainWindow::on_folderButton_clicked()
{

}

void MainWindow::on_searchButton_clicked()
{

}

void MainWindow::on_nameEdit_returnPressed()
{

}
