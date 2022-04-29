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