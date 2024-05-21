#include "play_list_wgt.h"
#include "ui_play_list_wgt.h"

PlayListWgt::PlayListWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayListWgt)
{
    ui->setupUi(this);
}

PlayListWgt::~PlayListWgt()
{
    delete ui;
}
