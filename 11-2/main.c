#include <stdio.h>

/**
 * プロトタイプ宣言
 * stdio.h などのheaderファイルに定義されることがおおい
 */
int sum(int);

int main(void)
{
    sum(50);
    return 0;
}

int sum(int max)
{
    printf("%d\n", (1 + max) * max /2);
    return 0;
}