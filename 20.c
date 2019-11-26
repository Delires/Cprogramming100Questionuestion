/**

题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
      再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

分析：输入的数字，代表除的次数。
      100 50 25 12.5 每次除2^次数
**/
#include <stdio.h>
#define HIGH 100.0  //定义为浮点型出来才能是浮点型
int main(void)
{
  int n, i,time=1;
  float meter, all=100;
  printf("请输入落地的次数:");
  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
      time*=2;
      all +=(HIGH/time);
  }

  printf("共经过路程为%f\n", all);
  printf("第%d次高度为%f", n, HIGH/time);


  return 0;

}
