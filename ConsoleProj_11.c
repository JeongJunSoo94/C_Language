#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



/*
int main()
{

    
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);

    printf("[%c%c]", ch1, ch2);

    char str[128];
    scanf("%[^5]s",str);
    puts(str);
    
    //getchar, putchar �Լ��� ���� ���� ����� �Լ��̴�.
int ch;
ch = getchar();// ���� �̿��� �͵� ��ȯ�Ѵ�.
putchar(ch);
putchar('\n');
return 0;
}

*/
/*
 int main()
{
    char ch;
    int i;
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    //�Է��� tiger�� 3�� �ݺ��ϱ� ������ tig������ �Է��̵ȴ�.
    //���ۿ��� tiger�� �������� 3���� ����ϱ⶧���� tig������ ���´�.
    return 0;
}
//���۸� ����ϸ� ������
/*
1. �����͸� ���������� �Է� ���� �� �ֽ��ϴ�.
���۴� �ü���� ���� ũ�Ⱑ �ٸ� �� ������ ���� ũ���� ���ӵ� ���� �����Դϴ�.
���� Ű����� �����͸� �Է��ϸ� �켱 �������� ���� ������ �ϴ� ���ۿ� ����˴ϴ�.
���α׷��� �ٸ� ���� �ϴ��� �ش� �Է��� ��� ���� ���ص� �����Ͱ� ������� �ʾ� �������Դϴ�.
2. �Է���ġ�� ���������� ����� �� �ֽ��ϴ�.
scanf �Լ��� Ű����� ���� ������� �ʰ� ������ ũ��� ���¸� ���� ���ۿ��� �Է��� �޽��ϴ�.
���� �Է���ġ�� �ٲ���� �Լ��� �������� �ʰ� ����� �� �ֽ��ϴ�.
���ۿ� �Է� ��ġ�� �����ϴ� �۾��� �ü���� ����մϴ�.
*/
//EOF scanf�Լ��� ��ȯ���� ���ϴ� ������ -1��� EOF�� �� �� �ֽ��ϴ�.
//End Of File -1��ſ� �Է��� ���� �ǹ��Ѵ�.
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int num, grade;

    scanf("%d", &num);
    getchar();//�̰ɷ� �������� ���� ������۸� ������.
    grade = getchar();
    return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int ch=0;
    int res = 0, count=0;
    ch = getchar();
    while (ch !=EOF)
    {
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            res=res > count ? res : count;
            count = 0;
        }
        ch = getchar();
    }
    printf("���� �� �ܾ��� ���� : %d", res);
    return 0;
}

*/
/*
int main()
{
    int ch=0;
    int res = 0, count=0;
    ch = getchar();
    while (ch !=EOF)
    {
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            res=res > count ? res : count;
            count = 0;
        }
        ch = getchar();
    }
    printf("���� �� �ܾ��� ���� : %d", res);
    return 0;
}
*/
/*
int main()
{
    char ch=0;
    int res = 0, count=0,max=0;
    while (1)
    {
        res = scanf("%c", &ch);
        if (ch != '\n')
        {
            count++;
        }
        else
        {
            max = max > count ? max : count;
            count = 0;
        }
        if (res == EOF)
        {
            break;
        }
    }
    printf("���� �� �ܾ��� ���� : %d", max);
    return 0;
}
*/