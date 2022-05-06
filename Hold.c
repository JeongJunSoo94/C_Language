void abc(char* ch)
{
    for (int i = 0; ch[i] != 0; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] += 'a' - 'A';
        }

    }

}
char* my_strcat(char* pd, char* ps)
{
    char* po = pd;
    while (*pd != '\0')
    {
        pd++;
    }
    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
int my_strcmp(char* pa, char* pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        printf("pa문자%c\n", *pa);
        printf("pb문자%c\n", *pb);
        pa++;
        pb++;
    }
    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}
char* my_strncpy(char* pd, char* ps, int n)
{
    char* po = pd;
    while (*ps != '\0' && n != 0)
    {
        *pd = *ps;
        pd++;
        ps++;
        n--;
    }
    *pd = '\0';
    return po;
}
char* my_strcpy(char* pd, char* ps)
{
    char* po = pd;
    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
char* swap(char* str1, char* str2)
{
    char temp1[80], temp2[80];

    my_strcpy(temp1, str1);
    my_strcpy(temp2, str2);
    abc(temp1);
    abc(temp2);
    printf("스왑전1%s", temp1);
    printf("스왑전2%s\n", temp2);
    printf("%d", my_strcmp(str1, str2));
    if (my_strcmp(temp1, temp2) > 0)
    {
        printf("스왑전1%s", temp1);
        printf("스왑전2%s\n", temp2);

        my_strcpy(str1, temp2);
        my_strcpy(str2, temp1);
        printf("스왑후1%s", temp1);
        printf("스왑후2%s\n", temp2);
    }
    else
    {
        return str1;
    }
    return str1;
}
void Sort(char* str, int* arr, int cnt)
{
    char str1[80], str2[80], result[80];
    int n = 0;
    for (int i = 0; i < cnt; i++)
    {

        if (i == 0)
        {
            //printf("%d", n);
            my_strncpy(str1, str, arr[i]);
            n += arr[i] + 1;
            printf("%s", str1);
        }
        else if (i == 1)
        {
            my_strncpy(str2, str + n, arr[i]);//
            n += arr[i] + 1;

            my_strcpy(result, swap(str1, str2));

            printf("result:%s\n", result);
        }
        else if (i == cnt - 1)
        {
            //printf("%d", n);
            my_strncpy(str2, str + n, arr[i]);//

            my_strcat(result, swap(str1, str2));
            printf("result:%s\n", result);
            printf("%s", str2);
        }
        else
        {

            //printf("%d", n);
            my_strncpy(str2, str + n, arr[i]);//
            n += arr[i] + 1;

            my_strcat(result, swap(str1, str2));

            printf("result:%s\n", result);
        }

    }
}
int token(char* str, int* arr)
{
    int cnt = 1, cnt1 = 0;
    for (int j = 0; j < strlen(str); j++)
    {
        if (*(str + j) == ' ')
        {
            arr[cnt - 1] = cnt1;
            cnt++;
            cnt1 = 0;
        }
        else if (j == strlen(str) - 1)
        {
            arr[cnt - 1] = cnt1 + 1;
            cnt1 = 0;
        }
        else
        {
            cnt1++;
        }
    }
    return cnt;
}
int main()
{
    char str[80] = { 0 };
    int arr[80] = { 0 };

    scanf("%[^\n]", str);

    while (1)
    {
        Sort(str, arr, token(str, arr));
        break;
    }
    return 0;
}

/*
* 
* 

int my_strcmp(char* pa, char* pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        pa++;
        pb++;
    }
    if ((*pa<'a'?*pa+'a' - 'A':*pa) > (*pb<'a'?*pb+'a' - 'A':*pb)) return 1;
    else if ((*pa<'a'?*pa+'a' - 'A':*pa) < (*pb<'a'?*pb+'a' - 'A':*pb)) return -1;
    else return 0;
}
char* my_strcpy(char* pd, char* ps)
{
    char* po = pd;
    while (*ps != '\0')
    {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';
    return po;
}
void sort(char* str1,char* str2,char* str3)
{
    char *temp;
    if (my_strcmp(str1, str2)>0)
    {
        my_strcpy(temp, str1);
        my_strcpy(str1, str2);
        my_strcpy(str2, temp);
    }
    if (my_strcmp(str2, str3) > 0)
    {
        my_strcpy(temp, str2);
        my_strcpy(str2, str3);
        my_strcpy(str3, temp);
    }
    if (my_strcmp(str1, str3) > 0)
    {
        my_strcpy(temp, str1);
        my_strcpy(str1, str3);
        my_strcpy(str3, temp);
    }
}
int main()
{
    char str1[256], str2[256], str3[256];

    scanf("%s %s %s",str1,str2,str3);
    sort(str1, str2, str3);
    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}

int main()
{
    char temp[80];
    int i = 0, size = 2;;

    char**str = (char**)malloc(size * sizeof(char*));
    while (1)
    {
        printf("문자열을 입력하세요 :");
        gets(temp);
        if (strcmp(temp, "Quit") == 0)break;

        if (size == i)
        {
            size++;
            *str = (char**)realloc(*str, sizeof(char*)* size);
        }

        str[i] = (char*)malloc(strlen(temp) + 1);
        if (str[i] == NULL)//꼭해줘야함
        {
            printf("메모리가 부족합니다.\n");
            exit(1);
        }
        strcpy(str[i], temp);

        i++;
    }
    print_str(str);

    for (i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }

    return 0;
}


*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int word_count(char* str)
{
    int count = 1;
    for (int i = 0; str[i] == NULL; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char temp[80];
    int i = 0, size = 2;;
    int count;

    char** str = (char**)malloc(size * sizeof(char*));
    while (1)
    {
        printf("문자열을 입력하세요 :");
        gets(temp);
        count = word_count(temp);
        *str = (char**)malloc(size * sizeof(char*));

    }
    print_str(str);

    for (i = 0; str[i] != NULL; i++)
    {
        free(str[i]);
    }

    return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct grades
{
    int language;
    int english;
    int math;
    double total;
}Grades;

typedef struct student
{
    int number;
    char* name[8];
    Grades grade;
    struct student* next;
}Student;

void write_student(Student* student, Student* total);
Student* add_student(Student* student, Student* total);
void print_student(Student* student);
Student* bubble_sort(Student* student);
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
            if (number_of_students == 0)
            {
                write_student(head, head);
                number_of_students += 1;
            }
            else
            {
                current = add_student(current, head);
                number_of_students += 1;
            }
            print_student(head);
            break;
        case 2:
            system("cls");
            bubble_sort(head);
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

    student->grade.total = (double)(student->grade.language + student->grade.english + student->grade.math) / 3;
}
Student* add_student(Student* student, Student* total)
{
    Student* newStudent = (Student*)malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        printf("메모리 할당 오류");
        exit(1);
    }
    newStudent->next = NULL;
    student->next = newStudent;
    write_student(newStudent, total);
    return newStudent;
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
        printf("total :%.2lf ", student->grade.total);
        printf("\n");
        student = student->next;
    }
}
Student* bubble_sort(Student* student)
{
    int count = 0;
    Student* head = student;
    Student* temp;
    while (head->next != NULL)
    {
        if (head->grade.total > head->next->grade.total)
        {
            temp = head->next;
            head->next = head->next->next;
            temp->next = head;
            head = temp;
            printf("\ntemp : ");
            print_student(temp);
            printf("\ntemp->next : ");
            print_student(temp->next);
            printf("\nhead : ");
            print_student(head);
            printf("\nhead->next : ");
            print_student(head->next);
            if (count == 0)
            {
                head = student = temp;
            }
            count += 1;
        }
        head = head->next;
    }
    return head;
}

void name_search(Student* student, char* str)
{
    while (student != NULL)
    {
        if (strcmp(student->name, str) == 0)
        {
            printf("number :%d ", student->number);
            printf("name :%s ", student->name);
            printf("total :%.2lf ", student->grade.total);
            break;
        }
        student = student->next;
    }
}

*/