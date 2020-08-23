// 题目
// 输入三个整数x,y,z，请把这三个数由小到大输出。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("input a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        swap_int(&a, &b);
    }
    if (a > c)
    {
        swap_int(&a, &c);
    }
    if (b > c)
    {
        swap_int(&b, &c);
    }
    printf("%d < %d < %d", a, b, c);
    return 0;
}
