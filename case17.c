// 题目
// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    printf("请输入一些字母：\n");
    while ((c = getchar()) != '\n') // 一行
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
        else
            others++;
    }
    printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letters, digits, spaces, others);
    return 0;
}