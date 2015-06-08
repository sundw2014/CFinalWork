#ifndef WARWINDOW_H
#define WARWINDOW_H

#include <QDialog>

namespace Ui {
class WarWindow;
}

class WarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WarWindow(QWidget *parent = 0);
    ~WarWindow();

private:
    Ui::WarWindow *ui;
};

#endif // WARWINDOW_H
