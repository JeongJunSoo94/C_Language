#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main()
{
	FILE* afp, * bfp;
	char str1[20];
	char str2[20];
	char buffer;
	double size;
	double length;
	printf("���� ���� :");
	gets(str1);
	printf("��� ���� :");
	gets(str2);
	bfp = fopen(str1, "rb");
	afp = fopen(str2, "wb");
	fseek(bfp, 0, 2);
	size = ftell(bfp);
	length = 0;
	fseek(bfp, 0, 0);
	while (!feof(bfp))
	{
		system("cls");
		fread(&buffer, sizeof(char), 1, bfp);
		printf("���� ���� :%s\n", str1); 
		printf("��� ���� :%s\n", str2);
		printf("������ %.2lf%%\n", length++/ size*100);
		Sleep(1);
		fwrite(&buffer, sizeof(char), 1, afp);
	}
	fclose(afp);
	fclose(bfp);
	return 0;
}
