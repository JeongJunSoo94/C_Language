#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a;//전역변수 프로그램 시작과 동시에 할당되어 종료시까지 존재한다. 대부분 헤더에 정의한다. 선언안하면 자동으로 0으로 초기화
//extern int a; 외부에 선언된것을 가져와서 사용할수있다.

void test();
int main()
{
    register int b;//cpu에 있는 레지스터에 할당됨 지역변수만 사용가능 전역변수에 사용 불가능 주소연산 불가능
    for (int i = 0; i < 3; i++)
    {
        test();
    }
    return 0;
}
void test()
{
    static int staticint;//정적 지역 변수 초기화 한번만 발생함 초기화 안하면 자동으로 0으로 초기화됨 
    printf("called %d\n", staticint++);
}

