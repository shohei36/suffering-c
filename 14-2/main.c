#include <stdio.h>

int main(void)
{
    /**
     * 【EOS】
     *  \0は文字列の終わりを表す記号。終端文字とも呼ばれる。
     *  なお、End of String の頭文字をとっている。
     */
    char str[6] = { 'M', 'A', 'R', 'I', 'O', '\0'};
    printf("%s\n", str);

    char str2[] = "hogehoge"; // 文字列リテラル
    printf("%s\n", str2);
    return 0;
}