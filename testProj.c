#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//cmp ������ �����ؾ���

// ���ڿ����� ���ڰ��� �ľ�
// ���� ������ŭ ���ڵ� ��
// ���� ��ġ�� ���� �������ϱ�

int compare(int a, int b)
{
    return a >= b ? a : b;
}
int main()
{
    char str[80] = { 0 };
    int arr[100];
    int cnt = 0;
    gets(str);
    while (1)
    {
        for (int i = 0; i < strlen(str); i++)//���ڿ� �ڸ���
        {
            char* a;
            if (*(str + i) == ' ')
            {
                arr[cnt] = i;
                cnt++;
            }
        }

        break;
    }
    printf("%s", str);
    return 0;
}