#include <stdio.h>

int main(void)
{
    int data;
    /**
     * scanf(" 入力変換指定子", &変数名);
     */
    printf("int: ");
    scanf("%d", &data);
    printf("%d\n", data);

    /* 実数もいける */
    double data2;
    printf("float: ");
    scanf("%lf", &data2);
    printf("%f\n", data2);

    /* 複数入力 */
    int v1, v2;
    printf("multi: ");
    scanf("%d%d", &v1, &v2);
    printf("%d, %d\n", v1, v2);
    return 0;
}