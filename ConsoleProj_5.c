#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//선택문
void main()
{
	int a = 0, b = 0;
	/*
	if(크리스마스 대까지 여자친구가 없으면)
	{
		친구가 -> 소개팅을 주선해준다.
	}
	*/
	/*
	* if (a > 10)
	{
		b = a;
	}
	printf("A:%d B:%d\n", a, b);

	scanf("%d",&a);
	if (a % 2)
	{
		printf("입력된 수 %d 홀수입니다.\n", a);
	}
	if (!(a % 2))
	{
		printf("입력된 수 %d 짝수입니다.\n", a);
	}
	*/
	/*
	if (a > 0)
	{
		b = 1;
	}
	else
	{
		b = 2;
	}
	printf("A:%d B:%d\n", a, b);

	scanf("%d", &a);
	*/
	int chest = 95;
	char size;
	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("%c\n", size);
	/*
	* 두개의 정수를 입력받아 두 수의 차를 출력하는 프로그램을 작성하라.
	* 단, 무조건 큰 수에서 작은 수를 빼야 한다.
	* if ~else 문을 이용해서 작성
	* 조건연산자를 이용해서 작성
	*/

	/*
	scanf("%d %d", &a,&b);
	if (a > b)
	{
		printf("%d\n", a - b);
	}
	else if (b>a)
	{
		printf("%d\n", b-a);
	}
	else
	{
		printf("%d\n",0);
	}

	a >= b ? a == b ? printf("%d", 0) : printf("%d", a - b) : printf("%d", b - a);

	printf("%d", (a > b) ? (a - b) : (b - a));//같다라는 조건이 없으니깐 바로 값을 출려하게 하여 더 짧게 만든 코드이다.
	*/
	/*
	*
	*/
	//분할 정복기법 divide and conquer
	//
	/*
	* int rank = 2,m=0;
	switch (a=0)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("%d", m);
	*/
	/*
	* 학생의 전체 평균 점수에 대한 학점을 출력하는 프로그램 작성.
	* 성적이 90점 이상 A,
	* 성적이 80점 이상 B,
	* 성적이 70점 이상 C,
	* 성적이 60점 이상 D,
	* 그 미만으 F로 처리.
	* 프로그램 실행시 국어, 영어, 수학의 점수르 입력 받는다.
	* 그 평균을 구하고, 위를 참고하여 적절한 학점을 출력하여하.
	*/
	/*
	*
	int l, e, m;
	scanf("%d %d %d", &l, &e, &m);
	int average = (l+e+m)/3;
	average /= 10;
	switch (average)
	{
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
	*/


	return 0;
}