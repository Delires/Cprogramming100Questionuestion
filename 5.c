/**
��Ŀ��������������x,y,z���������������С���������
�����������ж�������С����һ���м����
**/
#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("please intput a,b,c:\t");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>b)   //�����ж�3����������С
    {
        d=a;
        a=b;
        b=d;
    }
    if(a>c)
    {
        d=a;
        a=c;
        c=d;
    }
    if(b>c)
    {
        d=b;
        c=b;
        b=d;
    }
    printf("%d,%d,%d", a, b, c);
}
