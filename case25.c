// 求1+2!+3!+...+20!的和

#include "common/common.h"

int main(int argc, char const *argv[])
{
    long long s = 1, n = 1;
    for (int i = 2, t; i <= 20; i++)
    {
        n *= i;
        s += n;
    }
    printf("%lld\n", s);
    return 0;
}