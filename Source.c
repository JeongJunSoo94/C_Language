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
        printf("�޸� �Ҵ� ����");
        exit(1);
    }
    head->next = NULL;
    Student* current = head;
    char str[20];
    while (check == 0)
    {
        printf("1. �Է� �й�, �̸� ���� ������ �Է�\n");
        printf("2. ��� ������ ���� ���ĵ� ���·� ���\n");
        printf("3. �˻� �̸����� �ش� �л��� ����, ������ ���\n");
        printf("4. ����\n");
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
            printf("�˻��� �̸��� �����ÿ�:");
            gets(str);
            name_search(head, str);
            break;
        case 4:
            system("cls");
            printf("����");
            check += 1;
            break;
        default:
            printf("1~4�� �߿� ������:");
            break;
        }
    }
    return 0;
}
//��� 

void write_student(Student* student, Student* total)
{
    int check = 0, input_number = 0;
    Student* current = total;
    while (check == 0)
    {
        printf("�й�: ");
        scanf("%d", &input_number);

        while (current != NULL)
        {
            if (input_number == current->number)
            {
                printf("���� �й��� �ֽ��ϴ�.\n");
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
    printf("�̸�: ");
    scanf("%s", student->name);
    printf("����: ");
    scanf("%d", &student->grade.language);

    printf("����: ");
    scanf("%d", &student->grade.english);
    printf("����: ");
    scanf("%d", &student->grade.math);

    student->grade.avr = (double)(student->grade.language + student->grade.english + student->grade.math) / 3;
}
void add_student(Student** head)
{
    Student* newStudent = (Student*)malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        printf("�޸� �Ҵ� ����");
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
