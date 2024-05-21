#include "show_wgt.h"
#include "ui_show_wgt.h"

ShowWgt::ShowWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowWgt)
{
    ui->setupUi(this);
}

ShowWgt::~ShowWgt()
{
    delete ui;
}
