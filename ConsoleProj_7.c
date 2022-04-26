#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//함수

/*
void GuGu(void);
int Add(int a, int b);
void Minus(int a, int b);
void main(void)
{
	GuGu();
	int c = Add(3, 4);
	printf("%d\n",c);
	return 0;
}
void GuGu(void)
{
	printf(" ");
}
int Add(int a, int b)
{
	return a + b;
}
void Minus(int a, int b)
{

}
*/
void print_char(char ch, int count);

void fruit(void);

void main(void)
{
	char ch = 'a';
	int count = 2;
	print_char(ch, count);
	fruit(10);
	return 0;
}
void print_char(char ch, int count)
{
	int i;
	if (count > 10) return;
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}
/* 무한
void fruit(void)
{
	printf("apple\n");
	fruit();
}
*/
void fruit(int a)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		--a;
	}
	printf("apple\n");
	fruit(a);
}
/*
* int prime_number(int n);
void main()
{
	printf("2 이상의 정수를 입력하세요 : ");
	int n;
	scanf("%d",&n);
	int k=5;
	for (int i = 2; i <= n; ++i)
	{
		if (prime_number(i))
		{
			printf("%3d",i);
			--k;
		}
		if (k == 0)
		{
			printf("\n");
			k = 5;
		}
	}
	return 0;
}
int prime_number(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if ((n % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}
*/
/*
* void prime_number(int n);
void main()
{
	printf("2 이상의 정수를 입력하세요 : ");
	int n;
	scanf("%d",&n);
	int k=5;
	prime_number(n);
	return 0;
}
void prime_number(int n)
{
	int k=1;
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 2; j < n; ++j)
		{
			if ((n % j) == 0)
			{
				k = 0;
				break;
			}
		}
		if (k==1)
		{
			printf("%3d", i);
		}
		k = 1;
	}
}
*/


/*
* 다음 식을 만족하는 모든 A 와 Z를 구하는 프로그램을 작성하라
*
*   A Z
*+  Z A
* ------
*   9 9
*/

/*206 도전 실전 예제 재귀 호출 이용해서
* 
int rec_func(int n);
int main()
{
	int n;
	scanf("%d", &n);
	int sum=rec_func(n);
	printf("%d",sum);
	return 0;
}

int rec_func(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + rec_func(n-1);
	}
}
* 
*/
/*
* 입력받는 값의 절대값을 수하는 함수 abs() 를 구현하라.
* ex>
* 종료하려면 0을 입력하시오.
* 정수 입력(종료-0) : -34
* 절대값은 : 34
*/
/*
* 
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
*/
/*
* 달팽이 한마리가  한달이 지나면 어른이 되고
* 다시 한달이 지나면 새끼를 낳는다.
* 새로 태어난 달팽이 역시 한달이 지나면
* 어른이 되고 , 다시 한달 후 부터 새끼를 낳는다고 할때
* 달팽이가 매달 새끼를 낳으면 1년후 전체 달팽이의 수는
* 얼마인지 알수 있도록 프로그램을 작성하라.
* (단, 가정 1 달팽이는 자웅동체이다.
*      가정 2 달팽이가  1년만에 죽을리 없다.)
*/

/*
* 
int snail_create(int n);
int main()
{
	for (int i = 0; i < 13; i++)
	{
		printf("%d개월: %d마리\n",i, snail_create(i));
	}
	return 0;
}

int snail_create(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return snail_create(n - 2) + snail_create(n - 1);
	}
}

*/

/*
* 사칙연산을 위한 프로그램을 작성하라.
* 출력형태는 다음 예와 같다.
* ex >
* 원하는 연산을 선택하시오.
* (1:덧셈, 2:뺄셈, 3:곱셈, 4:나눗셈, 0:종료)
* 1
* 두 정수를 입력하시오. :
* 결과는 00 입니다.
*/