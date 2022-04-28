#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



/*
int main()
{

    
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);

    printf("[%c%c]", ch1, ch2);

    char str[128];
    scanf("%[^5]s",str);
    puts(str);
    
    //getchar, putchar 함수는 문자 전용 입출력 함수이다.
int ch;
ch = getchar();// 문자 이외의 것도 반환한다.
putchar(ch);
putchar('\n');
return 0;
}

*/
/*
 int main()
{
    char ch;
    int i;
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    //입력이 tiger면 3번 반복하기 때문에 tig까지만 입력이된다.
    //버퍼에는 tiger가 들어가있지만 3번만 사용하기때문에 tig까지만 나온다.
    return 0;
}
//버퍼를 사용하면 좋은점
/*
1. 데이터를 안정적으로 입력 받을 수 있습니다.
버퍼는 운영체제에 따라 크기가 다를 수 있지만 일정 크기의 연속된 저장 공간입니다.
따라서 키보드로 데이터를 입력하면 우선 저수조와 같은 역할을 하는 버퍼에 저장됩니다.
프로그램이 다른 일을 하느라 해당 입력을 즉시 받지 못해도 데이터가 사라지지 않아 안정적입니다.
2. 입력장치와 독립적으로 사용할 수 있습니다.
scanf 함수는 키보드와 직접 연결되지 않고 정해진 크기와 형태를 가진 버퍼에서 입력을 받습니다.
따라서 입력장치가 바뀌더라도 함수를 수정하지 않고 사용할 수 있습니다.
버퍼와 입력 장치를 연결하는 작업은 운영체제가 담당합니다.
*/
//EOF scanf함수의 반환값과 비교하는 값으로 -1대신 EOF를 쓸 수 있습니다.
//End Of File -1대신에 입력의 끝을 의미한다.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num, grade;

    scanf("%d", &num);
    getchar();//이걸로 마지막에 오는 개행버퍼를 버린다.
    grade = getchar();
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int ch=0;
    int res = 0, count=0;
    ch = getchar();
    while (ch !=EOF)
    {
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            res=res > count ? res : count;
            count = 0;
        }
        ch = getchar();
    }
    printf("가장 긴 단어의 길이 : %d", res);
    return 0;
}

*/
/*
int main()
{
    int ch=0;
    int res = 0, count=0;
    ch = getchar();
    while (ch !=EOF)
    {
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            res=res > count ? res : count;
            count = 0;
        }
        ch = getchar();
    }
    printf("가장 긴 단어의 길이 : %d", res);
    return 0;
}
*/
/*
int main()
{
    char ch=0;
    int res = 0, count=0,max=0;
    while (1)
    {
        res = scanf("%c", &ch);
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            max = max > count ? max : count;
            count = 0;
        }
        if (res == EOF)
        {
            break;
        }
    }
    printf("가장 긴 단어의 길이 : %d", max);
    return 0;
}
*/