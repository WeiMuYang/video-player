#ifndef MEDIALIST_H
#define MEDIALIST_H

#include <QListWidget>
#include <QObject>

class MediaList : public QListWidget
{
public:
    MediaList(QWidget *parent = 0);
};

#endif // MEDIALIST_H
