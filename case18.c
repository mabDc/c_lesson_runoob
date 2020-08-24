// 题目：求s=a+aa+aaa+aaaa+aa...a的
// 其中a是一个数字。
// 例如2+22+222+2222+22222(此时共有5个数相加)
// 几个数相加有键盘控制。
#include "common/common.h"

int main(int argc, char const *argv[])
{
    int a, n;
    printf("请输入 a 和 n：\n");
    scanf("%d%d", &a, &n);
    
    int s = a;
    printf("%d", a);
    for (int i = 1, t = a; i < n; i++)
    {
        printf("+%d", t);
        t = t * 10 + a;
        s += t;
    }
    printf("=%d\n", s);
    return 0;
}