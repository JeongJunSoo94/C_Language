#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������ , �迭�� ������
int main()
{
    return 0;
}






//�����ʹ� �ּҰ��� ����Ų��.
/*
int main()
{
    int a =10;
    double b = 99.99f;
    char c ='c';

    printf("int�� ������ �ּ� : %u\n", &a);
    printf("double�� ������ �ּ� : %u\n", &b);
    printf("char�� ������ �ּ� : %u\n", &c);
    //%x �� ����ϸ� 16������ �����ִ�.
    printf("%x %x %x\n", &a, &b, &c);
    //%p �� ����ϸ� �빮���� 16������ �����ִ�.
    printf("%p %p %p\n", &a, &b, &c);

    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a = 10;
    int* pa;

    int** ppa;

    pa = &a; // pa�ȿ� a �� �ּҸ� ������ �ִ�.
    printf("*pa       �����ͷ�  a   �� ��� : %d\n", *pa);
    printf("a       ����������  a   �� ��� : %d\n", a);
    printf("pa      ����������  a   �ּҰ� ��� : %d\n", pa);
    printf("&a  �ּҿ���������  a   �ּҰ� ��� : %d\n", &a);
    printf("&pa �ּҿ���������  pa  �ּҰ� ��� : %d\n", &pa);

    ppa = &pa;//ppa�� pa�� �ּҰ��� ������
    //printf("**ppa   �����ͷ� a   �� ��� : %d\n", **ppa);
    printf("**ppa    �����ͷ�  a   �� ��� : %d\n", **ppa);
    printf("*ppa     �����ͷ�  a   �� ��� : %d\n", *ppa);
    printf("ppa      �����ͷ�  pa  �� ��� : %d\n", ppa);
    printf("&ppa �ּҿ����ڷ�  ppa �� ��� : %d\n", &ppa);
    return 0;
}
 
*/

/*
int main()
{
    int a = 10, b = 15, total;
    double avg;
    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;

    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("�� ������ �� : %d, %d\n", *pa, *pb);
    printf("�� ������ �� : %d\n", *pt);
    printf("�� ������ ��� : %.1lf\n", *pg);
    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    const int* pa = &a;
    int* pb;
    //*pa = 20; ���Ÿ���� *pa�� ���� ������ �� ����.
    //pb = 20;�� ���� ���� *pb=20�� ���� �ʴ´�.

    printf("�ּ� pb �� : %d\n", &pb);
    pb = 20;
    printf("���� pb �� : %d\n", pb);
    printf("�ּ� pb �� : %d\n", &pb);

    printf("���� a �� : %d\n", *pa);
    printf("�ּ� a �� : %d\n", &a);
    printf("�ּ� pa �� : %d\n", &pa);
    pa = &b;
    printf("���� b �� : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("���� a �� : %d\n", *pa);

    return 0;
}
*/

/*
int main()
{
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
    printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
    printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

    printf("char�� *�������� ũ�� : %d\n", sizeof(pc));
    printf("int�� *�������� ũ�� : %d\n", sizeof(pi));
    printf("double�� *�������� ũ�� : %d\n", sizeof(pd));

    printf("char�� *�����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
    printf("int�� *�����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
    printf("double�� *�����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
    return 0;
}
*/
/*
* 
* int main() 
{
    int a = 10;
    int* p = &a;
    double* pd;


    pd = p;
    printf("%lf\n", *pd);//�ڷ����� �ٸ� �����Ͱ��� �޾ƿ��� �̻��� ���� ����
    printf("%p %p %p\n", &a,p,pd);

 
    return 0;
}
*/

