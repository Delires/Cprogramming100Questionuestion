 /**
 题目：学习使用按位异或 ^。
      相同为0不同为1
程序分析：0^0=0; 0^1=1; 1^0=1; 1^1=0 。
 **/
#include <stdio.h>
int main(void)
{
   int a,b;
   a=77;     //77二进制是 100 1101    3二进制是000 0011

   b = a^3;  //100 1110 :78
   printf("b 的值为 %d \n",b);

   b ^= 7;   //7:000 0111  100 1001:73
   printf("b 的值为 %d \n",b);

   return 0;
}
