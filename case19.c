// 题目
// 一个数如果恰好等于它的因子之和，
// 这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。

#include "common/common.h"

void *check(int n)
{
    // 1+2+3+.. = (1+n)*n/2
    // n = 40时，结果是41*20

    int s = 1, p = 0, t[50];
    for (int i = 2, l = n / 2 + 1; i < l; i++)
    {
        if (n % i == 0)
        {
            s += i;
            t[p] = i;
            p++;
        }
    }
    if (s == n)
    {
        printf("%d=", n);
        while (p-- > 0)
        {
            printf("%d+", t[p]);
        }
        printf("1\n");
    }
}

int main(int argc, char const *argv[])
{
    for (int i = 2; i <= 1000; i++)
    {
        check(i);
    }
    return 0;
}