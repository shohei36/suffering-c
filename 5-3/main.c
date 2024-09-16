#include <stdio.h>

int main(void)
{
    /*
      実数 * 整数 は、実数になる
     */
    printf("%f\n", 1.03 * 9);
    /*
      整数表示するとおかしな値にな
    */
    printf("%d\n", 1.03 * 9);
    /*
      型キャストをすると、実数を整数に変換することができる
    */
    printf("%d\n", (int)(1.05 * 360));
    
    return 0;
}