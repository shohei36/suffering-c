#include <stdio.h>
#include <string.h>

// 構造体タグ
// 構造体タグは、通常、関数より先に宣言する
struct student
{
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void)
{
    { 
        struct student data; // 構造体タグ 構造体変数

        data.year = 10;
        printf("%d\n", data.year);
    }
    // 配列にアクセス
    { 
        struct student data; // 構造体タグ 構造体変数

        strcpy(data.name, "MARIO"); 
        printf("%s\n", data.name);
    }
    // 構造体変数同士で代入
    {
        struct student data1, data2;

        /* data1 へ代入 */
        data1.year = 3;
        data1.clas = 4;
        data1.number = 18;
        strcpy(data1.name, "MARIO");
        data1.stature = 168.2;
        data1.weight = 72.4;

        data2 = data1; /* data1の内容をdata2へコピー */
        strcpy(data2.name, "LUIGE");

        /* data1とdata2の内容を表示 */
        printf("data1.year = %d : data2.year = %d\n", data1.year, data2.year);
        printf("data1.clas = %d : data2.clas = %d\n", data1.clas, data2.clas);
        printf("data1.number = %d : data2.number = %d\n", data1.number, data2.number);
        printf("data1.name = %s : data2.name = %s\n", data1.name, data2.name);
        printf("data1.stature = %f : data2.stature = %f\n", data1.stature, data2.stature);
        printf("data1.weight = %f : data2.weight = %f\n", data1.weight, data2.weight);
    }
    return 0;
}