#include <stdio.h>

int main(void)
{
    { 
        int buf = 100;
        FILE *file;
        file = fopen("test.dat", "wb");
        // fwrite(書き込む変数アドレス, 1項目のサイズ, 項目数, ファイルポインタ);
        fwrite(&buf, sizeof(buf), 1, file);
        fclose(file);
    }
    // 配列
    {
        int buf[] = {10, 100, 1000, 10000};
        FILE *file;
        file = fopen("test2.dat", "wb");
        fwrite(buf, sizeof(buf), 1, file);
        fclose(file);
    }
    // read
    {
        int buf;
        FILE *file;
        file = fopen("test.dat", "rb");
        // fread(読み込む変数のポインタ, 1項目のサイズ, 項目数, ファイルポインタ);
        fread(&buf, sizeof(buf), 1, file);
        fclose(file);

        printf("%d\n", buf);

    }
}