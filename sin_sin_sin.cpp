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

    if (aAngle > 65535)
        t1[7] = (uchar)((0xFF0000&aAngle)>>16);
    else if (aAngle < -65536)
        t2[7] = (uchar)((0xFF0000&aAngle)>>16);

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

QByteArray Sin_Sin_Sin::flapSignal(int fAngle)
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

QByteArray Sin_Sin_Sin::pitchSignal(int pAngle)
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

QByteArray Sin_Sin_Sin::attackSignal(int aAngle)
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

    temp3[0] = (uchar)((0xFF00&aAngle)>>8);
    temp3[1] = (uchar)(0x00FF&aAngle);

    if (aAngle > 65535)
        t1[7] = (uchar)((0xFF0000&aAngle)>>16);
    else if (aAngle < -65536)
        t2[7] = (uchar)((0xFF0000&aAngle)>>16);

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
    //扑动角5阶傅里叶级数参数
    double fa0 = 5.188;
    double fa1 = 79.63;
    double fb1 = -22.62;
    double fa2 = -4.096;
    double fb2 = -0.996;
    double fa3 = 0.9992;
    double fb3 = -0.6824;
    double fa4 = -0.6839;
    double fb4 = 1.194;
    double fa5 = 1.676;
    double fb5 = -0.3388;
    double fw = 5.669;

    int fAngle = 4000 * 66 / 360.0 *
            ( fa0
            + fa1 * cos(1 * fw * cur / seg) + fb1 * sin(1 * fw * cur / seg)
            + fa2 * cos(2 * fw * cur / seg) + fb2 * sin(2 * fw * cur / seg)
            + fa3 * cos(3 * fw * cur / seg) + fb3 * sin(3 * fw * cur / seg)
            + fa4 * cos(4 * fw * cur / seg) + fb4 * sin(4 * fw * cur / seg)
            + fa5 * cos(5 * fw * cur / seg) + fb5 * sin(5 * fw * cur / seg)
              );
    return fAngle;
}

int Sin_Sin_Sin::pitchAngle(int cur, int seg)
{
    double pa0 = 1.073;
    double pa1 = 5.381;
    double pb1 = -1.401;
    double pa2 = 0.9552;
    double pb2 = -6.806;
    double pa3 = -1.335;
    double pb3 = -4.269;
    double pa4 = -0.2176;
    double pb4 = -2.194;
    double pa5 = -0.5162;
    double pb5 = 1.498;
    double pw = 5.067;


    int pAngle = 4096 * 128 / 360.0 *
            ( pa0
            + pa1 * cos(1 * pw * cur / seg) + pb1 * sin(1 * pw * cur / seg)
            + pa2 * cos(2 * pw * cur / seg) + pb2 * sin(2 * pw * cur / seg)
            + pa3 * cos(3 * pw * cur / seg) + pb3 * sin(3 * pw * cur / seg)
            + pa4 * cos(4 * pw * cur / seg) + pb4 * sin(4 * pw * cur / seg)
            + pa5 * cos(5 * pw * cur / seg) + pb5 * sin(5 * pw * cur / seg)
              );
    return pAngle;
}

int Sin_Sin_Sin::attackAngle(int cur, int seg)
{
    double aa0 = -3.867;
    double aa1 = -18.56;
    double ab1 = -43.14;
    double aa2 = 1.31;
    double ab2 = 0.9261;
    double aa3 = -4.355;
    double ab3 = -13.22;
    double aa4 = -1.892;
    double ab4 = -1.881;
    double aa5 = 0.9455;
    double ab5 = 0.5704;
    double aw = 6.326;

    int aAngle = 4096 * 128 / 360.0 *
            ( aa0
            + aa1 * cos(1 * aw * cur / seg) + ab1 * sin(1 * aw * cur / seg)
            + aa2 * cos(2 * aw * cur / seg) + ab2 * sin(2 * aw * cur / seg)
            + aa3 * cos(3 * aw * cur / seg) + ab3 * sin(3 * aw * cur / seg)
            + aa4 * cos(4 * aw * cur / seg) + ab4 * sin(4 * aw * cur / seg)
            + aa5 * cos(5 * aw * cur / seg) + ab5 * sin(5 * aw * cur / seg)
              );
    return aAngle;
}
