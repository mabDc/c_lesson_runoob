
// 题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。

#include "common/common.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[20];
    printf("请输入字符串:\n");
    scanf("%s", s);
    printf("字符串有 %d 个字符。\n", strlen(s));
    return 0;
}
