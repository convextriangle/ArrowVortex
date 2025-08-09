#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    centralWidget.setLayout(&layout);
    layout.setContentsMargins(0, 0, 0, 0);
    layout.addWidget(&graphicsWidget);

    this->setCentralWidget(&centralWidget);
    this->resize(640, 480);
}

MainWindow::~MainWindow()
{
}