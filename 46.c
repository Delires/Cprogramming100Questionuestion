/**
题目：宏#define命令练习。
分析：什么是宏定义，
       #define xxx number 定义一个字母(一般为大写)来代表一个数字，这样更改方便

    !!!带参宏定义，这种定义下来和定义函数很像，但和函数不一样。宏定义只做替换，不计算不求值
**/
#include <stdio.h>
#define SQ(X)  (X)*(X)//带参宏定义(类似函数，但只是简单替换)
#define TRUE 1
#define FALSE 0
int main(void)
{
    int number, again;
    again = 1;

    while(again)
    {
        printf("\nIntput a number：");
        scanf("%d", &number);
        if(number >= 50)
        {
            again = TRUE;
        }
        else
        {
            again = FALSE;
        }
        printf("\nThe square of number is %d", SQ(number) );
    }
    return 0;
}
