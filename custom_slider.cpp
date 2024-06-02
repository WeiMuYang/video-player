#include "custom_slider.h"
#define MAX_SLIDER_VALUE 65536

CustomSlider::CustomSlider(QWidget *parent)
    : QSlider(parent)
{
    this->setMaximum(MAX_SLIDER_VALUE);
}
