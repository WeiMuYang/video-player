#ifndef PLAY_LIST_WGT_H
#define PLAY_LIST_WGT_H

#include <QWidget>

namespace Ui {
class PlayListWgt;
}

class PlayListWgt : public QWidget
{
    Q_OBJECT

public:
    explicit PlayListWgt(QWidget *parent = nullptr);
    ~PlayListWgt();

private:
    Ui::PlayListWgt *ui;
};

#endif // PLAY_LIST_WGT_H
