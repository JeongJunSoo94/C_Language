#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//반복문
void main()
{
	/*
	int a = 1;
	while (a< 10)
	{
		a = a * 2;
	}
	printf("a:%d", a);

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d",&a);
		if (a <= 0)
			break;
		if (a % 2)
			printf("홀수\n");
		else
			printf("짝수\n");
	}
	*/
	/*
	int a = 1;
	for (int i = 0; i < 3; i++)
	{
		printf("i: %d \n", i);
	}
	for (int i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);
	*/
	/*
	* 어떤 자연수를 입력받아 팩토리얼을 구하는 프로그램을 작성하라
	*/

	/*
	* int factorial = 1;
	scanf("%d", &a);
	for (int i = a; i > 0; i--)
	{
		if (i == a)
		{
			printf("%d", i);
		}
		else
		{
			printf(" * %d", i);
		}
		factorial *= i;
	}
	printf("\nfactorial : %d\n", factorial);
	* factorial = 1;
	for (int i = 1; i <= a; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" * %d", i);
		}
		factorial *= i;
	}

	printf("\nfactorial : %d\n", factorial);
	*
	*/
	/*
	* 두 수를 입력받아 두 수 사이에 존재하는 정수의 합을 구하는 프로그램을 작성하라.
	*/

	/*
	int a, b;
	int sum=0;
	scanf("%d %d", &a ,&b);

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}

	sum = 0;
	if (a > b)
	{
		while (a != b)
		{
			sum += b++;
		}
		sum += a;
		printf("%d\n", sum);
	}
	else
	{
		while (a != b)
		{
			sum += a++;
		}
		sum += b;
		printf("%d\n", sum);
	}

	*/
	/*
	* 사용자로부터 양의 정수 m과 n을 입력받아 n개 만큼 m의 배수를 출력하는 프로그램을 작성
	* ex> 3 4
	* => 3 6 9 12
	*/

	/*
	* int m, n;
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ",m * i);
	}
	*/
	//확인문제

	/*
	int a = 0;
	do
	{
		printf("참:%d\n", a);
		printf("참:%d\n", a);
		scanf("%d", &a);
	} while (a<0);
	printf("거짓:%d\n", a);

	for (int i = 0; i < 5; i++)
	{
		printf("Be happy\n");
	}
	*/
	/*
	* 사용자로부터 계속 정수를 입력받아 그 값을 계속 더해 나간다.
	* 사용자가 0을 입력 할때까지 계속 되어야 하면 , 0이 입력되면
	* 입력된 모든 정수의 합을 출력한다.
	*/

	/*
	* int a = 1;
	int sum = 0;
	while (a)
	{
		printf("더 할값 입력: \n");
		scanf("%d", &a);
		printf("더하는중: %d\n", sum+=a);
	}
	printf("모든 정수의 합: %d\n", sum);
	*/
	/*
	for (int i = 2; i < 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n",i, j, i * j);
			}
		}
	*/
	/*
	* 1 이상 100 미만인 정수 m 과 n의 배수를 출력하는 프로그램을 작성하라.
	* 단, m의 배수 이면서 n의 배수인 정수는 한번만 출력해야 한다.
	*/

	/*
	* int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i < 100; i++)
	{
		if ((i % m)==0||(i%n)==0)
		{
			printf("%d ",i);
		}
	}
	*/

	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	//임의의 n을 입력 받아서 다음과 같은 형태로 출력
	/*
	int a = 0;
	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = a; i > 0; i--)
	{
		for (int j = i-1; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <=a-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = a; i > 0; i--)
	{
		for (int j = 0; j <= a-i; j++)
		{
			printf("*");
		}
		for (int j = i*2 - 1; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <= a - i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	/*
	* Q.임의 수 n을 입력 받아서 다음과 같은 형태로 출력하시오.
	* ex) n = 5
		*       *
		* *   * *
		* * * * *
		* *   * *
		*       *
​
	*/
	/*
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || j == (n - 1) - i)
			{
				printf("*");
			}
			else if (i > j&&j< (n - 1) - i)
			{
				printf("*");
			}
			else if (i < j && j > (n - 1) - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	*/
	/*
	*****
	 ***
	  *
	 ***
	*****
	*/
	/*
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j && j < (n - 1) - i)
			{
				printf(" ");
			}
			else if (i < j && j >(n - 1) - i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}

		}
		printf("\n");
	}
	*/
	/*
	*       *
	  *   *
		*
	  *   *
	*       *
	*/
	/*
	printf("------\n");
	int n;
	scanf("%d", &n);
	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (i == j || j==(n-1) - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("------\n");
	*/
	/*
	* 다음과 같이 되도록 구구단을 출력하여라
	* 원하는 단 n을 입력받아 n단 까지 출력
	* n=7
	*
	*/


	//몇번 반복할것인지 K인자를 사용하여 잘라낼수있다.
/*
printf("몇단까지: \n");
	int n;
	scanf("%d",&n);
	printf("몇번째까지: \n");
	int num;
	scanf("%d", &num);
	printf("\t구\t구\t단\n");
	printf("----------------------------------------\n");
	int k = 2;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = k; j <= n && j <= k+(num-1); j++)
		{
			printf("%2d X%2d =%3d  ", j, i, i * j);
		}
		printf("\n");
		if (i == 9&&k<n-(num-1))
		{
			printf("----------------------------------------\n");
			i = 0;
			k += num;
		}
	}
*/
/*
printf("몇단까지: \n");
	int n;
	scanf("%d",&n);
	printf("몇번째까지: \n");
	int num;
	scanf("%d", &num);
	printf("\t구\t구\t단\n");
	printf("----------------------------------------\n");
	int k = 2;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = k; j <= n; j++)
		{
			if (j<=k + (num - 1))
			{
				printf("%2d X%2d =%3d  ", j, i, i * j);
			}
		}
		printf("\n");
		if (i == 9)
		{
			if (k < n - (num - 1))
			{
				i = 0;
				k += num;
			}
			printf("----------------------------------------\n");
		}
	}
*/
/*
printf("몇단까지: \n");
int n;
scanf("%d",&n);
printf("몇번째까지: \n");
int num;
scanf("%d", &num);
printf("\t구\t구\t단\n");
printf("----------------------------------------\n");
int k = 2;
for (int i = 1; i <= 9; i++)
{
	for (int j = k; j <= n; j++)
	{
		if (j<=k + 2)
		{
			printf("%2d X%2d =%3d  ", j, i, i * j);
		}
	}
	printf("\n");
	if (i == 9)
	{
		if (k < n - 2)
		{
			i = 0;
			k += 3;
		}
		printf("----------------------------------------\n");
	}
}
*/
	return 0;
}