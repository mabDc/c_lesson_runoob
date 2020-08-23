// 题目
// 打印出所有的"水仙花数"

// 所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
// 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

// 注意三位数遍历

#include "common/common.h"

int check(int a, int b, int c)
{
    int n = 100 * a + 10 * b + c;
    if (n == cube(a) + cube(b) + cube(c))
    {
        return n;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int n = 10;
    for (int a = 1; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            for (int c = 0; c < n; c++)
            {
                int r = check(a, b, c);
                if (r > 0)
                {
                    printf("%d\n", r);
                }
            }
        }
    }
    return 0;
}
