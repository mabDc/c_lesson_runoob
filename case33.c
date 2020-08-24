
// 题目：判断一个数字是否为质数。

#include "common/common.h"

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    printf("N=%d %s\n", 1, check(1) ? "质数" : "");
    printf("N=%d %s\n", 2, check(2) ? "质数" : "");
    printf("N=%d %s\n", 3, check(3) ? "质数" : "");
    printf("N=%d %s\n", 4, check(4) ? "质数" : "");
    printf("N=%d %s\n", 7, check(7) ? "质数" : "");
    printf("N=%d %s\n", 9, check(9) ? "质数" : "");
    printf("N=%d %s\n", 13, check(13) ? "质数" : "");
    printf("N=%d %s\n", 17, check(17) ? "质数" : "");
    printf("N=%d %s\n", 100, check(100) ? "质数" : "");
    printf("N=%d %s\n", 23, check(23) ? "质数" : "");
    printf("N=%d %s\n", 1, check(1) ? "质数" : "");
    return 0;
}
