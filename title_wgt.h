#ifndef TITLE_WGT_H
#define TITLE_WGT_H

#include <QWidget>

namespace Ui {
class TitleWgt;
}

class TitleWgt : public QWidget
{
    Q_OBJECT

public:
    explicit TitleWgt(QWidget *parent = nullptr);
    ~TitleWgt();

private:
    Ui::TitleWgt *ui;
};

#endif // TITLE_WGT_H
