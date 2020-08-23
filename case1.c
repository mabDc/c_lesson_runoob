/**
 * 题目：
 * 有1、2、3、4个数字，
 * 能组成多少个互不相同且无重复数字的三位数？
 * 都是多少？
 **/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 个位 十位 百位
    int a, b, c;
    int count = 0;
    // 取值范围1-4
    int num[] = {1, 2, 3, 4};
    size_t size = sizeof(num) / sizeof(num[0]);
    printf("n: number\n");
    for (size_t i = 0; i < size; i++)
    {
        a = num[i];
        for (size_t j = 0; j < size; j++)
        {
            b = num[j];
            for (size_t k = 0; k < size; k++)
            {
                c = num[k];
                if (a != b && b != c && c != a)
                {
                    count++;
                    printf("%d: %d%d%d\n", count, a, b, c);
                }
            }
        }
    }
    printf("all count: %d\n", count);
    return 0;
}
