
// 题目：填空练习（指向指针的指针）。

#include "common/common.h"

int main(int argc, char const *argv[])
{
    char *s[] = {"hello", "world", "!"};
    printf("%s %s %s\n", s[0], s[1], s[2]);
    return 0;
}
