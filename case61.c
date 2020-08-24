
// 题目：打印出杨辉三角形（要求打印出10行）。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int a[10][10];
    for (int i = 0; i < 10; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i < 10; i++)
    {
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
