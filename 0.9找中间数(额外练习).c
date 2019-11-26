/**
题目：有一个组数，找出从左边之和等于右边之和的这个数
分析：用数组，for循环选择i，再在for里嵌套i前之和与i后之和，再用if语句判断
**/

/**
根据实际情况去改变数组个数和数组内容，其余不用改变
**/
#include <stdio.h>
int main(void)
{
    int sum1=0, sum2=0;
    int i, j, k;
    int combine[11]={1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5};
    for(i=0; i<11; i++)
    {
     for(j=0; j<=i; j++)
      {
        sum1 = sum1+combine[j];
      }
     // printf("%d\t", sum1);



      for(k=10; k>=i; k--)
      {
        sum2 = sum2+combine[k];
      }
      //printf("%d\t", sum2);



      if(sum1 == sum2)
      {
          printf("\n这个数是第%d个\n前部分后部分相等的和为%d",combine[i],sum1);
      }

      sum1 = 0;
      sum2 = 0;

    }

    return 0;

}
