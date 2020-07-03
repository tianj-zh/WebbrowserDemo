#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class FutureClassWebBrowser2;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_go_button_clicked();

    void on_address_edit_returnPressed();

private:
    Ui::MainWindow *ui;
    FutureClassWebBrowser2* browser_;
};

#endif // MAINWINDOW_H
