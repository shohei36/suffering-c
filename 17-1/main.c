#include <stdio.h>

int main(void)
{
    // write file
    { 
        FILE *file;
        file = fopen("test.txt", "w");
        fprintf(file, "100");
        fclose(file);
    }
    // read file
    {
        int i;
        FILE *file;
        file = fopen("test.txt", "r");
        fscanf(file, "%d", &i);
        fclose(file);
        printf("%d\n", i);
    }
    return 0;
}