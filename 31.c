/**
��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ�������
      ���жϵڶ�����ĸ��һ����ĸ��һ����������ڼ�
����: ����һMon ���ڶ�Tues ������Wed ������Thur ������Fri ������Sat ������sun
      �����ַ��ͱ���������switch����жϵ�һ����ĸ�����ģ�����������ж�
**/
#include <stdio.h>
int main(void)
{
    char i,j; //�����ַ�����    �ַ�������Ҫ��ָ���Ӹ�ֵ������ֱ�Ӹ�ֵ
    printf("�������һ����ĸ(Сд):");
    scanf("%c", &i);
    getchar(); //��������һ���س��������ô�������ĵ��س�

    switch(i)
    {
    case 'm':
        printf("Monday����һ");
        break;
    case 'w':
        printf("Wednessday������");
        break;
    case 'f':
        printf("Friday������");
        break;
    case 't':
        printf("\n������ڶ�����ĸ(Сд):");
        scanf("%c", &j);
        if(j == 'u')
        {
            printf("Tuesday���ڶ�");
        }
        else if(j == 'h')
        {
            printf("Thursday������");
        }
        else
        {
            printf("input error");
        }
        break;
    case 's':
        printf("\n������ڶ�����ĸ(Сд):");
        scanf("%c", &j);
        if(j == 'a')
        {
            printf("Saturday������");
        }
        else if(j == 'u')
        {
            printf("Sunday������");
        }
        else
        {
            printf("input error");
        }
        break;
    default:
        printf("input error");
    }
    return 0;
}
