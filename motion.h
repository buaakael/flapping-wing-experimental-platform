#ifndef MOTION_H
#define MOTION_H

#include <QString>

class Motion
{
public:
    Motion();

    QByteArray resetSignal();
    QByteArray modelSignal();
    virtual QByteArray flapSignal() = 0;
    virtual QByteArray pitchSignal() = 0;
    virtual QByteArray attackSignal() = 0;
};

#endif // MOTION_H
