
// 题目：学习static定义静态变量的用法。

#include "common/common.h"
void fun()
{
    int i = 0;
    static int static_i = 0;
    printf("i=%d\n", i);
    printf("static_i=%d\n", static_i);
    i++;
    static_i++;
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; i++)
    {
        fun();
    }
    return 0;
}
