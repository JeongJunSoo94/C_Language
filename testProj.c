#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* �迭�� ���ڸ� ������ ���� ������� ä��������
* ���α׷� �ۼ��϶�
* �ð�������� mxm �� 2���� �迭�� ���ڰ� ä�������� �Ѵ�
* ex >
*       1 2 3
*       8 9 4
*       7 6 5
*/
int main()
{
    int column, row;
    int str[40][40] = {0};
    printf("�迭�� ��� ���� �Է��Ͻÿ�.");
    scanf("%d %d", &column, &row);
    printf("�迭�� �� ���ڸ� %d��ŭ �Է��Ͻÿ�.\n", column * row);
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
