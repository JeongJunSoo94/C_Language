#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct grades
{
    int language;
    int english;
    int math;
    double avr;
}Grades;

typedef struct student
{
    int number;
    char* name[8];
    Grades grade;
    struct student* next;
}Student;

void write_student(Student* student, Student* total);
void add_student(Student** head);
void print_student(Student* student);
void bubble_sort(Student* head, Student* current);
void name_search(Student* student, char* str);


int main()
{
    int check = 0, num, number_of_students = 0;
    Student* head;
    head = NULL;
    head = (Student*)malloc(sizeof(Student));
    if (head == NULL)
    {
        printf("메모리 할당 오류");
        exit(1);
    }
    head->next = NULL;
    Student* current = head;
    char str[20];
    while (check == 0)
    {
        printf("1. 입력 학번, 이름 성적 순으로 입력\n");
        printf("2. 출력 성적에 따라 정렬된 형태로 출력\n");
        printf("3. 검색 이름으로 해당 학생의 학점, 성적을 출력\n");
        printf("4. 종료\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            system("cls");
            add_student(head);
            print_student(head);
            break;
        case 2:
            system("cls");
            bubble_sort(head, current);
            print_student(head);
            break;
        case 3:
            system("cls");
            getchar();
            printf("검색할 이름을 적으시오:");
            gets(str);
            name_search(head, str);
            break;
        case 4:
            system("cls");
            printf("종료");
            check += 1;
            break;
        default:
            printf("1~4번 중에 고르세요:");
            break;
        }
    }
    return 0;
}
//노드 

void write_student(Student* student, Student* total)
{
    int check = 0, input_number = 0;
    Student* current = total;
    while (check == 0)
    {
        printf("학번: ");
        scanf("%d", &input_number);

        while (current != NULL)
        {
            if (input_number == current->number)
            {
                printf("같은 학번이 있습니다.\n");
                current = total;
                check = 0;
                break;
            }
            else
            {
                check += 1;
            }
            current = current->next;
        }
    }
    student->number = input_number;
    printf("이름: ");
    scanf("%s", student->name);
    printf("국어: ");
    scanf("%d", &student->grade.language);

    printf("영어: ");
    scanf("%d", &student->grade.english);
    printf("수학: ");
    scanf("%d", &student->grade.math);

    student->grade.avr = (double)(student->grade.language + student->grade.english + student->grade.math) / 3;
}
void add_student(Student** head)
{
    Student* newStudent = (Student*)malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        printf("메모리 할당 오류");
        exit(1);
    }
    if (*head == NULL)
    {
        write_student(newStudent, head);
    }
    newStudent->next = NULL;
    write_student(newStudent, head);
    Student* pos =*head;
}

void print_student(Student* student)
{
    while (student != NULL)
    {
        printf("number :%d ", student->number);
        printf("name :%s ", student->name);
        printf("language :%d ", student->grade.language);
        printf("english :%d ", student->grade.english);
        printf("math :%d ", student->grade.math);
        printf("avr :%.2lf ", student->grade.avr);
        printf("\n");
        student = student->next;
    }
}
void bubble_sort(Student* head, Student* current1)
{
    int count = 0;
    Student* current = head;
    Student* temp1;
    /*
while (current->next != NULL)
    {
        if (current->grade.avr > current->next->grade.avr)
        {
            temp1 = current->next;
        }
        current = current->next;
    }
    */
    while (current != NULL)
    {
        count += 1;
        current = current->next;
    }
    current = head;
    for (int i = 0; i < count; i++)
    {

    }
}

void name_search(Student* student, char* str)
{
    while (student != NULL)
    {
        if (strcmp(student->name, str) == 0)
        {
            printf("number :%d ", student->number);
            printf("name :%s ", student->name);
            printf("avr :%.2lf ", student->grade.avr);
            break;
        }
        student = student->next;
    }
}
