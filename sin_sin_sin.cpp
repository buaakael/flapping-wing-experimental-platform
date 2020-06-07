#include "sin_sin_sin.h"

Sin_Sin_Sin::Sin_Sin_Sin()
{

}

QByteArray Sin_Sin_Sin::flapSignal(int cur, int seg)
{
    QByteArray flap;
    QByteArray t1;
    QByteArray t2;
    QByteArray temp1;

    t1.append(0x23);
    t1.append(0x06);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append((char)0x00);
    t1.append((char)0x00);

    t2.append(0x23);
    t2.append(0x06);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0xFF);
    t2.append(0xFF);

    int fAngle = flapAngle(cur, seg);
    temp1[0] = (uchar)((0xFF00&fAngle)>>8);
    temp1[1] = (uchar)(0x00FF&fAngle);

    if(fAngle >= 0)
    {
        flap.append(t1);
        flap.append(temp1);
    }
    else
    {
        flap.append(t2);
        flap.append(temp1);
    }

    return flap;
}

QByteArray Sin_Sin_Sin::pitchSignal(int cur, int seg)
{
    QByteArray pitch;
    QByteArray t1;
    QByteArray t2;
    QByteArray temp2;

    t1.append(0x23);
    t1.append(0x06);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append((char)0x00);
    t1.append((char)0x00);

    t2.append(0x23);
    t2.append(0x06);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0xFF);
    t2.append(0xFF);

    int pAngle = pitchAngle(cur, seg);
    temp2[0] = (uchar)((0xFF00&pAngle)>>8);
    temp2[1] = (uchar)(0x00FF&pAngle);

    if(pAngle >= 0)
    {
        pitch.append(t1);
        pitch.append(temp2);
    }
    else
    {
        pitch.append(t2);
        pitch.append(temp2);
    }

    return pitch;
}

QByteArray Sin_Sin_Sin::attackSignal(int cur, int seg)
{
    QByteArray attack;
    QByteArray t1;
    QByteArray t2;
    QByteArray temp3;

    t1.append(0x23);
    t1.append(0x06);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append(0x07);
    t1.append(0xD0);
    t1.append((char)0x00);
    t1.append((char)0x00);

    t2.append(0x23);
    t2.append(0x06);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0x07);
    t2.append(0xD0);
    t2.append(0xFF);
    t2.append(0xFF);

    int aAngle = attackAngle(cur, seg);
    temp3[0] = (uchar)((0xFF00&aAngle)>>8);
    temp3[1] = (uchar)(0x00FF&aAngle);

    if(aAngle >= 0)
    {
        attack.append(t1);
        attack.append(temp3);
    }
    else
    {
        attack.append(t2);
        attack.append(temp3);
    }

    return attack;
}

int Sin_Sin_Sin::flapAngle(int cur, int seg)
{
    int fAngle = 44000 * cos(2 * 3.1415926 * cur / double(seg));
    return fAngle;
}

int Sin_Sin_Sin::pitchAngle(int cur, int seg)
{
    int pAngle = -15000 * cos(2 * 3.1415926 * cur / double(seg));
    return pAngle;
}

int Sin_Sin_Sin::attackAngle(int cur, int seg)
{
    int aAngle = -60000 * cos(2 * 3.1415926 * cur / double(seg));
    return aAngle;
}
