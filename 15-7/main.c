#include <stdio.h>

int main(void)
{
    { 
        int *data;
        int i, average = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

        data = array; /* ポインタ変数に配列のアドレスを代入 */

        for (i = 0; i < 10; i++)
        {
            average += data[i]; /* 配列みたいに使える */
        }
        
        printf("%d\n", average / 10);
        return 0;
    }
    // ポインタ演算
    // *(ポインタ変数 + 要素番号)
    {
        int *data;
        int i, average = 0, array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };

        data = array; /* ポインタ変数に配列のアドレスを代入 */
        
        for (i = 0; i < 10; i++)
        {
            average += *(data + i); // ポインタ演算
        }

        printf("%d\n", average / 10);
    }
    // ポインタ演算2
    {
        int *data;
        int average = 0, array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };

        for (data = array; data != &array[10]; data++/* ポインタ変数の指す型のサイズ分だけ増加させる */)
        {
            average += *data;
        }

        printf("%d\n", average / 10);
    }
    return 0;
}