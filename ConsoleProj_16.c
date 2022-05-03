#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc 사용했으면 free로 반환해줘야한다.
int main()
{
    int arr[4][4];

    char* p = (char*)malloc(sizeof(char) * 16);

    free(p);

    int* pi;
    double* pd;
    printf("%d\n", sizeof(pi));
    pi = (int*)malloc(sizeof(int));
    if (pi == NULL)//꼭해줘야함
    {
        printf("메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("정수형으로 사용 : %lf\n", *pd);

    free(pi);
    free(pd);
    printf("%d\n", sizeof(pi));
    return 0;
}
// malloc은 memeset(pi, 0 ,100);으로 초기화 설정해야함 calloc은 할당과 동시에 초기화해줌
// realloc은 크기를 조절합니다. 이전 메모리 유지후 다음값을 붙여주는식으로 사용