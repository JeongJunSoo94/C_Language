#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Output1(int a)
{
    printf("%d\n", a);
}
void Output2(int* pa)//���� ����� call by value
{
    printf("%d\n", *pa);
    *pa = 11;
    printf("%d\n", *pa);
}
void Output3(int** ppa)
{
    printf("%d\n", **ppa);
}
int main()
{
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;
    printf("%d %d %d\n", a, *pa, **ppa);

    Output1(a);
    Output1(*pa);

    printf("------------------------------\n");
    printf("���� ������    &����       *����      **����\n");
    printf("------------------------------\n");
    printf("a%10d%10u\n", a, &a);
    printf("pi%10u%10u%10d\n", pa, &pa, *pa);
    printf("ppi%10u%10u%10u%10u\n", ppa, &ppa, *ppa, **ppa);
    printf("------------------------------\n");
    return 0;
}

/*
* 
* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap_ptr(char **ppa, char **ppb)
{
    char* pt;
    pt = *ppa;
    *ppa = *ppb;
    *ppb = pt;
}
int main()
{
    int* pa ="success";
    int* pb ="failure";
    printf("pa -> %s,pb-> %s\n",pa ,pb);
    printf("pa -> %10u,pb-> %10u\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s,pb-> %s\n", pa, pb);
    printf("pa -> %10u,pb-> %10u\n", pa, pb);
    return 0;
}

*/

/*
* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_str(char **pps, int cnt)
{
    int i;
    for (i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}
int main()
{
    char* ptr_ar[] = {"eagle","tiger","lion","squirrel"};
    int count;

    count = sizeof(ptr_ar) / sizeof(ptr_ar[0]);
    print_str(ptr_ar,count);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_ary(int (*pa)[4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("%d",pa[i]);
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int ary[3][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };
    print_ary(ary);
    return 0;
}
*/
/*
* ������ ���� �ΰ��� int�� ������ ������ ���̰�
* 5�� int �� �迭�� �����Ѵ�.
* int *maxPtr;
* int *minPtr;
* int arr[5];
* MaxAndMin �̶� �Լ��� ���� �ϰ� �̸� ȣ���Ͽ�
* �� �迭�� �� �����͸� ������ �����Ѵ�.
* �� �Լ��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPre����
* ���� ū ���� ����� �迭 ����� �ּҰ���,
* minPtr���� ���� ���� �迭 ����� �ּҰ��� ����Ǿ�� �Ѵ�.
* (���� �����͸� �Ű������� Ȱ���Ұ�)
* arr �ּҰ��� , �ִ�, �ּ��� �ּҰ�
* maxPtr, minPtr�� ���� �ּҿ� ����� ���� ����϶�.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void MaxAndMin(int arr[], int** ptr1, int** ptr2)
{
    *ptr1 = &arr[0];
    *ptr2 = &arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (**ptr1 < arr[i])
        {
            *ptr1 = &arr[i];
        }
        if (**ptr2 > arr[i])
        {
            *ptr2 = &arr[i];
        }
    }
}

int main()
{
    int* maxPtr;
    int* minPtr;
    int arr[5];
    printf("���� 5�� �Է��Ͻÿ�:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    MaxAndMin(arr, &maxPtr, &minPtr);
    printf("arr%10u %10u %10u\n",&arr, maxPtr, minPtr);
    printf("maxPtr : %d minPtr : %d\n", *maxPtr, *minPtr);
    return 0;
}

*/

/*
* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int a, int b)
{
    return (a+b);
}
int minus(int a, int b)
{
    return (a - b);
}
int main()
{
    int (*fp)(int, int);
    int res;

    fp = sum;
    fp = minus;
    res = fp(10, 20);
    printf("result: %d\n", res);
    return 0;
}

* 
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int a, int b)
{
    return (a+b);
}
int mul(int a, int b)
{
    return (a * b);
}
int max(int a, int b)
{
    return a > b?a:b;
}
void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    res = fp(a,b);
    printf("�ᱣ���� : %d\n", res);
}
int main()
{
    int sel;
    printf("1 �� ��������\n");
    printf("2 �� �����ǰ�\n");
    printf("3 �� ������ū��\n");
    scanf("%d", &sel);
    switch (sel)
    {
    case 1:func(sum); break;
    case 2:func(mul); break;
    case 3:func(max); break;
    }
    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
    int a = 10;
    double b = 3.5;
    void* vp;

    vp = &a;
    printf("a : %d \n", *(int*)vp);
    vp = &b;
    printf("b : %.1lf\n",*(double *)vp);

    return 0;
}

*/