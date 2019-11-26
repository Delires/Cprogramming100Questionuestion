/**
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
分析:
  最大公约数 挨个除，把两个相等的，且最大的打印出来
  最小公倍数 看两个互相除能否除尽，就枚举找最小的
**/
#if(0) //穷举法
#include <stdio.h>
int main(void)
{
    int m,n,i,j;
    printf("please intput m,n:");
    scanf("%d", &m);
    scanf("%d", &n);
//找最大公约数
    for(i=1, j=1; i<=m && j<=n; i++,j++) //for语句可以多变量判断 i，j可同时写进去
    {
        if(m%i==0 && n%j==0 )
        {
          if(i == j)
           {
             printf("%d\t", i);//不完美，如何打印出的最后一个？
           }
        }
    }

    printf("\n");
//找最小公倍数
    if(m%n == 0)
    {
        printf("%d", m);
    }
    else if(n%m==0)
    {
        printf("%d", n);
    }
    else
    {
        for(i=(m>n?m:n) ;i<100000; i++)
        {
            if(i%n==0 && i%m==0)
            {
                break;
            }
        }
        printf("%d", i);
   }

   return 0;
}
#endif







#if(1)//科学方法
/**
分析：
最小公倍数数=输入两数之积/最大公约数
最大公约数算法:辗转相除法(欧几里得算法)
          必须大数除小数 a/b,余数r。0<=r, a=b, b=r,返回第一步
**/

#include <stdio.h>
int main(void)
{
    int m,n;
    int r,t,p; //r余数 t中间量 p乘积
    printf("请输入两个数字，并以空格隔开:");
    scanf("%d%d", &m, &n);

    if(m<n)
    {
      t=n;
      n=m;
      m=t;
    }

    p=m*n;

    while(r != 0) //r不是0就一直循环
    {
        r=m%n;

        if(r==0) //打印放到这可以巧妙地打印出最小公约数
        {
            printf("最大公约数是%d\n", n);
            printf("最小公倍数是%d\n", p/n);
        }

        m=n;
        n=r;
    }

    return 0;

}






#endif
