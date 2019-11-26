/**
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
      求出这个数列的前20项之和。
分析：for循环每次＋2，a1=a2，a2=a1

学习点：fraction=fraction+(k/j);是对的
        fraction=(k/j)   fraction+=fraction;  是错的  fraction+=(k/j)

**/
#if(1)//我的
#include <stdio.h>
int main(void)
{
    float i,j=1.0 ,k=2.0;
    float fraction=0;
    for(i=0; i<20; i++)//循环20次加
    {
        fraction+=(k/j);  //必须要写前头，第一个是2/1
                           //z这种写法算出来才是对的
        k=j+k;
        j=k-j;
    }
    printf("%f\t", fraction);

    return 0;
}
#endif








#if(0)//标准答案
#include <stdio.h>
int main()
{
    int i,t;
    float sum=0;
    float a=2,b=1;
    for(i=1;i<=20;i++)
    {
        sum=sum+a/b;  //                      2/1
        t=a;          //t=a=2 a=a+b=3 b=t=2   3/2
        a=a+b;        //t=a=3 a=a+b=5 b=t=3   5/3
        b=t;
    }
    printf("%9.6f\n",sum);
}
#endif
