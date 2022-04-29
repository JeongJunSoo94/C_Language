#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int score[3][4];
    int total;
    double avg;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("4과목의 점수 입력 :");
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 4; j++)
        {
            total += score[i][j];
        }
        avg = total / 4.0;
        printf("총점 : %d, 평균 : %2lf\n", total, avg);
    }
    return 0;
}
//다차원 배열줄때 생략가능한것
//int num[][4] 앞에 생략가능 int num[][2][3] 맨앞만 가능하다
/*
* int row sizeof(num_score)/sizeof(num_score2[0]) 열의 개수가 나온다.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int tiger[20] = "tiger";
    char dog[20] = "dog";
    char animal1[2][20] = { {'d','o','g','\0'},{'t'}};
    char animal[2][20] = {"dog","tiger"};

    return 0;
}
*/

/*
* int main()
{
    char mark[5][5] = { 0 };
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                mark[i][j] = 'X';
                printf("%c", mark[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char mark[5][5] = { 0 };
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j||4-j==i)
            {
                mark[i][j] = 'X';
                printf("%c", mark[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
* 행렬 전환 다음과 같은 A 행렬 B행렬과 같은 행태가 되도록 하라
* A               B
* 1 2 3 4         5 1
* 5 6 7 8         6 2
*                 7 3
*                 8 4
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
* 행렬 전환 다음과 같은 A 행렬 B행렬과 같은 행태가 되도록 하라
* A               B
* 1 2 3 4         5 1
* 5 6 7 8         6 2
*                 7 3
*                 8 4
*/
/*
void print()
{

}
int main()
{
    int A[2][4] = { {1,2,3,4},{5,6,7,8} };
    int B[4][2] = { {5,1},{6,2},{7,3},{8,4} };


    int cul = sizeof(A[0]) / sizeof(A[0][0]);
    int row = sizeof(A) / sizeof(A[0]);

    for (int j = 0; j < cul; j++)
    {
        for (int i = row - 1; i >= 0; i--)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    int A1[3][3] = { {1,2,3},{4,5,6,}, {7,8,9} };

    cul = sizeof(A1[0]) / sizeof(A1[0][0]);
    row = sizeof(A1) / sizeof(A1[0]);
    for (int j = 0; j < cul; j++)
    {
        for (int i = row - 1; i >= 0; i--)
        {
            printf("%d", A1[i][j]);
        }
        printf("\n");
    }
    int str[80] = { 0 };
    printf("배열의 행과 열을 입력하시오.");
    scanf("%d %d", &cul, &row);
    printf("배열에 들어갈 숫자를 %d만큼 입력하시오.:", cul * row);
    int ch = 0;
    int res = 0, count = 0;
    ch = getchar();
    while (1)
    {
        scanf("%d", &ch);
        if (ch == ' ')
        {

        }
        else if (ch >= 0 && ch <= 9)
        {
            str[count] = ch;
            count++;
        }
        if (count == cul * row)
        {
            break;
        }
    }
    for (int j = 0; j < count; j++)
    {
        printf("%d", str[j]);
    }
    printf("\n");
    //일반 1차원 배열을 2차원으로 만들때 사용하는 배열 cul *j+i
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < cul; i++)
        {
            printf("%d", str[cul * j + i]);
        }
        printf("\n");
    }
    //
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < cul; i++)
        {
            printf("%d", str[cul * j + i]);
        }
        printf("\n");
    }
    return 0;
}
*/


/*
* 배열에 숫자를 다음과 같은 방법으로 채워지도록
* 프로그램 작성하라
* 시계방향으로 mxn 의 2차원 배열에 숫자가 채워지도록 한다
* ex > 
*       1 2 3
*       8 9 4
*       7 6 5
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int A1[3][3] = { {1,2,3},{4,5,6,}, {7,8,9} };
    int A2[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16} };

    int A[40][40] = { 0 };

    int value = 1;
    int row = 0, column = -1;
    int inc = 1;
    int n = 4;
    while (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            column += inc;
            A2[row][column] = value;
            value++;
        }
        n--;
        if (n == 0)break;
        for (int i = 0; i < n; i++)
        {
            row += inc;
            A2[row][column] = value;
            value++;
        }
        inc *= -1;
    }

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("%3d", A2[j][i]);
        }
        printf("\n");
    }

    int str[80] = { 0 };
    printf("배열의 행과 열을 입력하시오.");
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
    //일반 1차원 배열을 2차원으로 만들때 사용하는 배열 식 column *j+i  row = column *j column = i 

    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < column; i++)
        {
            printf("%d", str[column *j+i]);
        }
        printf("\n");
    }
    //거꾸로
    for (int j = 0; j < row; j++)
    {
        for (int i = column-1; i >= 0; i--)
        {
            printf("%d", str[column * j + i]);
        }
        printf("\n");
    }
    //
    int str1[80] = { 0 };
    int m = row;
    value = 0;
    int row1 = 0, column1 = -1;
    int indexdiretion = 1;
    //배열에 오른쪽회전

    /*
    * while (m > 0)
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
    
    //배열에 왼쪽회전
    row1 = -1, column1 = 0;
    while (m > 0)
    {
        for (int i = 0; i < m; i++)
        {
            row1 += indexdiretion;
            str1[column * row1 + column1] = str[value];
            value++;
        }
        m--;
        if (m == 0)break;
        for (int i = 0; i < m; i++)
        {
            column1 += indexdiretion;
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

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int column, row;
    int str[40][40] = { 0 };
    printf("배열의 행과 열을 입력하시오.");
    scanf("%d %d", &column, &row);
    printf("배열에 들어갈 숫자를 %d만큼 입력하시오.\n", column * row);
    int ch = 0;
    int i = 0, j = 0;
    int count = 0;
    while (1)
    {
        scanf("%d", &ch);
        if (ch == ' ')
        {

        }
        else if (ch >= 0 && ch <= 99)
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
    int m = row, n = column;
    int value = 1;
    int row1 = 0, column1 = -1;
    int indexdiretion = 1;
    while (m + n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            column1 += indexdiretion;
            str1[row1][column1] = value;
            value++;
        }
        m--;
        for (int i = 0; i < m; i++)
        {
            row1 += indexdiretion;
            str1[row1][column1] = value;
            value++;
        }
        n--;
        indexdiretion *= -1;
    }
    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < column; i++)
        {
            printf("%3d", str1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
* 다음과 같이 배열에 숫자가 채워지도록 프로그램을
* 작성하라 NXN의 경우로만 작성할것
* ex>
*       3*3
*    1 2 6
*    3 5 7
*    4 8 9
*/