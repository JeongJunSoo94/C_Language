#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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

typedef struct student
{
    int number;
    char* name[8];
    int language;
    int english;
    int math;
    struct student* next;
}Student;

void write_student(Student* current)
{
    Student* node = (Student*)malloc(sizeof(Student));
    printf("학번: ");
    scanf("%d",&node->number);
    printf("이름: ");
    scanf("%s", node->name);
    printf("국어: ");
    scanf("%d", &node->language);
    printf("영어: ");
    scanf("%d", &node->english);
    printf("수학: ");
    scanf("%d", &node->math);

    current->number = &node->number;
    *current->name = &node->name;
    current->language = &node->language;
    current->english = &node->english;
    current->math = &node->math;
    current->next = NULL;
}
void print_student(Student* student,int count)
{
    while (student->next!=NULL)
    {
        printf("number :%d\n", student->number);
        printf("name :%s\n", student->name);
        printf("language :%d\n", student->language);
        printf("english :%d\n", student->english);
        printf("math :%d\n", student->math);
    }
}
int main()
{
    int num;
    int student_count=0;
    Student* head;
    Student* last;
    head = NULL;
    last = NULL;
    Student* current;
    while (1)
    {
        printf("1. 입력 학번, 이름 성적 순으로 입력\n");
        printf("2. 출력 성적에 따라 정렬된 형태로 출력\n");
        printf("3. 검색 이름으로 해당 학생의 학점, 성적을 출력\n");
        printf("4. 종료\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            write_student(&current, &student_count);
            if (head == NULL)
            {
                head = current;
            }
            else
            {
                last->next = current;
            }
            print_student(head, student_count);
            //printf("%d", total_student[0]->number);
            //print_student(&total_student, &student_count);
            break;
        case 2:
            break;
        case 3:
            //print_student(total_student, student_count);
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    return 0;
}
