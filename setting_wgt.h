#ifndef SETTING_WGT_H
#define SETTING_WGT_H

#include <QWidget>

namespace Ui {
class SettingWgt;
}

class SettingWgt : public QWidget
{
    Q_OBJECT

public:
    explicit SettingWgt(QWidget *parent = nullptr);
    ~SettingWgt();

private:
    Ui::SettingWgt *ui;
};

#endif // SETTING_WGT_H
