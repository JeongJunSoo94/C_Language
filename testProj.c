#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    gets(s);
    int a[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
        switch (s[i])
        {
        case '0':
        {
            printf("00add\n");
            a[0] += 1;
            break;
        }
        case '1':
        {
            a[1] += 1;
            break;
        }
        case '2':
        {
            a[2] += 1;
            break;
        }
        case '3':
        {
            a[3] += 1;
            break;
        }
        case '4':
        {
            a[4] += 1;
            break;
        }
        case '5':
        {
            a[5] += 1;
            break;
        }
        case '6':
        {
            a[6] += 1;
            break;
        }
        case '7':
        {
            a[7] += 1;
            break;
        }
        case '8':
        {
            a[8] += 1;
            break;
        }
        case '9':
        {
            a[9] += 1;
            break;
        }
        default:
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}