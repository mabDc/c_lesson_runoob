
// 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

#include "common/common.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "www.runoob.com";
    printf("%s\n", s);
    for (int i = 0, len = strlen(s), c = len / 2 - 1; i <= c; i++)
    {
        char c = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = c;
    }
    printf("%s\n", s);
    return 0;
}
