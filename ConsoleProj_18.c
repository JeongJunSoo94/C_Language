#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp, * fpw;
	int ch;

	fp = fopen("a.txt", "r");
	fpw = fopen("b.txt", "w");

	// ������ 
	//fp = fopen("D:\\C_Language\\a.txt","r");
	//fp = fopen("D:/C_Language/a.txt","r");
	// �����
	//fp = fopen("../../a.txt","r");
	if (fp == NULL)
	{
		printf("a.txt file open - fail");
		return 1;
	}
	if (fpw == NULL)
	{
		printf("b.txt file open - fail");
		return 1;
	}
	printf("file open - success\n");

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}

		putchar(ch);
		fputc(ch, fpw);
	}
	fputc('\n', fpw);
	fclose(fp);
	fclose(fpw);
	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp, * fpw;
	int ch;
	int arr[5] = { 13,10,13,13,10 };
	int res;
	fp = fopen("a.txt", "wb");
	fpw = fopen("b.txt", "wb");
	//���̳ʸ� ���� b�ٿ��ָ��
	//fp = fopen("a.txt", "rb");
	//fpw = fopen("b.txt", "wb");

	// ������
	//fp = fopen("D:\\C_Language\\a.txt","r");
	//fp = fopen("D:/C_Language/a.txt","r");
	// �����
	//fp = fopen("../../a.txt","r");
	for (int i = 0; i < 5; i++)
	{
		fputc(arr[i], fp);
	}

	fclose(fp);
	fp = fopen("a.txt", "rb");
	if (fp == NULL)
	{
		printf("a.txt file open - fail");
		return 1;
	}
	if (fpw == NULL)
	{
		printf("b.txt file open - fail");
		return 1;
	}
	printf("file open - success\n");

	while (1)
	{
		res = fgetc(fp);
		if (res == EOF)
		{
			break;
		}
		printf("%4d", res);
	}
	fputc('\n',fpw);
	fclose(fp);
	fclose(fpw);
	return 0;
}
*/

//fscandf()//���Ͽ��� ���ڿ��� �о�ͼ� ����Ѵ�.
//,fread(),fwrite() fseek(fp,0,SEEK_SET)

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}
	while (1)
	{
		res = fscanf(ifp, " %s %d %d %d", name, &kor, &eng, &math);
		if (res == EOF)
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp,"%s%5d%7.1lf\n",name,total,avg);
		printf("%s%5d%7.1lf\n", name, total, avg);

	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}
*/

/* ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void my_fflush(FILE* fp)
{
	while (fgetc(fp) != '\n') {}
}
int main()
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	my_fflush(fp);
	fgets(name, sizeof(name), fp);


	printf("���� : %d, �̸� : %s", age, name);


	fclose(fp);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fprintf(afp,"%d",num);

	bfp = fopen("b.txt","wb");
	fwirte(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res,sizeof(res),1,bfp);
	printf("%d",res);

	fclose(bfp);
	return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fa, * fb, * fc;

	char str1[10][20],str2[10][20];

	char* res;
	int i=0;
	fa = fopen("a.txt", "r");
	if (fa == NULL)
	{
		return 1;
	}
	fb = fopen("b.txt", "r");
	if (fb == NULL)
	{
		return 1;
	}
	fc = fopen("c.txt", "w");
	if (fc == NULL)
	{
		return 1;
	}
	while (1)
	{
		res = fgets(str1[i], sizeof(str1[i]), fa);
		if (res == NULL)
		{
			break;
		}
		str1[i][strlen(str1) - 1] = str1[i][strlen(str1) - 1] == '\n' ? '\0' : str1[i][strlen(str1) - 1];
		i++;
		printf("%s\n", res);

	}

	return 0;
}
*/

/*
* 99.txt ������ ����� , ���⿡ �������� �����ϵ��� �Ѵ�.
* �׸��� fseek() �̿� ���ϴ� �������� ���븸 ã�Ƽ� ����ϴ� ���α׷��� �ۼ��϶�.
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fa,*fb;

	char str1[20];
	char* res;
	fa = fopen("99.txt", "w");
	if (fa == NULL)
	{
		return 1;
	}

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			fprintf(fa,"%d X%2d =%3d\n", i, j, i * j);
		}
	}

	fclose(fa);

	fa = fopen("99.txt", "r");
	if (fa == NULL)
	{
		return 1;
	}
	int num = 5;//����� ���� ��������.
	fseek(fa, 12 * 9* (num-2), SEEK_SET);
	for (int i = 0; i < 9; i++)
	{
		res = fgets(str1, sizeof(str1), fa);
		printf("%s", res);
	}

	fclose(fa);
	return 0;
}
*/
/*
* ���� ���� ���α׷� �����
* ������ ���ϸ�� ������ �����Ǵ� ���ϸ��� �Է� �޾Ƽ�
* ������ ������ �����ϴ� ���α׷� �ۼ�
* ��. txt ���ϻӸ� �ƴ϶� �̹��� ���ϵ�.. ��� ������
* ���Ͽ� �� �����ϰ� ������ �� �־�� �Ѵ�.
* ���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�,
* �ѹ��� 4����Ʈ�� �����ϵ��� �Ѵ�.
* 
* ex>
* ���� ���� : source.txt
* ��� ���� : dest..txt
*    ������ : 12%
*/

/*
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

*/