#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "include/webbrowser/futureclasswebbrowser2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    browser_(NULL)
{
    ui->setupUi(this);
    browser_ = new FutureClassWebBrowser2(this);
    browser_->setGeometry(0, ui->go_button->height(), this->width(), this->height() - ui->go_button->height());
//    browser_->setVisible(true);
}

MainWindow::~MainWindow()
{
    if (NULL != browser_) {
        delete browser_;
        browser_ = NULL;
    }
    delete ui;
}

void MainWindow::on_go_button_clicked()
{
    if (NULL != browser_) {
        qDebug()<<ui->address_edit->text();
        browser_->Navigate(ui->address_edit->text());
    }
}

void MainWindow::on_address_edit_returnPressed()
{
    if (NULL != browser_) {
        qDebug()<<ui->address_edit->text();
        browser_->Navigate(ui->address_edit->text());
    }
}
