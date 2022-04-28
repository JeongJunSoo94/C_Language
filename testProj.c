#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp 사용안함 수정해야함

// 문자열에서 문자개수 파악
// 문자 개수만큼 문자들 비교
// 문자 위치에 따라 순서정하기

int compare(int a, int b)
{
    return a >= b ? a : b;
}
int main()
{
    char str[80] = { 0 };
    int arr[100];
    int cnt = 0;
    gets(str);
    while (1)
    {
        for (int i = 0; i < strlen(str); i++)//문자열 자르기
        {
            char* a;
            if (*(str + i) == ' ')
            {
                arr[cnt] = i;
                cnt++;
            }
        }

        break;
    }
    printf("%s", str);
    return 0;
}