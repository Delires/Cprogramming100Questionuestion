/**
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
分析：1234可以写在个位十位百位，所以定义ijk，for循环
**/
#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1; i<5; i++)
    {
       for(j=1; j<5; j++)
       {
           for(k=1; k<5; k++)
           {
               if( (i!=j) && (i!=k)&& (j!=k) ) //二者以上的判断必须用&&
                {
                    printf("%d,%d,%d\n", i, j ,k);
                }
           }
       }
    }

    return 0;
}
