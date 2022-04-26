#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	printf("문자열 입력 : ");
	gets(str1);
	puts("입력된 문자열 : ");
	puts(str1);
	return 0;
}
//
/*
int main()
{
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];
	scanf("%d", &arr[3]);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	return 0;
}
*/

/*
* 길이가 5인 int형 배열을 선언하고, 사용자로부터 5개의 정수를 입력받고 다음의 내용을 출력하는 프로그램을 작성하라.
* 1. 입력된 정수중 최대값
* 2. .............최소값
* 3 ........정수들의 총합
* 주의 : min, max 의 초기값 주의, 첨자가 배열의 크기를 넘지 않도록
*
*/
/*
*
int main()
{

	int arr[5],sum=0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max =arr[i];
		}
	}
	printf("최대값: %d\n최소값: %d\n총합: %d", max, min, sum);
	return 0;
}
*/

/*
#include<string.h>
int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n",str1,str2);
	return 0;
}
*/
/*
#include<string.h>
int main()
{
	char str1[80];
	printf("문자열 입력 : ");
	gets(str1);
	puts("입력된 문자열 : ");
	puts(str1);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[5];
	str[0] = 'O';
	str[1] = 'K';
	str[2] = NULL;
	printf("%s\n",str);
	return 0;
}
*/

/*
* 대소문자 변환 프로그램.
* 입력 Be Happy!
* 출력 BE HAPPY!
*/
/*
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char str[100];
	printf("메뉴 : 1.대문자로 변황, 2.소문자로 변환: ");
	scanf("%d%*c",&n);
	gets(str);
	puts(str);
	if (n == 1)
	{
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] - 'a' <= 26 && str[i] - 'a' >= 0)
			{
				str[i] = str[i] - 'a' + 'A';
			}
			printf("%c", str[i]);
		}
	}
	else
	{
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] - 'A' <= 26 && str[i] - 'A' >= 0)
			{
				str[i] = str[i] - 'A'+'a';
			}
			printf("%c", str[i]);
		}
	}
	return 0;
}

*/
//%*c 개행을 꺼내와서 다음 입력을 받을수있다.
/*
*문자열을 입력받아서 광고판 문자열이 흘러가는듯이 출력되는
* 형태와 같이 문자열이 출력되도록 프로그램을 작성하라.
*/

/*
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
int main()
{
	char c=1;
	char str[100];
	gets(str);
	int len = strlen(str);
	while (c)
	{
		Sleep(120);
		system("cls");
		char cc;
		cc = str[0];
		for (int i = 0; i < len-1; i++)
		{
			str[i]=str[i+1];
			printf("%c", str[i]);
		}
		str[len - 1] = cc;
		printf("%c", str[len - 1]);
		if (_kbhit())
		{
			c = 0;
		}
	}
	return 0;
}
*/