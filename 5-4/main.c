#include <stdio.h>

int main(void)
{
    int a = 10000, b = 500, c = 3;

    /**
     * %桁数d とすると、その桁数になるよう空白を入れて表示してくれる
     * A縺ｯ 10000 縺ｧ縺吶
     * B縺ｯ   500 縺ｧ縺吶
     * C縺ｯ     3 縺ｧ縺吶
     */
    printf("Aは %5d です。\n", a);
    printf("Bは %5d です。\n", b);
    printf("Cは %5d です。\n", c);

    /**
     * 0を使った表示も可能
     * A縺ｯ 10000 縺ｧ縺吶
     * B縺ｯ 00500 縺ｧ縺吶
     * C縺ｯ 00003 縺ｧ縺吶
     */
    printf("Aは %05d です。\n", a);
    printf("Bは %05d です。\n", b);
    printf("Cは %05d です。\n", c);

    /**
     * 実数値の桁そろえ
     * %全体桁数.小数桁数f
     */
    double pi = 3.14159;
    printf("%6.2f\n", pi);
    printf("123456\n");

    return 0;
}