
// 题目：求100之内的素数。

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
    for (int i = 0; i < 100; i++)
    {
        if (check(i))
        {
            printf("%d\n", i);
        }
    }

    printf("\n");
    return 0;
}
