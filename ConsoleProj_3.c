#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*
* int main(void)
* {
*	return 0;
* }
*/
//변수와 데이터
void main()
{
	//자료형 종류
	//int , double , float , char , char[]

	//변수명 선언
	int i, j, k;//주로 사용하는 변수명

	//int a;//선언 후
	//선언은 했지만 값이 초기화 안돼 있기 때문에 초기화 해줘야한다.
	//a = 10;//값 넣어주기

	//int a = 0; 선언하면서 넣어주기

	int a = 0, b, c;
	double dA;//앞에 자료형+변수명으로 dA변수명을 만든다.
	char cA;
	int nStudentNumber;//n_Student_Number 변수명을 _를 사용해서 보기 쉽게 할수도 있음
	//변수 표기법 1.헝가리안 2.카멜 3. 파스칼 방식의 표기법을 팀이 하나 골라서 같은방식으로 코딩한다.

	a = 10;
	b = a;
	c = a + 20;
	dA = 3.5;//3.5f를 사용하면 float값으로 받는거고 안붙이면 double로 값을 받는다
	cA = 'A';

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%lf\n", dA);//%lf는 더블용 longfloat의 줄임이다 float는 %f만 사용해도 된다
	printf("%c\n", cA);

	//LValue, RValue: LValue는 지속성을 가지는 값이다. RValue는 한번 사용하고 버리는 수이다.
	//a 와 같은 변수도 RValue 가 될 수 있다.

	//아스키 코드 'A' = 65, 'a' = 97

	//자료형 크기
	/*자료명           byte                             범위
	* char              1                           -128 ~ 127
	* unsigned char     1                             0  ~ 255
	* short             2                        -32,768 ~ 32767
	* unsigned short    2                             0  ~ 65,535
	* int               4                 -2,147,483,648 ~ 2,147,483,647
	* unsigned int      4                             0  ~ 4,294,967,295
	* long              4                 -2,147,483,648 ~ 2,147,483,647
	* unsigned long     4                             0  ~ 4,294,967,295
	* longlong          8     -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	* unsigned longlong 8                             0  ~ 18,446,744,073,709,551,615
	* float             4                   1.175494e-38 ~ 3.402823e+38
	* double            8                  2.225074e-308 ~ 1.797693e+308
	* longdouble        8                  2.225074e-308 ~ 1.797693e+308
	*/

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("%d\n", sh);
	printf("%d\n", in);
	printf("%ld\n", ln);
	printf("%lld\n", lln);//%d의 값을 늘려서 받아야 넣은 값을 받을수있다. 그래서 long인 l을 받는것이다. %lld

	printf("short %d\n", sizeof(sh));
	printf("int   %d\n", sizeof(in));

	//unsigned는 양수만 사용해야 할 때 사용한다
	unsigned int uA = 1;
	printf("%u\n", uA);

	float fA = 1.234567890123456789;//유효숫자 7자리까지
	double dB = 1.234567890123456789;//유효숫자 15자리까지
	printf("%.20f\n", fA);
	printf("%.20lf\n", dB);

	char fruit[20] = "Apple";//[문자열길이 + 1] 초기화해서 사용해야함
	//'A','p','p','l','e','\0'
	fruit[0] = "strawberry";
	//이렇게 다시 값을 넣는것을 할수없음 왜냐하면 fruit[0]방 하나는 char형인데 넣는 값을 string값이다 그렇기 때문에 알수없는 값이 들어가는것이다
	//만약 값을 넣고 싶으면 char로 넣으면 가능하다

	printf("%s %s \n", fruit, "Jam");

	fruit[0] = 's';
	fruit[1] = 't';
	fruit[2] = 'r';
	fruit[3] = 'a';
	fruit[4] = 'w';
	fruit[5] = 'b';
	fruit[6] = 'e';
	fruit[7] = 'r';
	fruit[8] = 'r';
	fruit[9] = 'y';

	printf("%s %s \n", fruit, "Jam");

	strcpy(fruit, "PineApple");//헤더파일이 있어야한다. string함수를 사용하면 쉽게 바꿀수 있다.//string.h가 없어도 strcpy사용되나 버그이다.

	printf("%s %s \n", fruit, "Jam");

	const double tax_rate = 0.12;//선언과 동시에 초기화 해줘야한다
	//tax_rate = 0.5; 상수처리 했기때문에 값을 변경이 불가능하다.

	const double PI = 3.14;
	double radius = 5;
	double circle_len = 0.0;
	circle_len = 2 * PI * radius;

	/*사용 불가능한 변수명
	* int main; 예약어 이기때문에 main 사용 불가능
	* 3숫자로시작
	* -하이픈사용
	* ~틸드사용
	*  빈칸
	* 예약어
	*/
	int aa = 0;
	double bb = 0;
	printf("숫자 입력:");
	scanf("%d%lf", &aa, &bb);//입력값을 두개 받을때 스페이스바, 엔터, 텝을 사용해서 입력을 할수있다.
	printf("입력된 값 : %d %lf\n", aa, bb);

	char grade;
	char name[20];
	printf("학점입력 :");
	scanf("%c", &grade);

	printf("이름입력 :");
	scanf("%s", name);
	printf("학점입력 : %c 이름입력 : %s\n", grade, name);

	return 0;
}