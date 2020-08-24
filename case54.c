
// 题目：取一个整数 a 从右端开始的 4～7 位。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int n;
    printf("请输入整数：\n");
    scanf("%d", &n);
    n >>= 4;
    for (int i = 0; i < 4; i++)
    {
        printf("%d: %d\n", i + 4, n & 0b1);
        n >>= 1;
    }
    return 0;
}
