#ifndef SHOW_WGT_H
#define SHOW_WGT_H

#include <QWidget>

namespace Ui {
class ShowWgt;
}

class ShowWgt : public QWidget
{
    Q_OBJECT

public:
    explicit ShowWgt(QWidget *parent = nullptr);
    ~ShowWgt();

private:
    Ui::ShowWgt *ui;
};

#endif // SHOW_WGT_H
