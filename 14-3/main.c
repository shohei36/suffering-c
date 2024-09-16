#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // atoi
    { 
        char str[] = "145";
        int suuti = atoi(str);
        printf("%d\n", suuti);
    }

    // strcpy
    {
        char str[10];
        strcpy(str, "MARIO");
        printf("%s\n", str);
    }

    // strncpy
    {
        char str1[] = "MARIO", str2[10];
        strncpy(str2, str1, 3);
        str2[3] = '\0';
        printf("%s\n", str2);
    } 

    // strcat
    {
        char str1[12] = "DRAGON";
        char str2[] = "QUEST";
        strcat(str1, str2);
        printf("%s\n", str1);
    }

    // sprintf
    {
        char str[16];
        char str1[12] = "DRAGON";
        char str2[] = "QUEST";
        int i = 3;
        sprintf(str, "%s%s%d\n", str1, str2, i);
        printf(str);
    }

    // scanf
    {
        char str[32];
        scanf("%s", str);
        printf("%s\n", str);
    }

    // count chars
    {
        int i;

        char str[256];
        scanf("%s", str);

        for (i = 0; str[i] != '\0'; i++);

        printf("%d\n", i);
    }

    // strlen 
    {
        int i;

        char str[256];
        scanf("%s", str);

        i = strlen(str);

        printf("%d\n", i);
    }

    // strcmp 
    {
        char str1[256], str2[] = "DRAGONQUEST";

        scanf("%s", str1);

        if (strcmp(str1, str2) == 0)
        {
            printf("同じ\n");
        } else {
            printf("違う\n"); 
        }
    }
    return 0;
}