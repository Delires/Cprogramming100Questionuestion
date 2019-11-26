/**
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
分析：挨个判断两两大小，搞一个中间变量
**/
#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("please intput a,b,c:\t");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>b)   //挨个判断3个数两两大小
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
