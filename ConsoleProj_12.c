#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문자 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    char* str = "apple";
    str + 1 == "apple" + 1;
    return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫 번째 문자 : %c\n", *"apple");
    printf("두 번째 문자 : %c\n", *("apple" + 1));
    printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

    char* dessert = "apple";
    printf("오늘 후식은 %s입니다.\n",dessert);
    printf("오늘 후식은 %p입니다.\n", dessert);
    dessert = "banana";
    printf("내일 후식은 %s입니다.\n", dessert);
    printf("내일 후식은 %p입니다.\n", dessert);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char szBuf[12] = {"Test String"};//버퍼로 받아서 수정가능
    char* pszData = "Test string";//주소출력 수정불가능
    printf("%d \n", szBuf == pszData);
    //getchar();
    //scanf("%c",c);
    //gets(szBuf);
    //fgets(szBuf,sizeof(szBuf),stdin);

    //puts(pszData);
    //fputs(pszData,stdout);출력을 할것인데 뒤에 모니터에 출력할것이냐 파일에 할것이냐 네트워크에 할것이냐
    //f가 붙으면 어디로 보낼지 설정
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//직접구현 gets: 한줄의 데이터를 char 배열에 저장한다.
int main()
{
    int i = 0;
    char str[20];//대부분 256으로 잡혀있음
    char ch;

    do
    {
        ch = getchar();
        str[i] = ch;
        i++;
    } while (ch !='\n');
    str[--i] = '\0';
    //printf("%s",str);
    return 0;
}
*/
/*//strcpy는 문자열을 초기화 시키고 새로운 문자열로 바꿀때 사용합니다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1,str2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1);

    char str[20] = "mango tree";

    strncpy(str, "apple-pie", 5);//apple tree 5번까지만 복사하겠다는 뜻
    printf("%s\n,",str);
    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strcat 함수는 메모리를 침범할 수 있습니다.
//strcat 함수를 사용할 때는 배열을 초기화해야 합니다.
int main()
{
    char str[80] = "straw";
    char d[10] = {0};
    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n", str);
    strncat(d, "piece", 3);
    printf("%s\n", d);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strlen 문자열의 길이를 반환해준다.
int main()
{
    char str1[80], str2[80];
    char* resp;

    printf("2개의 과일 이름 입력 :");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;
    printf("이름이 긴 과일은 : %s\n", resp);
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//strcmp 두 문자열을 비교하여 같은지 반환
//strncmp는 두 문자열의 어디까지 비교할건지 선언하여 반환
int main()
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름 : ");
    if (strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else
        printf("%s\n", str2);

    if (strncmp(str1, str2,3) == 0)
        printf("같다");
    else
        printf("다르다");

    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char* my_strcpy(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);
int my_strlen(char* ps);
int my_strcmp(char* pa, char* pb);
int main()
{
    char str1[80] = "strawberry";

    printf("바꾸기 전 문자열 : %s\n", str1);
    my_strcpy(str1,"apple");
    printf("바꾼 후 문자열 : %s\n", str1);
    printf("다른 문자열 대입 : %s\n", my_strcpy(str1, "kiwi"));
    return 0;
}

char* my_strcpy(char* pd, char *ps)
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
int my_strlen(char* ps)
{
    int cnt = 0;
    while(*ps != '\0');
    {
        cnt++;
        ps++;
    }
    return cnt;
}
int my_strcmp(char* pa, char* pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        pa++;
        pb++;
    }
    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}

*/
/*
* "I am a boy. I am Happy!" 문자열이 있는데
* 이중 boy 의 위치 주소를 출력하고
* boy 를 girl로 바꾸어 출력하도록 하는 코드를 작성하라.
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp 사용안함 수정해야함
char* my_strcpy(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);
int my_strlen(char* ps);
int my_strcmp(char* pa, char* pb, int n);
int main()
{
    char str[80] = "I am a boy. I am Happy!";
    char *str1 = "boy";
    char *str2 = "girl";
    char boy[80] = {0};
    int check=0;
    printf("%d\n", my_strlen(str1));
    for (int i = 0; i < my_strlen(str)- my_strlen(str1); i++)
    {
        check = 0;
        for (int j = 0; j < my_strlen(str1); j++)
        {
            if (*(str+i+j) != *(str1 + j))
            {
                break;
            }
            else
            {
                check++;
            }
        }
        if (check == my_strlen(str1))
        {
            printf("boy 위치 주소: %p\n",*(str + i));
            strncpy(boy, str,i);
            strcat(boy, str2);
            strcat(boy, str+i+ my_strlen(str1));
            strcpy(str,boy);
        }
    }
    printf("바뀐 문자열 : %s\n", str);

    return 0;
}

char* my_strcpy(char* pd, char *ps)
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
int my_strlen(char* ps)
{
    int cnt = 0;
    while(*ps != '\0')
    {
        cnt++;
        ps++;
    }
    return cnt;
}
int my_strcmp(char* pa, char* pb,int n)
{
    int cnt = 0;
    while ((*pa == *pb) && (*pa != '\0')&&cnt!=n)
    {

        printf("pa문자%c\n", *pa);
        printf("pb문자%c\n", *pb);
        pa++;
        pb++;
        cnt++;
    }
    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}

*/

/*
* 도전 실전 문제
* 사전 순서 대로 출력
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp 사용안함 수정해야함

// 문자열에서 문자개수 파악
// 문자 개수만큼 문자들 비교
// 문자 위치에 따라 순서정하기

int compare(int a, int b)
{
    return a >= b ? a : b;
}
int main()
{
    char str[80] = {0};
    int arr[10];
    int cnt=0;
    gets(str);
    while (1)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (*(str + i) == ' ')
            {
                cnt++;
                arr[cnt] = i;
            }
        }
        break;
    }
    printf("%s",str);
    return 0;
}

*/