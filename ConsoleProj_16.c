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