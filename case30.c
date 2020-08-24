
// 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int x, n = 5;
    printf("请输入%d位正整数：", n);
    scanf("%d", &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = x % 10;
        x /= 10;
    }
    if (a[0] == a[4] && a[1] == a[3])
    {
        printf("回文数\n");
    }
    else
    {
        printf("不是回文数\n");
    }
}
