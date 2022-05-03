#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char temp[80];
    char* str[3] = { 0 };
    int i = 0,count=0;

    while (1)
    {
        printf("문자열을 입력하세요 :");
        gets(temp);
        if (strcmp(temp, "Quit") == 0)break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        if (count == i)
        {
            str[i] = (char*)realloc(strlen(temp) + 1);
        }
        if (i > 0)
        {
            strcat(str[i], str[i - 1]);
        }

        i++;
    }

    for (i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }

    return 0;
}
