#include <stdio.h>

// 関数も定義できてしまう
#define PRINT_TEMP printf("temp = %d\n", temp)

// マクロ
#define PRINTM(X) printf("%d\n", X)

int main(void)
{
    { 
        int temp = 100;
        PRINT_TEMP;
    }
    {
        int a1 = 100, a2 = 50;
        PRINTM(a1);
        PRINTM(a2);
    }
    return 0;
}