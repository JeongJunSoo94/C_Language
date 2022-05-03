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
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int str[80] = { 0 };
    int column = 0, row = 0;
    printf("배열의 행과 열을 입력하시오:");
    scanf("%d %d", &column, &row);
    printf("배열에 들어갈 숫자를 %d만큼 입력하시오.\n", column * row);
    int ch = 0;
    int count = 0;
    ch = getchar();
    while (1)//입력
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
    int i = 0, j = 0, k = 0, index = 0;
    int str1[40][40] = { 0 };
    while (i <=row* column)
    {

        if (k % 2 == 0&&k< column-1)
        {
            str1[j][k] = str[index++];
            k++;//오른쪽이동
            i++;
        }
        else if (k== column-1)
        {
            str1[j][k] = str[index++];
            j++;//아래이동
            i++;
        }
        while ((k>0)&&(j<row-1))//대각선
        {
            str1[j][k] = str[index++];
            j++;//아래이동
            k--;//왼쪽이동
            i++;
        }
        if (j<row-1)
        {
            str1[j][k] = str[index++];
            j++;//아래이동
            i++;
        }
        else if (j == row - 1)
        {
            str1[j][k] = str[index++];
            k++;//오른쪽이동
            i++;
        }
        while ((j > 0)&&(k< column - 1))//대각선
        {
            str1[j][k] = str[index++];
            j--;//위이동
            k++;//오른쪽이동
            i++;
        }
    }
    for (j = 0; j < row; j++)
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
/*야구게임
* 세개의 숫자를 입력받아서..
* 숫자가 있지만 그 위치가 틀렸을 때는 볼을 출력
* 숫자와 위치가 맞으며 스트라이크를 출력
* 숫자와 위치가 전부 틀리면 아웃을 축력하는
* 프로그램을 작성하라.
* 무엇이 볼이고 스트라이크 인지는 출력하지 않는다.
* ex> 컴퓨터 2 1 6 <- 보여지면 안됨.
* 1 > 8 3 5 => OUT
* 2 > 6 5 9 => 0S 1B
* 3 > 2 6 4 => 1S 1B
* 4 > 2 1 6 => 정답
* 
* 헤더 Math.h
* rand();사용
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int num,check=0, boll=0, strake=0;
    int match_table[3] = {0};
    int input_table[3] = {0};
    srand(time(NULL));
    for (int i = 0; i < 3;)//랜덤
    {
        num = rand()%10;
        if (num == 0)continue;
        for (int j = 0; j <= i;j++)
        {
            if (match_table[j] == num)
            {
                check += 1;
            }
        }
        if (check==0)
        {
            match_table[i] = num;
            i++;
        }
        check = 0;
    }
    printf("1~9까지 3번 입력하세요:");
    while (1)
    {
        for (int i = 0; i < 3; i++)//입력
        {
            scanf("%d", &input_table[i]);
        }
        for (int i = 0; i < 3; i++)//비교
        {
            if (match_table[i] == input_table[i])
            {
                strake += 1;
            }
            else
            {
                for (int j = 0; j < 3; j++)//비교
                {
                    if (match_table[j] == input_table[i])
                    {
                        boll += 1;
                    }
                }
            }
        }
        check++;
        printf("%d > ", check);
        for (int i = 0; i < 3; i++)//출력
        {
            printf("%d ", input_table[i]);
        }
        if (strake == 3)
        {
            printf("=> 정답");
            break;
        }
        else if (strake > 0 || boll > 0)
        {
            printf("=> %dS %dB\n", strake, boll);
        }
        else
        {
            printf("=> OUT\n");
        }
        strake = 0, boll = 0;
    }

    for (int i = 0; i < 3;i++)//출력
    {
        printf("%d ", match_table[i]);
    }
    return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char* pary[5];
    int i;

    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 11,12,13,14 };
    int ary3[4] = { 21,22,23,24 };
    int *pary[3] = { ary1,ary2,ary3 };
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }
    return 0;
}

*/
/*
 이중포인터를 사용하는 이유는 이중포인터 **ppa에 *pa를 넣어주고 다른곳에서 *pa의 주소값 바꿔줘도 메모리누수가 발생하지 않는다.
 */