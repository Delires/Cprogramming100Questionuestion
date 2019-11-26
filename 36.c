/**
题目:求100之内的素数。
分析：通过数学方法减少计算机计算量，除到一半即可
     用sqrt()开方函数，除到开方那个数，减少运算量，开方可能是float要强定义成int型
**/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n=0;
    for(i=2;i<=100;i++)
    {
        k=(int)sqrt(i);
        for(j=2;j<=k;j++)
           {
              if(i%j==0)
              {
                  break;
              }
           }
        if(j>k)//如果开方的都除不尽，那么比他大数必然除不尽。则为质数
        {
            printf("%2d ",i);
            n++;
            if(n%5==0)
                printf("\n");
        }
    }
    return 0;
}
