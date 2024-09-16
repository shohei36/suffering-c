#include <memory.h>
#include <stdio.h>

int main(void)
{
    int array1[] = { 1, 2, 3, 4, 5 };
    int array2[] = { 6, 7, 8, 9, 10 };
    int i;

    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) 
    {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1)); /* array1 の全要素を array2 にコピー */

    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++)
    {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}