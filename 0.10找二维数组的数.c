/**
问题:设置一个二维数组 行从左到右递增，列从上到下递减。输入一个数判断是否有该数？

解题思路：先定义一个二位数组，scanf函数输入数。两层for循环嵌套，
          从左到右从上到下找这个数。if判断找到了输出数字和行列
**/
#include <stdio.h>
int main(void)
{
    int combine[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int seek;
    int i,j;

    printf("请输入要找寻的数：");
    scanf("%d", &seek);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if( combine[i][j] == seek)
            {
                printf("找到了这个数，这个数是%d", seek);
                printf("他在%d*%d处",i ,j);
            }
        }
    }
}
