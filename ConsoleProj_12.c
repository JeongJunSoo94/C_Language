#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
    printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
    printf("ù ��° ���� : %c\n", *"apple");
    printf("�� ��° ���� : %c\n", *("apple" + 1));
    printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

    char* str = "apple";
    str + 1 == "apple" + 1;
    return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
    printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
    printf("ù ��° ���� : %c\n", *"apple");
    printf("�� ��° ���� : %c\n", *("apple" + 1));
    printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

    char* dessert = "apple";
    printf("���� �Ľ��� %s�Դϴ�.\n",dessert);
    printf("���� �Ľ��� %p�Դϴ�.\n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
    printf("���� �Ľ��� %p�Դϴ�.\n", dessert);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char szBuf[12] = {"Test String"};//���۷� �޾Ƽ� ��������
    char* pszData = "Test string";//�ּ���� �����Ұ���
    printf("%d \n", szBuf == pszData);
    //getchar();
    //scanf("%c",c);
    //gets(szBuf);
    //fgets(szBuf,sizeof(szBuf),stdin);

    //puts(pszData);
    //fputs(pszData,stdout);����� �Ұ��ε� �ڿ� ����Ϳ� ����Ұ��̳� ���Ͽ� �Ұ��̳� ��Ʈ��ũ�� �Ұ��̳�
    //f�� ������ ���� ������ ����
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������� gets: ������ �����͸� char �迭�� �����Ѵ�.
int main()
{
    int i = 0;
    char str[20];//��κ� 256���� ��������
    char ch;

    do
    {
        ch = getchar();
        str[i] = ch;
        i++;
    } while (ch !='\n');
    str[--i] = '\0';
    //printf("%s",str);
    return 0;
}
*/
/*//strcpy�� ���ڿ��� �ʱ�ȭ ��Ű�� ���ο� ���ڿ��� �ٲܶ� ����մϴ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    printf("���� ���ڿ� : %s\n", str1);
    strcpy(str1,str2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps1);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, "banana");
    printf("�ٲ� ���ڿ� : %s\n", str1);

    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);//apple tree 5�������� �����ϰڴٴ� ��
    printf("%s\n,",str);
    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strcat �Լ��� �޸𸮸� ħ���� �� �ֽ��ϴ�.
//strcat �Լ��� ����� ���� �迭�� �ʱ�ȭ�ؾ� �մϴ�.
int main()
{
    char str[80] = "straw";
    char d[10] = {0};
    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);
    strncat(d, "piece", 3);
    printf("%s\n", d);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strlen ���ڿ��� ���̸� ��ȯ���ش�.
int main()
{
    char str1[80], str2[80];
    char* resp;

    printf("2���� ���� �̸� �Է� :");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;
    printf("�̸��� �� ������ : %s\n", resp);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strcmp �� ���ڿ��� ���Ͽ� ������ ��ȯ
//strncmp�� �� ���ڿ��� ������ ���Ұ��� �����Ͽ� ��ȯ
int main()
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("������ ���߿� ������ ���� �̸� : ");
    if (strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else
        printf("%s\n", str2);

    if (strncmp(str1, str2,3) == 0)
        printf("����");
    else
        printf("�ٸ���");

    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char* my_strcpy(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);
int my_strlen(char* ps);
int my_strcmp(char* pa, char* pb);
int main()
{
    char str1[80] = "strawberry";

    printf("�ٲٱ� �� ���ڿ� : %s\n", str1);
    my_strcpy(str1,"apple");
    printf("�ٲ� �� ���ڿ� : %s\n", str1);
    printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str1, "kiwi"));
    return 0;
}

char* my_strcpy(char* pd, char *ps)
{
    char* po = pd;

    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
char* my_strcat(char* pd, char* ps)
{
    char* po = pd;
    while (*pd != '\0')
    {
        pd++;
    }
    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
int my_strlen(char* ps)
{
    int cnt = 0;
    while(*ps != '\0');
    {
        cnt++;
        ps++;
    }
    return cnt;
}
int my_strcmp(char* pa, char* pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        pa++;
        pb++;
    }
    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}

*/
/*
* "I am a boy. I am Happy!" ���ڿ��� �ִµ�
* ���� boy �� ��ġ �ּҸ� ����ϰ�
* boy �� girl�� �ٲپ� ����ϵ��� �ϴ� �ڵ带 �ۼ��϶�.
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp ������ �����ؾ���
char* my_strcpy(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);
int my_strlen(char* ps);
int my_strcmp(char* pa, char* pb, int n);
int main()
{
    char str[80] = "I am a boy. I am Happy!";
    char *str1 = "boy";
    char *str2 = "girl";
    char boy[80] = {0};
    int check=0;
    printf("%d\n", my_strlen(str1));
    for (int i = 0; i < my_strlen(str)- my_strlen(str1); i++)
    {
        check = 0;
        for (int j = 0; j < my_strlen(str1); j++)
        {
            if (*(str+i+j) != *(str1 + j))
            {
                break;
            }
            else
            {
                check++;
            }
        }
        if (check == my_strlen(str1))
        {
            printf("boy ��ġ �ּ�: %p\n",*(str + i));
            strncpy(boy, str,i);
            strcat(boy, str2);
            strcat(boy, str+i+ my_strlen(str1));
            strcpy(str,boy);
        }
    }
    printf("�ٲ� ���ڿ� : %s\n", str);

    return 0;
}

char* my_strcpy(char* pd, char *ps)
{
    char* po = pd;

    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
char* my_strcat(char* pd, char* ps)
{
    char* po = pd;
    while (*pd != '\0')
    {
        pd++;
    }
    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
int my_strlen(char* ps)
{
    int cnt = 0;
    while(*ps != '\0')
    {
        cnt++;
        ps++;
    }
    return cnt;
}
int my_strcmp(char* pa, char* pb,int n)
{
    int cnt = 0;
    while ((*pa == *pb) && (*pa != '\0')&&cnt!=n)
    {

        printf("pa����%c\n", *pa);
        printf("pb����%c\n", *pb);
        pa++;
        pb++;
        cnt++;
    }
    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}

*/

/*
* ���� ���� ����
* ���� ���� ��� ���
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp ������ �����ؾ���

// ���ڿ����� ���ڰ��� �ľ�
// ���� ������ŭ ���ڵ� ��
// ���� ��ġ�� ���� �������ϱ�

int compare(int a, int b)
{
    return a >= b ? a : b;
}
int main()
{
    char str[80] = {0};
    int arr[10];
    int cnt=0;
    gets(str);
    while (1)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (*(str + i) == ' ')
            {
                cnt++;
                arr[cnt] = i;
            }
        }
        break;
    }
    printf("%s",str);
    return 0;
}

*/