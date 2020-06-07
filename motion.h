#ifndef MOTION_H
#define MOTION_H

#include <QString>

class Motion
{
public:
    Motion();

    QByteArray resetSignal();
    QByteArray modelSignal();
    QByteArray flapResetSignal();
    QByteArray pitchResetSignal();
    QByteArray attackResetSignal();
    QByteArray flapInitSignal();
    QByteArray pitchInitSignal();
    QByteArray attackInitSignal();
    virtual QByteArray flapSignal(int cur, int seg) = 0;
    virtual QByteArray pitchSignal(int cur, int seg) = 0;
    virtual QByteArray attackSignal(int cur, int seg) = 0;
    virtual int flapAngle(int cur, int seg) = 0;
    virtual int pitchAngle(int cur, int seg) = 0;
    virtual int attackAngle(int cur, int seg) = 0;
};

#endif // MOTION_H
