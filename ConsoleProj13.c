#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a;//�������� ���α׷� ���۰� ���ÿ� �Ҵ�Ǿ� ����ñ��� �����Ѵ�. ��κ� ����� �����Ѵ�. ������ϸ� �ڵ����� 0���� �ʱ�ȭ
//extern int a; �ܺο� ����Ȱ��� �����ͼ� ����Ҽ��ִ�.

void test();
int main()
{
    register int b;//cpu�� �ִ� �������Ϳ� �Ҵ�� ���������� ��밡�� ���������� ��� �Ұ��� �ּҿ��� �Ұ���
    for (int i = 0; i < 3; i++)
    {
        test();
    }
    return 0;
}
void test()
{
    static int staticint;//���� ���� ���� �ʱ�ȭ �ѹ��� �߻��� �ʱ�ȭ ���ϸ� �ڵ����� 0���� �ʱ�ȭ�� 
    printf("called %d\n", staticint++);
}

