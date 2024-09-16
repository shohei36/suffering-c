#include <stdio.h>

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i;

    for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}