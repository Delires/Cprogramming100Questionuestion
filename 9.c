/**
题目：要求输出国际象棋棋盘。
分析：国际象棋棋盘64个格，8*8，黑白相间的块■□
       for循环行和列,if判断打印
**/
#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
          if( (i+j)%2==0 )//偶数
          {
              printf("■");
          }
          else
          {
              printf("□");
          }
        }
        printf("\n");
    }

    return 0;
}
