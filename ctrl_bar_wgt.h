#ifndef CTRL_BAR_WGT_H
#define CTRL_BAR_WGT_H

#include <QWidget>

namespace Ui {
class CtrlBarWgt;
}

class CtrlBarWgt : public QWidget
{
    Q_OBJECT

public:
    explicit CtrlBarWgt(QWidget *parent = nullptr);
    ~CtrlBarWgt();

private:
    Ui::CtrlBarWgt *ui;
};

#endif // CTRL_BAR_WGT_H
