#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma pack(1)//����Ʈ ����θ�Ʈ�� 1�� �����ϸ� �е� ����Ʈ�� �ʿ����

typedef struct student//struct student�̺κ��� typedef����
{
    int num;// 4����Ʈ char fadding[4];
    double grade;//8����Ʈ
}Student;//Student�� �����ؼ� ����Ҽ��ִ�.

int main()
{
    Student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("�й� : %d\n", s1.num);
    printf("���� : %.1lf\n", s1.grade);
    printf("������ : %d\n", sizeof(s1));
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

    strcpy(yuni.name,"������");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(80);
    printf("�ڱ�Ұ� :");
    gets(yuni.intro);

    printf("�̸� : %s\n",yuni.name);
    printf("���� : %d\n", yuni.age);
    printf("Ű : %.1lf\n", yuni.height);
    printf("�ڱ�Ұ� : %s\n", yuni.intro);
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
    printf("�÷� �Է� : ");
    scanf("%lf%lf", &(robot.left), &robot.right);
    robot = exchange(robot);
    printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
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

    printf("���� : %d\n",(*ps).kor);
    printf("���� : %d\n", ps->eng);
    printf("���� : %d\n",ps->math);
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
        {"ȫ�浿", 23,"111-1111","�︪�� ����"},
        {"�̼���", 35,"222-2222","���� ��õ��"},
        {"�庸��", 19,"333-3333","�ϵ� û����"},
        {"������", 15,"444-4444","�泲 õ��"},
        {"���߱�", 45,"555-5555","Ȳ�ص� ����"}
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

    printf("�й� : %d\n", s1.num);
    s1.grade = 4.4;
    printf("���� : %.1lf\n", s1.grade);
    printf("�й� : %d\n", s1.num);

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
    printf("���� ���� Ȱ�� => %s %d\n",pc, ss);

    return 0;
}

*/

/*
* �й�, �̸�, ����(��/��/��)�� �Է� ���� ��
* �ִ� ����ü�� ����� ���� ���� �л��� ����
* �����͸� �Է� �޾� ����ϴ� �ڵ带 �ۼ��϶�.
* ���� ������ �����Ͽ� ����ϵ��� �Ѵ�.
* - ���� 4���� �޴��� �����ϰ�, �� �޴� ���ý�
* �۵��� ������ ����.
* 1. �Է� �й�, �̸� ���� ������ �Է�
* 2. ��� ������ ���� ���ĵ� ���·� ���
* 3. �˻� �̸����� �ش� �л��� ����, ������ ���
* 4. ����
* �� , 
*   1. ��ȣ �ߺ� �Ұ� , �̸��� �ߺ� ����
*   2. �˻� -> �̸��˻����� �ϰ� ���� ã������ �켱���� ���
*  �������
*   1. �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��, �Է�/���/�˻��� ����
*   ���� �Լ��� �����Ѵ�.
*/
