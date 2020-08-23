#include <stdio.h>

void print_new_line()
{
    printf("\n");
}

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}