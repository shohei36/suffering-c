#include <stdio.h>

void func(int * pvalue); // プロトタイプ宣言
int getaverage(int data[10]);

int main(void)
{
    { 
        int value = 10;
        printf("&value = %p\n", &value);
        func(&value); // アドレスを渡す
        printf("value = %d\n", value);
    }
    {
        int average, array[10] = { 15, 78, 98, 15, 98, 85, 17, 35, 42, 15 };
        average = getaverage(array);
        printf("%d\n", average);
    }
    // 配列の要素数は無視される
    {
        int average, array[5] = { 15, 98, 98, 17, 42 };
        average = getaverage(array);
        printf("%d\n", average);
    }
    return 0;
}

void func(int* pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100; // 通常変数モードに切り替えて代入
    return;
}

int getaverage(int data[10])
{
    int i, average = 0;
    for (i = 0; i < 10; i++) 
    {
        average += data[i];
    }
    return average / 10;
}