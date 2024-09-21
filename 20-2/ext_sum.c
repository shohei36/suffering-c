#include "sum.h"
#include <stdio.h>

int extended_sum(int min, int max)
{
    int num;
    num = sum(min, max);
    printf("extended_sum: %d\n", num);
    return num;
}