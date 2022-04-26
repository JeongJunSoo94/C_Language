#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//테스트
int abs(int n);
int main()
{
	int n=1;
	printf("종료하려면 0을 입려하시오.\n");
	while (n != 0)
	{
		printf("정수 입력(종료-0) : ");
		scanf("%d", &n);
		abs(n);
	}
	return 0;
}

int abs(int n)
{
	if (n < 0)
	{
		printf("절대값은 : %d\n", n *= -1);
		return n *= -1;
	}
	else
	{
		printf("절대값은 : %d\n", n);
		return n;
	}
}