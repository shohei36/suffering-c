#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc > 1) {
        printf("%s\n", argv[0]);
    }

    fflush(stdin);
    getchar();

    return 0;
}