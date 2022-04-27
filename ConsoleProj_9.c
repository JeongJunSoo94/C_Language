#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//포인터 , 배열과 포인터
int main()
{
    return 0;
}






//포인터는 주소값을 가리킨다.
/*
int main()
{
    int a =10;
    double b = 99.99f;
    char c ='c';

    printf("int형 변수의 주소 : %u\n", &a);
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);
    //%x 를 사용하면 16진수로 볼수있다.
    printf("%x %x %x\n", &a, &b, &c);
    //%p 를 사용하면 대문자형 16진수를 볼수있다.
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

    pa = &a; // pa안에 a 의 주소를 가지고 있다.
    printf("*pa       포인터로  a   값 출력 : %d\n", *pa);
    printf("a       변수명으로  a   값 출력 : %d\n", a);
    printf("pa      변수명으로  a   주소값 출력 : %d\n", pa);
    printf("&a  주소연산자으로  a   주소값 출력 : %d\n", &a);
    printf("&pa 주소연산자으로  pa  주소값 출력 : %d\n", &pa);

    ppa = &pa;//ppa에 pa의 주소값을 가져옴
    //printf("**ppa   포인터로 a   값 출력 : %d\n", **ppa);
    printf("**ppa    포인터로  a   값 출력 : %d\n", **ppa);
    printf("*ppa     포인터로  a   값 출력 : %d\n", *ppa);
    printf("ppa      포인터로  pa  값 출력 : %d\n", ppa);
    printf("&ppa 주소연산자로  ppa 값 출력 : %d\n", &ppa);
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

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);
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
    //*pa = 20; 상수타입인 *pa는 값을 변경할 수 없다.
    //pb = 20;는 값이 들어가나 *pb=20은 들어가지 않는다.

    printf("주소 pb 값 : %d\n", &pb);
    pb = 20;
    printf("변수 pb 값 : %d\n", pb);
    printf("주소 pb 값 : %d\n", &pb);

    printf("변수 a 값 : %d\n", *pa);
    printf("주소 a 값 : %d\n", &a);
    printf("주소 pa 값 : %d\n", &pa);
    pa = &b;
    printf("변수 b 값 : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("변수 a 값 : %d\n", *pa);

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

    printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

    printf("char형 *포인터의 크기 : %d\n", sizeof(pc));
    printf("int형 *포인터의 크기 : %d\n", sizeof(pi));
    printf("double형 *포인터의 크기 : %d\n", sizeof(pd));

    printf("char형 *포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
    printf("int형 *포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
    printf("double형 *포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));
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
    printf("%lf\n", *pd);//자료형이 다른 포인터값을 받아오면 이상한 값이 나옴
    printf("%p %p %p\n", &a,p,pd);

 
    return 0;
}
*/

/*
* int 형 num1, num2 를 선언과 동시에
* 10과 20으로 초기화해주고,
* int 형 포인터 ptr1, ptr2를 선언,
* 각 num1 과num 2를 가리키게한다.
* ptr1 과 ptr2를 이용해서  num1 은 10증가
* num2는 10 감소하게 한다.
* 이후 ptr1과 ptr2가 가리키는 대상을 서로 바꾼다.
* 마지작으로 ptr1과 ptr2가 가리키는 변수의 내용을 출력한다.
* 그리고... 각 변수에 저장된 값도 출력해서 확인한다.
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

    printf("실수값 3개 입력 : ");
    scanf("%lf%lf%lf",&max,&mid ,&min);
    line_up(&max,&mid,&min);
    printf("정렬된 값 출력 : %.1lf , %.1lf, %.1lf\n",max,mid,min);

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

    printf("세 번째 배열 요소에 키보드 입력 :");
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

    printf("앞에 있는 배열 요소의 값 출력 : ");
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
int main()//배열 선언하고 포인터로 받아서 사용
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
* 길이가 6인 int형 배열 Arr 을 선언하고 1,2,3,4,5,6 으로
* 초기화 한 다음에 배열에 저장된 값의 순서가 6,5,4,3,2,1이
* 되도록 변경하는 프로그램을 작성하라
* 단, 배열의 맨앞과 맨뒤를 가리키는 포인터 변수 두개를
* 선언해서 이를 활용하여 저장된 값의 순서를 뒤 바꿔야 한다.
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
* 임의의 값을 입력 받아서 뒤집어 출력하는 프로그램을 작성하라
* 입력 : Hello
* 출력 : olleH
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
		printf("번호 입력 : ");
		scanf("%d", &lotto_nums[count]);
		for (int i = 0; i < count; i++)
		{

			if (lotto_nums[i] == lotto_nums[count])
			{
				printf("같은 번호가 있습니다!\n");
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
	printf("로또 번호 :");
	for (int i = 0; i < 6; i++)
	{
		printf(" %d", lotto_nums[i]);
	}
}
*/