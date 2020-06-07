#include "motion.h"

Motion::Motion()
{

}

QByteArray Motion::resetSignal()
{
    QByteArray data;
    data.resize(10);
    data[0] = 0x23;
    data[1] = 0x00;
    data[2] = 0x55;
    data[3] = 0x55;
    data[4] = 0x55;
    data[5] = 0x55;
    data[6] = 0x55;
    data[7] = 0x55;
    data[8] = 0x55;
    data[9] = 0x55;
    return data;
}

QByteArray Motion::modelSignal()
{
    QByteArray data;
    data.resize(10);
    data[0] = 0x23;
    data[1] = 0x01;
    data[2] = 0x05;
    data[3] = 0x55;
    data[4] = 0x55;
    data[5] = 0x55;
    data[6] = 0x55;
    data[7] = 0x55;
    data[8] = 0x55;
    data[9] = 0x55;
    return data;
}


