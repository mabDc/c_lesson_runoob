
// 题目：将一个数组逆序输出。

#include "common/common.h"

void print(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n = 10, a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("原始数组是:");
    print(n, a);
    for (int i = 0, t; i <= n / 2 - 1; i++)
    {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("排序后的数组:");
    print(n, a);
    return 0;
}
