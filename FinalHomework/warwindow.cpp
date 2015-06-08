#include "warwindow.h"
#include "ui_warwindow.h"

WarWindow::WarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WarWindow)
{
    ui->setupUi(this);
}

WarWindow::~WarWindow()
{
    delete ui;
}
