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
	printf("원본 파일 :");
	gets(str1);
	printf("대상 파일 :");
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
		printf("원본 파일 :%s\n", str1); 
		printf("대상 파일 :%s\n", str2);
		printf("복사중 %.2lf%%\n", length++/ size*100);
		Sleep(1);
		fwrite(&buffer, sizeof(char), 1, afp);
	}
	fclose(afp);
	fclose(bfp);
	return 0;
}
