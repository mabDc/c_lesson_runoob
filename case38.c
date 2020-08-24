
// 题目：求一个3*3矩阵对角线元素之和

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int n = 3, m[n][n], s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        s += m[i][i];
    }
    printf("%d\n", s);
    return 0;
}
