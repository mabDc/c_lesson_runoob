
// 题目：利用递归方法求5!。

#include "common/common.h"

int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * f(n - 1);
}

int main(int argc, char const *argv[])
{
    int n = 5;
    printf("%d! = %d\n", n, f(n));
    return 0;
}
