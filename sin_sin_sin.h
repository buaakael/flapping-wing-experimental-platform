#ifndef SIN_SIN_SIN_H
#define SIN_SIN_SIN_H

#include "motion.h"
#include <cmath>

class Sin_Sin_Sin : public Motion
{
public:
    Sin_Sin_Sin();

    QByteArray flapSignal(int cur, int seg);
    QByteArray pitchSignal(int cur, int seg);
    QByteArray attackSignal(int cur, int seg);
    QByteArray flapSignal(int fAngle);
    QByteArray pitchSignal(int pAngle);
    QByteArray attackSignal(int aAngle);
    int flapAngle(int cur, int seg);
    int pitchAngle(int cur, int seg);
    int attackAngle(int cur, int seg);
};

#endif // SIN_SIN_SIN_H
