#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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
    printf("�й�: ");
    scanf("%d",&node->number);
    printf("�̸�: ");
    scanf("%s", node->name);
    printf("����: ");
    scanf("%d", &node->language);
    printf("����: ");
    scanf("%d", &node->english);
    printf("����: ");
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
        printf("1. �Է� �й�, �̸� ���� ������ �Է�\n");
        printf("2. ��� ������ ���� ���ĵ� ���·� ���\n");
        printf("3. �˻� �̸����� �ش� �л��� ����, ������ ���\n");
        printf("4. ����\n");
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
