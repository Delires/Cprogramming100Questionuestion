/**
题目：学习使用按位与 &。  单片机中用来清除寄存器数据&=
       与是0说了算，按位与是把数化为二进制再算。
程序分析：0&0=0; 0&1=0; 1&0=0; 1&1=1 。
**/
#include <stdio.h>
int main(void)
{
   int a,b;
   a=77;     //77二进制是 100 1101    3二进制是000 0011

   b = a&3;  //000 0001
   printf("b 的值为 %d \n",b);

   b &= 7;   //
   printf("b 的值为 %d \n",b);

   return 0;
}
