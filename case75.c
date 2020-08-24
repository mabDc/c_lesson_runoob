
// 题目：输入一个整数，并将其反转后输出。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int n, reversedNumber = 0;
    printf("输入一个整数: ");
    scanf("%d", &n);
    while (n != 0)
    {
        reversedNumber = reversedNumber * 10 + n % 10;
        n /= 10;
    }
    printf("反转后的整数: %d\n", reversedNumber);
    return 0;
}
