
// 题目：给一个不多于5位的正整数，
// 要求：一、求它是几位数，二、逆序打印出各位数字。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int x, n = 5;
    printf("请输入不多于%d位的正整数：", n);
    scanf("%d", &x);
    int a[n], m = 1;
    for (int i = 0, t; i < n; i++)
    {
        t = x % 10;
        if (t != 0)
        {
            m = i + 1;
        }
        a[i] = t;
        x /= 10;
    }
    printf("%d位数: ", m);
    for (int i = 0; i < m; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
