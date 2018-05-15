#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

class bullet : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    bullet();

public slots:
    void fly();
};

#endif // BULLET_H
