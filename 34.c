/**
题目：练习函数调用。设计一个打印Hlloworld函数
**/
#include <stdio.h>

void Hello(void); //声明函数，无返回值 无传递值

int main(void)
{
    int i;
    for(i=0; i<3; i++)
    {
       Hello();
       printf("\n");
    }

    return 0;
}

void Hello(void)
{
    printf("Hello world");
}
