#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//연산자
void main()
{
	/*
	double a;
	int b;
	int c;
	a = 5.0 / 2.0;
	b = 5 / 2;
	c = 5 % 2;
	printf("a: %.1lf\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);

	a = 5.0 / 2;
	printf("a: %.1lf\n", a);
	a = 5 / 2.0;
	printf("a: %.1lf\n", a);
	a = 5 / 2;
	printf("a: %.1lf\n", a);//정수끼리 해서 2.0이 나온것이다 int형이기 때문에

	int aa = 0;
	++aa; // aa=aa+1, aa+=1 aa==1
	--aa; // aa=aa-1, aa-=1 aa==0

	int bb = 0;
	//전위연산
	printf("--------------전위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = ++aa;
	printf("aa: %d bb: %d \n", aa, bb);
	//후위 연산
	printf("--------------후위 \n");
	printf("aa: %d bb: %d \n",aa, bb);
	bb = aa++;
	printf("aa: %d bb: %d \n", aa, bb);
	//전위연산
	printf("--------------전위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = --aa;
	printf("aa: %d bb: %d \n", aa, bb);
	//후위 연산
	printf("--------------후위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = aa--;
	printf("aa: %d bb: %d \n", aa, bb);
	printf("-------------- \n");

	a = 10, b = 20, c = 10;
	int result;
	result = (a>b);
	printf("a > b  %d\n",result);
	result = (a >= b);
	printf("a >= b %d\n", result);
	result = (a < b);
	printf("a < b  %d\n", result);
	result = (a <= b);
	printf("a <= b %d\n", result);
	result = (a <= c);
	printf("a <= c %d\n", result);
	result = (a == b);
	printf("a == b %d\n", result);
	result = (a != c);
	printf("a != c %d\n", result);
	*/
	//논리연산자 && AND, || OR, ! NOT
	/*
	*   AND     OR    NOT
	*    0 1    0 1   0 1
	*  0 0 0  0 0 1   1 0
	*  1 0 1  1 1 1
	*/
	/*
	* 나이를 입력 받아서
	* 해당나이의 연령대를 출력하라
	* 13
	* 13은 10대 입니다.
	* 26
	* 26은 20대 입니다.
	*/
	/*
	int value;
	printf("나이를 입력 받아서 \n해당나이의 연령대를 출력하라\n");
	printf("입력 > 나이를 입력하시오 :");
	scanf("%d", &value);
	printf("출력 > %d은 %d대 입니다.\n", value, (value/10)*10);
	*/
	/*
	* 인간 수명이 100년 이라고 가정하고, 담배 한 개피를 피면 수명이 3시간 40분 단축된다고 한다.
	* 어떤 사람이 성인(20살로 가정)이 된 이후 N년간 하루에 M개피씩 담배를 피웠다면 수명은 얼마나 단축 되었고, 몇 살까지 살수 있는가?
	* (ex .. N =20 , M =3 서로 교차 검증)
	* > N,M 입력받고...
	* 결과 >
	*      줄어든 수명 : 00일 00시 00분
	*      기대 수명 : 00살 00일 00시 00분
	*/
	/*
	int N, M;
	int life = 100 * 365 * 24 * 60;
	int reduced_lifeSpan = 0;
	int YY = 0, DD = 0, TT=0, MM=0;
	printf("> N,M 입력받고...");
	scanf("%d %d",&N,&M);
	reduced_lifeSpan = (365 * N * M) * 220;
	MM = reduced_lifeSpan % 60;
	TT = reduced_lifeSpan / 60 % 24;
	DD = reduced_lifeSpan / 60 / 24 % 365 + reduced_lifeSpan / 60 / 24;
	printf("결과 >\n 줄어든 수명 : %d일 %d시 %d분\n",DD,TT,MM);
	MM = (life-reduced_lifeSpan) % 60;
	TT = (life - reduced_lifeSpan) / 60 % 24;
	DD = (life - reduced_lifeSpan) / 60 / 24 % 365;
	YY = (life - reduced_lifeSpan) / 60 / 24 / 365;
	printf("기대 수명 : %d살 %d일 %d시 %d분 ", YY,DD,TT,MM);
	*/
	/*
	int a=20,b =3;
	double res;
	res = ((double)a / (double)b);//res = (double)(a / b);//미리 정수끼리 나눠서 정수로 결과가 나옴
	printf("a = %d,b = %d\n",a,b);
	printf("a/b %.1lf 결과 : \n",res);
	a = (int)res;
	printf("(int)%.1lf의 결과: %d\n", res,a);
	*/
	//int a = 10, b = 20;
	//int res = 2;
	/*
	a += 20;
	res *= b + 10;
	*/
	/*
	res = 0;
	res = (++a, ++b);
	*/
	//res = (a > b) ? a : b;

	/*
	* 사용자로부터 정수 3개를 입력받아 저장하고
	* 조건연산자를 사용하여 이들 변수중 가장 큰 값을 출력하는 프로그램을 작성하라.
	*/
	/*
	 int a, b, c;
	scanf("%d %d %d", &a, &b,&c);
	printf("가장 큰 값: %d", a > b ? a > c ? a : c : b > c ? b : c);
	*/

	int a = 10;
	int b = 12;

	printf("a&b:%d\n", a & b);
	printf("a^b:%d\n", a ^ b);
	printf("a|b:%d\n", a | b);
	printf("~a:%d\n", ~a);
	printf("a<<1:%d\n", a << 1);
	printf("a>>2:%d\n", a >> 2);

	//비트연산으로 빠르게 확인가능
	//flag = 0101 0001
	//b&flag ? 1:0
	system("pause");
	return 0;
}