#include "ctrl_bar_wgt.h"
#include "ui_ctrl_bar_wgt.h"

CtrlBarWgt::CtrlBarWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlBarWgt)
{
    ui->setupUi(this);
}

CtrlBarWgt::~CtrlBarWgt()
{
    delete ui;
}
