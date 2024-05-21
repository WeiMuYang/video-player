#include "setting_wgt.h"
#include "ui_setting_wgt.h"

SettingWgt::SettingWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingWgt)
{
    ui->setupUi(this);
}

SettingWgt::~SettingWgt()
{
    delete ui;
}
