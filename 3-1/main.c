/*
疑似命令とは、プログラムコードではない命令のことです。
#includeはprintf関数などの準備をする命令なので、
この命令は機械語に翻訳されず、その前段階で処理されます。
*/
#include <stdio.h>

int main(void)
{
    printf("HelloWorld");
    return 0;
}