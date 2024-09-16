#include <stdio.h>
#include <string.h>

typedef struct
{
    int year;       /* 学年 */
    int clas;       /* クラス */
    int number;     /* 出席番号 */
    char name[64];  /* 名前 */
    double stature; /* 身長 */
    double weight;  /* 体重 */
} student;

int main(void)
{
    student data;
    strcpy(data.name, "mario");
    printf("%s\n", data.name);
}