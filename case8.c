// 题目
// 输出9*9口诀。

#include "common/common.h"

void print(int a, int b)
{
    printf("%dx%d=%d ", a, b, a * b);
}

int main(int argc, char const *argv[])
{
    int c = 9;
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            print(i, j);
        }
        print_new_line();
    }
    return 0;
}