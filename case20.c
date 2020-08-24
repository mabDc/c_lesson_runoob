// 题目：一球从100米高度自由落下，
// 每次落地后反跳回原高度的一半；
// 再落下，求它在第10次落地时，
// 共经过多少米？第10次反弹多高？

#include "common/common.h"
int main(int argc, char const *argv[])
{
    float h = 100, s = h;
    for (int i = 1; i <= 10; i++)
    {
        h = h / 2;
        s = s + 2 * h;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
    return 0;
}
