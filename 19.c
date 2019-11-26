/**
题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
      例如6=1＋2＋3.编程找出1000以内的所有完数。
      要用数组存因子,一个因子能除尽就存到数组里
      数组的长度不能设定为变量，但每个位可以为变量
      因子肯定在 1~这个数一半 之间
**/
#if(1)
#include <stdio.h> //要用数组存因子
#define SCOPE 1000
int main(void)
{
    int i,j,k,n;
    int sum, array[200]; //数组定义不能是变量，位可以是

    for(i=1; i<=SCOPE; i++)
    {
       sum=array[0]=1; //sum赋值1
       k=0;
       for(j=2; j<=(i/2); j++) //因子在1~此数一半
       {
           if(i%j==0)
           {
            array[++k]=j;
            sum += j;
           }
       }

       if(sum == i)
       {
           printf("%d=%d", i, array[0]);//打印i

           for(n=1; n<=k; n++)//打印数组数
           {
               printf("+%d", array[n]);
           }
            printf("\n");
       }
    }
    return 0;

}

#endif


#if(0)//标准
#include<stdio.h>
#define N 1000
int main()
{
    int i,j,k,n,sum;
    int a[256];
    for(i=2;i<=N;i++)
    {
        sum=a[0]=1;
        k=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[++k]=j;
            }

        }
        if(i==sum)
        {
            printf("%d=%d",i,a[0]);
            for(n=1;n<=k;n++)
                printf("+%d",a[n]);
            printf("\n");
        }

    }
    return 0;
}
#endif

