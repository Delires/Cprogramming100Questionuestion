/**
题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
分析: 递归要自己写个函数，且用if结束递归
      输入字符getchar(); 要和putchar搭配    或用数组char array[5]/*char array

getchar() 如传入的是一个字数，则输出字数对应ASCII码的字符
          如传入的是一个字符，则直接输出
          栈的先入后出的原则，先输出的后打印出来！！！

**/
#if(1)
#include <stdio.h>

void Zhan(int n); //利用栈先入后出的原理

int main(void)
{
  static char next;
  int i;
  i=5;
  printf("请输入5个数：");
  Zhan(i);
  printf("\n");

}

void Zhan(int n)//getchar输入的数全储存在栈里，当putchar打印时遵从先入后出的原则
{
    char next;
    if(n<=1)
    {
        next = getchar();
        printf("输入的结果为");
        putchar(next);
    }
    else
    {
        next = getchar();
        Zhan(n-1);
        putchar(next); //注释了这条就打印一个
    }
}

#endif













#if(1)
int main()
{
    char ch;
    int i;
    for(i=0; i<5; i++)
    {
        ch = getchar();

    }
    putchar(ch);  //打印出来的却是最后一个
                 //栈先入后出 在printf putchar同样适用
}

#endif
