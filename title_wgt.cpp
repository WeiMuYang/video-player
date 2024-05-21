#include "title_wgt.h"
#include "ui_title_wgt.h"

TitleWgt::TitleWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TitleWgt)
{
    ui->setupUi(this);
}

TitleWgt::~TitleWgt()
{
    delete ui;
}
