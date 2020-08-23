// 题目：输入某年某月某日，判断这一天是这一年的第几天？

// https://baike.baidu.com/item/闰年/27098
// 普通闰年:公历年份是4的倍数的，且不是100的倍数，为普通闰年。
// （如2004、2020年就是闰年）；
// 世纪闰年:公历年份是整百数的，必须是400的倍数才是世纪闰年
// （如1900年不是世纪闰年，2000年是世纪闰年）；

#include "common/common.h"

bool isleapyear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    return false;
}

int daysonemonth(int month)
{
    int days;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 2:
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 0;
        break;
    }
    return days;
}

int main(int argc, char const *argv[])
{
    int year, month, day;
    printf("input year, month, day\n");
    scanf("%d%d%d", &year, &month, &day);
    for (int i = 1; i < month; i++)
    {
        day += daysonemonth(i);
    }
    if (isleapyear(year))
    {
        day += 1;
    }
    printf("day: %d\n", day);
    return 0;
}
