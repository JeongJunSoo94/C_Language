#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	printf("���ڿ� �Է� : ");
	gets(str1);
	puts("�Էµ� ���ڿ� : ");
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
* ���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� 5���� ������ �Է¹ް� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
* 1. �Էµ� ������ �ִ밪
* 2. .............�ּҰ�
* 3 ........�������� ����
* ���� : min, max �� �ʱⰪ ����, ÷�ڰ� �迭�� ũ�⸦ ���� �ʵ���
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
	printf("�ִ밪: %d\n�ּҰ�: %d\n����: %d", max, min, sum);
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
	printf("���ڿ� �Է� : ");
	gets(str1);
	puts("�Էµ� ���ڿ� : ");
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
* ��ҹ��� ��ȯ ���α׷�.
* �Է� Be Happy!
* ��� BE HAPPY!
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
	printf("�޴� : 1.�빮�ڷ� ��Ȳ, 2.�ҹ��ڷ� ��ȯ: ");
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
//%*c ������ �����ͼ� ���� �Է��� �������ִ�.
/*
*���ڿ��� �Է¹޾Ƽ� ������ ���ڿ��� �귯���µ��� ��µǴ�
* ���¿� ���� ���ڿ��� ��µǵ��� ���α׷��� �ۼ��϶�.
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