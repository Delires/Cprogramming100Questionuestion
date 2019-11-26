/**
题目:求一个3*3矩阵对角线元素之和
分析：而为数组的定义，赋值。一维数组用一个for操作，二维就用两个
**/
#include <stdio.h>
int main(void)
{
    int a[3][3];
    int sum=0,i,j;

    for(i=0; i<3; i++) //二维数组赋值
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        sum += a[i][i];
    }
    printf("对角线和为%d", sum);
}
