#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc ��������� free�� ��ȯ������Ѵ�.
int main()
{
    int arr[4][4];

    char* p = (char*)malloc(sizeof(char) * 16);

    free(p);

    int* pi;
    double* pd;
    printf("%d\n", sizeof(pi));
    pi = (int*)malloc(sizeof(int));
    if (pi == NULL)//���������
    {
        printf("�޸𸮰� �����մϴ�.\n");
        exit(1);
    }
    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("���������� ��� : %d\n", *pi);
    printf("���������� ��� : %lf\n", *pd);

    free(pi);
    free(pd);
    printf("%d\n", sizeof(pi));
    return 0;
}
// malloc�� memeset(pi, 0 ,100);���� �ʱ�ȭ �����ؾ��� calloc�� �Ҵ�� ���ÿ� �ʱ�ȭ����
// realloc�� ũ�⸦ �����մϴ�. ���� �޸� ������ �������� �ٿ��ִ½����� ���
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc ��������� free�� ��ȯ������Ѵ�.
int main()
{
    int* pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int));
    while (1)
    {
        printf("����� �Է��ϼ��� =>");
        scanf("%d",&num);
        if (num <= 0)break;
        if (count == size)
        {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i < count; i++)
    {
        printf("%5d",pi[i]);
    }
    free(pi);
    return 0;
}

*/
//memcpy(pi2,pi,sizeof(int)*100); �޸𸮸� �����ͼ� ���縦 �մϴ�. ���������͸� �����Ͽ� ����Ѵ�.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc ��������� free�� ��ȯ������Ѵ�.
int main()
{
    char temp[80];
    char* str[3];
    int i;

    for (i =0;i<3;i++)
    {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i],temp);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n",str[i]);
    }
    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }
    return 0;
}

*/

/*���� �� ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}

int main()
{
    char temp[80];
    char* str[21] = { 0 };
    int i = 0;

    while (i < 20)
    {
        printf("���ڿ��� �Է��ϼ��� :");
        gets(temp);
        if (strcmp(temp, "end") == 0)break;
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
        i++;
    }
    print_str(str);

    for (i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }

    return 0;
}

*/

/*
* ����ڷκ��� ���ڿ��� �Է� �޾Ƽ� �ܾ ������ ����ϴ� ���α׷��� �ۼ��϶�.
* �Է� > I amd happy
* ��� > happy am I
*/

//realloc�� �õ������� �Ҵ� ���� �����ϰ� free�� �Ҵ��� Ǯ�����