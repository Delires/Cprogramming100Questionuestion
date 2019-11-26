/**
题目：用*号输出字母C的图案。
分析：for循环 打印*和打印\n相结合。现在纸上画出c的形状
**/
#include <stdio.h>
int main(void)
{
    int i;
//空2列，3个*
    printf("  ");
    for(i=0; i<3; i++)
    {
        printf("**");
    }

//空1行，空1列一个*
    printf("\n ");
    printf("*");

//三行*
    for(i=0; i<3; i++)
    {
        printf("\n");
        printf("*");
    }

//空1行，空1列一个*
    printf("\n ");
    printf("*");

//空2列，3个*
    printf("\n  ");
    for(i=0; i<3; i++)
    {
        printf("**");
    }
}
