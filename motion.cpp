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

QByteArray Motion::flapInitSignal()
{
    QByteArray fInitData;
    fInitData.resize(10);

    fInitData[0] = 0x23;
    fInitData[1] = 0x06;
    fInitData[2] = 0x01;
    fInitData[3] = 0xF4;
    fInitData[4] = 0x01;
    fInitData[5] = 0xF4;
    fInitData[6] = 0xFF;
    fInitData[7] = 0xFF;
    fInitData[8] = 0x54;
    fInitData[9] = 0x20;

    return fInitData;
}

QByteArray Motion::pitchInitSignal()
{
    QByteArray pInitData;
    pInitData.resize(10);

    pInitData[0] = 0x23;
    pInitData[1] = 0x06;
    pInitData[2] = 0x07;
    pInitData[3] = 0xD0;
    pInitData[4] = 0x07;
    pInitData[5] = 0xD0;
    pInitData[6] = 0xFF;
    pInitData[7] = 0xFF;
    pInitData[8] = 0xC5;
    pInitData[9] = 0x68;

    return pInitData;
}

QByteArray Motion::attackInitSignal()
{
    QByteArray aInitData;
    aInitData.resize(10);

    aInitData[0] = 0x23;
    aInitData[1] = 0x06;
    aInitData[2] = 0x07;
    aInitData[3] = 0xD0;
    aInitData[4] = 0x07;
    aInitData[5] = 0xD0;
    aInitData[6] = 0xFF;
    aInitData[7] = 0xFF;
    aInitData[8] = 0x15;
    aInitData[9] = 0xA0;

    return aInitData;
}

QByteArray Motion::flapResetSignal()
{
    QByteArray fResetData;
    fResetData.resize(10);

    fResetData[0] = 0x23;
    fResetData[1] = 0x06;
    fResetData[2] = 0x01;
    fResetData[3] = 0xF4;
    fResetData[4] = 0x01;
    fResetData[5] = 0xF4;
    fResetData[6] = 0x00;
    fResetData[7] = 0x00;
    fResetData[8] = 0x00;
    fResetData[9] = 0x00;

    return fResetData;
}

QByteArray Motion::pitchResetSignal()
{
    QByteArray pResetData;
    pResetData.resize(10);

    pResetData[0] = 0x23;
    pResetData[1] = 0x06;
    pResetData[2] = 0x07;
    pResetData[3] = 0xD0;
    pResetData[4] = 0x07;
    pResetData[5] = 0xD0;
    pResetData[6] = 0x00;
    pResetData[7] = 0x00;
    pResetData[8] = 0x00;
    pResetData[9] = 0x00;

    return pResetData;
}

QByteArray Motion::attackResetSignal()
{
    QByteArray aResetData;
    aResetData.resize(10);

    aResetData[0] = 0x23;
    aResetData[1] = 0x06;
    aResetData[2] = 0x07;
    aResetData[3] = 0xD0;
    aResetData[4] = 0x07;
    aResetData[5] = 0xD0;
    aResetData[6] = 0x00;
    aResetData[7] = 0x00;
    aResetData[8] = 0x00;
    aResetData[9] = 0x00;

    return aResetData;
}
