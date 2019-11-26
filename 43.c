/**
题目：学习使用static的另一用法。　
分析：static放到模块中使用
**/
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num 变量为 %d \n",num);
        num++;
        {
            static int num=1;  //也可换成 auto int num=1，则输出总为1
            printf("内置模块 num 变量为 %d\n",num);
            num++;
        }
    }
    return 0;
}
