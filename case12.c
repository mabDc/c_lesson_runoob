// 题目：判断101到200之间的素数。

#include "common/common.h"

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n / 2; i++)
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
    for (int i = 101; i < 200; i++)
    {
        if (check(i))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
