#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�׽�Ʈ
int abs(int n);
int main()
{
	int n=1;
	printf("�����Ϸ��� 0�� �Է��Ͻÿ�.\n");
	while (n != 0)
	{
		printf("���� �Է�(����-0) : ");
		scanf("%d", &n);
		abs(n);
	}
	return 0;
}

int abs(int n)
{
	if (n < 0)
	{
		printf("���밪�� : %d\n", n *= -1);
		return n *= -1;
	}
	else
	{
		printf("���밪�� : %d\n", n);
		return n;
	}
}