/*
* int �� num1, num2 �� ����� ���ÿ�
* 10�� 20���� �ʱ�ȭ���ְ�,
* int �� ������ ptr1, ptr2�� ����,
* �� num1 ��num 2�� ����Ű���Ѵ�.
* ptr1 �� ptr2�� �̿��ؼ�  num1 �� 10����
* num2�� 10 �����ϰ� �Ѵ�.
* ���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ۴�.
* ���������� ptr1�� ptr2�� ����Ű�� ������ ������ ����Ѵ�.
* �׸���... �� ������ ����� ���� ����ؼ� Ȯ���Ѵ�.
*/
/*
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
    int num1=10, num2=20;
    int* ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    *ptr1 += 10;
    *ptr2 -= 10;

    printf("*ptr1 : %d ptr1 : %p\n",*ptr1,ptr1);
    printf("*ptr2 : %d ptr2 : %p\n", *ptr2,ptr2);

    int* tmp;
    tmp = ptr2;
    ptr2 = ptr1;
    ptr1 = tmp;

    printf("*ptr1 : %d ptr1 : %p\n", *ptr1, ptr1);
    printf("*ptr2 : %d ptr2 : %p\n", *ptr2, ptr2);

    printf("num1 : %d num2 : %d ptr1 : %d ptr2 :%d\n", num1, num2,*ptr1,*ptr2);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void Output(int* a)//call by reference
{
    *a = 30;
    printf("a: %d", *a);
}
void Output1(int a)//call by value
{
    a = 30;
    printf("a: %d", a);
}
int main()
{
    int a = 10, b =20;
    swap(&a,&b);
    printf("a: %d, b: %d",a,b);

    Output1(&a);
    printf("a: %d", a);

    Output(&a);
    printf("a: %d", a);

    return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(double *pa, double *pb)
{
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
void line_up(double* maxp, double* midp, double* minp)
{
    if (*maxp >= *midp)
    {
        if (*maxp >= *minp)
        {
        }
        else
        {
            swap(maxp , minp);
        }
    }
    else
    {
        if (*midp >= *minp)
        {

            swap(maxp, midp);
        }
        else
        {
            swap(maxp, minp);
        }
    }
    if (*midp >= *minp)
    {

    }
    else
    {
        swap(midp, minp);
    }
}
int main()
{
    double max, mid, min;

    printf("�Ǽ��� 3�� �Է� : ");
    scanf("%lf%lf%lf",&max,&mid ,&min);
    line_up(&max,&mid,&min);
    printf("���ĵ� �� ��� : %.1lf , %.1lf, %.1lf\n",max,mid,min);

    return 0;
}
*/

/*
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
    int ary[3];
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("�� ��° �迭 ��ҿ� Ű���� �Է� :");
    scanf("%d", ary + 2);
    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    return 0;
}

*/

/*
* 
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int ary[3];
    int* pa = ary;
    int i;
    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];
    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }
    return 0;
}

*/
/*
* 
* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int ary[5] = { 10,20,30,40,50 };
    int* pa = ary;
    int* pb = pa + 3;
    printf("pa: %u\n", pa);
    printf("pb: %u\n", pb);

    pa++;
    printf("pb - pa: %u\n", pb-pa);

    printf("�տ� �ִ� �迭 ����� �� ��� : ");
    if (pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
int main()//�迭 �����ϰ� �����ͷ� �޾Ƽ� ���
{
    char c = 1;
    char str1[100];
    gets(str1);
    char* str = str1;
    int len = strlen(str);
    while (c)
    {
        Sleep(120);
        system("cls");
        char cc;
        cc = *str;
        for (int i = 0; i < len - 1; i++)
        {
            *(str+i) = *(str + i+1);
            printf("%c", *(str + i));
        }
        *(str + len-1) = cc;
        printf("%c", *(str + len - 1));
        if (_kbhit())
        {
            c = 0;
        }
    }
    return 0;
}
*/
/*
* ���̰� 6�� int�� �迭 Arr �� �����ϰ� 1,2,3,4,5,6 ����
* �ʱ�ȭ �� ������ �迭�� ����� ���� ������ 6,5,4,3,2,1��
* �ǵ��� �����ϴ� ���α׷��� �ۼ��϶�
* ��, �迭�� �Ǿհ� �ǵڸ� ����Ű�� ������ ���� �ΰ���
* �����ؼ� �̸� Ȱ���Ͽ� ����� ���� ������ �� �ٲ�� �Ѵ�.
*/

/*
void swap(int*a,int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int Arr[6] = {1,2,3,4,5,6};
    int* front = &Arr[0];
    int* tail = &Arr[5];
    //int temp;
    for (int i = 0; i < 3; i++)
    {

        swap(*(front + i), *(tail - i));
        
        // temp = *(front + i);
        //*(front + i) = *(tail - i);
        //*(tail - i) = temp;
        
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d", Arr[i]);
    }
    return 0;
}
*/


/*
* ������ ���� �Է� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�
* �Է� : Hello
* ��� : olleH
*/
/*
* 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char c = 1;
    char str[100];
    gets(str);
    int len = strlen(str);
    char* front = str;
    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = *(front + i);
        *(front + i) = *(front+ len-1 - i);
        *(front + len-1 - i) = temp;
    }
    puts(str);
    return 0;
}

*/
/*
* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main()
{
	int lotto_num[6];

	input_nums(lotto_num);
	print_nums(lotto_num);
	return 0;
}
void input_nums(int* lotto_nums)
{
	int count = 0, check=0;
	while (count != 6)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &lotto_nums[count]);
		for (int i = 0; i < count; i++)
		{

			if (lotto_nums[i] == lotto_nums[count])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				check++;
				break;
			}
		}
		if (check == 0)
		{
			count++;
		}
		else
		{
			check = 0;
		}

	}
}
void print_nums(int* lotto_nums)
{
	printf("�ζ� ��ȣ :");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d", lotto_nums[i]);
	}
}
*/