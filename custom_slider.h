#ifndef CUSTOMSLIDER_H
#define CUSTOMSLIDER_H

#include <QSlider>
#include <QObject>
#include <QMouseEvent>

class CustomSlider : public QSlider
{
public:
    CustomSlider(QWidget *parent);
};

#endif // CUSTOMSLIDER_H
