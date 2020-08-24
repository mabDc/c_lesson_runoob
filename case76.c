
// 题目：编写一个函数
// 输入n为偶数时，调用函数求1/2+1/4+...+1/n
// 当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。

#include "common/common.h"

double f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1.0 / 2;
    }
    return 1.0 / n + f(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("请输入一个数字：");
    scanf("%d", &n);
    printf("%lf\n", f(n));
    return 0;
}
