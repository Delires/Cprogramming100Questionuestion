/**
题目：打印出如下图案（菱形）。
   *
  ***
 *****
*******
 *****
  ***
   *
分析：for循环肯定有，分两组每组得三个for一个是1~4行，一个是空格，一个是*。i控制行j控制列
**/
#include <stdio.h>
int main(void)
{
    int i, j, k;
//1~4行
    for(i=0; i<=3;i++)//控制4行
    {
        for(j=0; j<=2-i; j++)//打印3,2,1,0个空格
        {
            printf(" ");
        }
        for(k=0; k<=2*i; k++)//打印*
        {
            printf("*");
        }
        printf("\n");
    }
//5~7行
    for(i=0; i<3; i++)//3行
    {
        for(j=0; j<i+1; j++)//打印1,2,3个空格
        {
            printf(" ");
        }
        for(k=0; k<=4-2*i; k++)//打印5,3,1个*
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}


//printf("*");    printf("\n");
