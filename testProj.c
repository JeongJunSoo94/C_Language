#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* 배열에 숫자를 다음과 같은 방법으로 채워지도록
* 프로그램 작성하라
* 시계방향으로 mxm 의 2차원 배열에 숫자가 채워지도록 한다
* ex >
*       1 2 3
*       8 9 4
*       7 6 5
*/
int main()
{
    int column, row;
    int str[40][40] = {0};
    printf("배열의 행과 열을 입력하시오.");
    scanf("%d %d", &column, &row);
    printf("배열에 들어갈 숫자를 %d만큼 입력하시오.\n", column * row);
    int ch = 0;
    int i=0,j=0;
    int count = 0;
    while (1)
    {
        scanf("%d",&ch);
        if (ch == ' ')
        {

        }
        else if(ch >=0&& ch <=99)
        {
            str[i][j++] = ch;
            if (j == column)
            {
                j = 0;
                i++;
            }
            
            count++;
        }
        if (count == column * row)
        {
            break;
        }
    }
    printf("\n");
    char str1[40][40] = { 0 };
    int m=row,n=column;
    int value = 1;
    int row1 = 0, column1 = 0;
    int left = 0, right=0;
    count = 0;
    int num=1;
    int indexdiretion = 0;
    
    for (int i = 0; i < m*m+1; i++)
    {
        str1[left][right] == value;
        if (right % 2 == 0)
        {
            right++;
        }

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
