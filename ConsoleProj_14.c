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
        printf("4������ ���� �Է� :");
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
        printf("���� : %d, ��� : %2lf\n", total, avg);
    }
    return 0;
}
//������ �迭�ٶ� ���������Ѱ�
//int num[][4] �տ� �������� int num[][2][3] �Ǿո� �����ϴ�
/*
* int row sizeof(num_score)/sizeof(num_score2[0]) ���� ������ ���´�.
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
* ��� ��ȯ ������ ���� A ��� B��İ� ���� ���°� �ǵ��� �϶�
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
* ��� ��ȯ ������ ���� A ��� B��İ� ���� ���°� �ǵ��� �϶�
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
    printf("�迭�� ��� ���� �Է��Ͻÿ�.");
    scanf("%d %d", &cul, &row);
    printf("�迭�� �� ���ڸ� %d��ŭ �Է��Ͻÿ�.:", cul * row);
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
    //�Ϲ� 1���� �迭�� 2�������� ���鶧 ����ϴ� �迭 cul *j+i
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
* �迭�� ���ڸ� ������ ���� ������� ä��������
* ���α׷� �ۼ��϶�
* �ð�������� mxn �� 2���� �迭�� ���ڰ� ä�������� �Ѵ�
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
    printf("�迭�� ��� ���� �Է��Ͻÿ�.");
    scanf("%d %d", &column, &row);
    printf("�迭�� �� ���ڸ� %d��ŭ �Է��Ͻÿ�.\n", column * row);
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
    //�Ϲ� 1���� �迭�� 2�������� ���鶧 ����ϴ� �迭 �� column *j+i  row = column *j column = i 

    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < column; i++)
        {
            printf("%d", str[column *j+i]);
        }
        printf("\n");
    }
    //�Ųٷ�
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
    //�迭�� ������ȸ��

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
    
    //�迭�� ����ȸ��
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
    printf("�迭�� ��� ���� �Է��Ͻÿ�.");
    scanf("%d %d", &column, &row);
    printf("�迭�� �� ���ڸ� %d��ŭ �Է��Ͻÿ�.\n", column * row);
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
* ������ ���� �迭�� ���ڰ� ä�������� ���α׷���
* �ۼ��϶� NXN�� ���θ� �ۼ��Ұ�
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
    printf("�迭�� ��� ���� �Է��Ͻÿ�:");
    scanf("%d %d", &column, &row);
    printf("�迭�� �� ���ڸ� %d��ŭ �Է��Ͻÿ�.\n", column * row);
    int ch = 0;
    int count = 0;
    ch = getchar();
    while (1)//�Է�
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
            k++;//�������̵�
            i++;
        }
        else if (k== column-1)
        {
            str1[j][k] = str[index++];
            j++;//�Ʒ��̵�
            i++;
        }
        while ((k>0)&&(j<row-1))//�밢��
        {
            str1[j][k] = str[index++];
            j++;//�Ʒ��̵�
            k--;//�����̵�
            i++;
        }
        if (j<row-1)
        {
            str1[j][k] = str[index++];
            j++;//�Ʒ��̵�
            i++;
        }
        else if (j == row - 1)
        {
            str1[j][k] = str[index++];
            k++;//�������̵�
            i++;
        }
        while ((j > 0)&&(k< column - 1))//�밢��
        {
            str1[j][k] = str[index++];
            j--;//���̵�
            k++;//�������̵�
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
/*�߱�����
* ������ ���ڸ� �Է¹޾Ƽ�..
* ���ڰ� ������ �� ��ġ�� Ʋ���� ���� ���� ���
* ���ڿ� ��ġ�� ������ ��Ʈ����ũ�� ���
* ���ڿ� ��ġ�� ���� Ʋ���� �ƿ��� ����ϴ�
* ���α׷��� �ۼ��϶�.
* ������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.
* ex> ��ǻ�� 2 1 6 <- �������� �ȵ�.
* 1 > 8 3 5 => OUT
* 2 > 6 5 9 => 0S 1B
* 3 > 2 6 4 => 1S 1B
* 4 > 2 1 6 => ����
* 
* ��� Math.h
* rand();���
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
    for (int i = 0; i < 3;)//����
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
    printf("1~9���� 3�� �Է��ϼ���:");
    while (1)
    {
        for (int i = 0; i < 3; i++)//�Է�
        {
            scanf("%d", &input_table[i]);
        }
        for (int i = 0; i < 3; i++)//��
        {
            if (match_table[i] == input_table[i])
            {
                strake += 1;
            }
            else
            {
                for (int j = 0; j < 3; j++)//��
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
        for (int i = 0; i < 3; i++)//���
        {
            printf("%d ", input_table[i]);
        }
        if (strake == 3)
        {
            printf("=> ����");
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

    for (int i = 0; i < 3;i++)//���
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
 ���������͸� ����ϴ� ������ ���������� **ppa�� *pa�� �־��ְ� �ٸ������� *pa�� �ּҰ� �ٲ��൵ �޸𸮴����� �߻����� �ʴ´�.
 */