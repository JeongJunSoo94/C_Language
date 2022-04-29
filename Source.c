#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int str[80] = { 0 };
    int column=0 ,row=0;
    printf("배열의 행과 열을 입력하시오:");
    scanf("%d %d", &column, &row);
    printf("배열에 들어갈 숫자를 %d만큼 입력하시오.\n", column * row);
    int ch = 0;
    int res = 0, count = 0;
    ch = getchar();
    while (1)
    {
        scanf("%d", &ch);
        if (ch == ' ')
        {

        }
        else if (ch >= 0 && ch <= 99)
        {
            str[count] = ch;
            count++;
        }
        if (count == column * row)
        {
            break;
        }
    }
    printf("\n");
    int str1[80] = { 0 };
    int m = row;
    int value = 0;
    int row1 = 0, column1 = -1;
    int indexdiretion = 1;
    //배열에 오른쪽회전
    while (m > 0)
    {
        for (int i = 0; i < m; i++)
        {
            column1 += indexdiretion;
            str1[column * row1 + column1] = str[value];
            value++;
        }
        m--;
        if (m == 0)break;
        for (int i = 0; i < m; i++)
        {
            row1 += indexdiretion;
            str1[column * row1 + column1] = str[value];
            value++;
        }
        indexdiretion *= -1;
    }
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < column; i++)
        {
            printf("%3d", str1[column * j + i]);
        }
        printf("\n");
    }
    return 0;
}