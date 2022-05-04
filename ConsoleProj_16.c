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
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc 사용했으면 free로 반환해줘야한다.
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
        printf("양수만 입력하세요 =>");
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
//memcpy(pi2,pi,sizeof(int)*100); 메모리를 가져와서 복사를 합니다. 원본데이터를 참조하여 사용한다.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//malloc 사용했으면 free로 반환해줘야한다.
int main()
{
    char temp[80];
    char* str[3];
    int i;

    for (i =0;i<3;i++)
    {
        printf("문자열을 입력하세요 : ");
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

/*아직 덜 적음
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
        printf("문자열을 입력하세요 :");
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
* 사용자로부터 문자열을 입력 받아서 단어를 역으로 출력하는 프로그램을 작성하라.
* 입력 > I amd happy
* 출력 > happy am I
*/

//realloc을 시도했으면 할당 전에 저장하고 free로 할당을 풀어버림