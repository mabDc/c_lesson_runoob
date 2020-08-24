// 有一分数序列
// 2/1，3/2，5/3，8/5，13/8，21/13...
// 求出这个数列的前20项之和。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int a = 2, b = 1; // a/b
    float s = 0;
    for (int i = 0, t; i < 20; i++)
    {
        s += ((float)a) / b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("%f\n", s);
    return 0;
}