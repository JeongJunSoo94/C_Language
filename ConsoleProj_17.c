#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma pack(1)//바이트 얼라인먼트를 1로 설정하면 패딩 바이트가 필요없음

typedef struct student//struct student이부분을 typedef으로
{
    int num;// 4바이트 char fadding[4];
    double grade;//8바이트
}Student;//Student로 정의해서 사용할수있다.

int main()
{
    Student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);
    printf("사이즈 : %d\n", sizeof(s1));
    return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};

int main()
{
    struct profile yuni;

    strcpy(yuni.name,"서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(80);
    printf("자기소개 :");
    gets(yuni.intro);

    printf("이름 : %s\n",yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);
    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct vision
{
    double left;
    double right;
};
struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}
int main()
{
    struct vision robot;
    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &robot.right);
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};
int main()
{
    struct score yuni = { 90,80,70 };
    struct score* ps = &yuni;

    printf("국어 : %d\n",(*ps).kor);
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n",ps->math);
    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address* lp)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
    }
}
int main()
{
    struct address list[5] = {
        {"홍길동", 23,"111-1111","울릉도 독도"},
        {"이순신", 35,"222-2222","서울 건천동"},
        {"장보고", 19,"333-3333","완도 청해진"},
        {"윤관순", 15,"444-4444","충남 천안"},
        {"안중근", 45,"555-5555","황해도 해주"}
    };
    print_list(list);
    return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct list
{
    int num;
    struct list* next;
}List;

int main()
{
    List a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    List* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all :");
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");
    return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

union student
{
    int num;
    double grade;
};

int main()
{
    union student s1 = { 325 };

    printf("학번 : %d\n", s1.num);
    s1.grade = 4.4;
    printf("학점 : %.1lf\n", s1.grade);
    printf("학번 : %d\n", s1.num);

    return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

enum season {SPRING=33, SUMMER, FALL, WINTER};

int main()
{
    enum season ss;
    char* pc = NULL;

    ss = SUMMER;
    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    }
    printf("나의 레저 활동 => %s %d\n",pc, ss);

    return 0;
}

*/

/*
* 학번, 이름, 학점(국/영/수)을 입력 받을 수
* 있는 구조체를 만들고 임의 수의 학생에 대한
* 데이터를 입력 받아 출력하는 코드를 작성하라.
* 학점 순으로 정렬하여 출력하도록 한다.
* - 다음 4개의 메뉴를 구성하고, 각 메뉴 선택시
* 작동은 다음과 같다.
* 1. 입력 학번, 이름 성적 순으로 입력
* 2. 출력 성적에 따라 정렬된 형태로 출력
* 3. 검색 이름으로 해당 학생의 학점, 성적을 출력
* 4. 종료
* 단 , 
*   1. 번호 중복 불가 , 이름은 중복 가능
*   2. 검색 -> 이름검색으로 하고 먼저 찾은것을 우선으로 출력
*  참고사항
*   1. 메모리 할당 사용, 자기 참조 구조체 활용, 입력/출력/검색은 각각
*   개별 함수로 구현한다.
*/
