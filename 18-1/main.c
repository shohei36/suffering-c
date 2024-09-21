#include <stdio.h>

#define EXCISETAX 0.05 /* ここで定数を宣言 */
#define AUTHOR "Moriguchi Masaken"

int main(void)
{
    { 
        int price;

        printf("Base Price:");
        scanf("%d", &price);
        price = (int)( (1 + EXCISETAX) * price ); /* 定数使用 */
        printf("Price Including Tax:%d\n", price);
    }
    {
        printf("Author:%s\n", AUTHOR);
    }

    return 0;
}