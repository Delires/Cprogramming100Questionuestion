/**
题目：利用递归方法求1~5!
分析：什么是递归
      递归:在调用有个函数的过程中又调用这个函数本身，无限循环
           一旦满足退出条件，就退出。退出条件一般是if判断语句
      例如:int f(int x)
      {
      int y, z;
      z=f(y);    //又一次调用函数本身
      return(2*z);
      }

      如5!等于4!*5,而4!=3!*4
      可用下面递归公式表示: n=fn_1*4!
      n=1        (n=0,1)
      n*(n-1)!   (n>1)
**/
#include <stdio.h>
int factorial(int x);//声明函数 有返回值 有赋值

int main(void)//主函数
{
    int a,i;
    for(i=1; i<=5; i++)
    {
      a=factorial(i);
      printf("%d!=%d\n",i ,a);
    }
}

int factorial(int x)//定义函数
{
    int temp;
    if(x==0 || x==1) //if语句结束
    {
        temp=1;      //当执行到x=0/1时, factorial(1)返回值为1结束
    }
    else
    {
        temp = factorial(x-1)*x; //递归，当x不是1/0就不断执行这个函数.
    }
     return temp;
}

