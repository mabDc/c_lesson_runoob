// 题目
// 输入两个正整数m和n
// 求其最大公约数和最小公倍数。

// 辗转相除法

#include "common/common.h"

int gcd(int a, int b)
{
    if (a < b)
    {
        swap_int(&a, &b);
    }
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("请输入两个数字：\n");
    scanf("%d %d", &a, &b);
    int c = gcd(a, b);
    printf("这两个数的最大公约数是%d，最小公倍数是%d\n", c, a * b / c);
    return 0;
}
