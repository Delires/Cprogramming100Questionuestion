/**
题目：打印楼梯，同时在爱心上方打印两个笑脸。
分析：先打印两个笑脸(找ASC码)，在和乘法口诀一样打印楼梯块
**/
#include <stdio.h>
int main(void)
{
    int i,j;
    printf("%c%c\n", 1, 2);
    for(i=2; i<15; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c",3);
        }
        printf("\n");
    }
}
