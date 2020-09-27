#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "WebScannerHandler.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void initialize();
    void setupConnections();

private:
    Ui::MainWindow *ui;
    WebScannerHandler mWebScanner;

};

#endif // MAINWINDOW_H
