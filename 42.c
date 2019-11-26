/**
题目：学习使用auto定义变量的用法。
分析：何为暂态变量auto？
        在一个模块中定义，则它在这个模块中是暂态值，每用一次就释放
        在函数外定义 则 和普通变量没区别
**/
#include <stdio.h>
int main(void)
{
    int i, num;
    num = 2;
    for(i=0; i<3; i++)
    {
       printf("num 变量为 %d \n",num);
       num++;
       {
            auto int num=1; //模块内的auto num每次都会给重新赋值，所以永远是1
            printf("内置模块 num 变量为 %d \n",num);
            num++;
       }
    }
    return 0;
}
