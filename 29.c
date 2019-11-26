/**
题目：给一个不多于5位的正整数，要求：一、求它是几位数，
                                      二、逆序打印出各位数字。
程序分析：学会分解出每一位数的数字
          百位 = x%1000/100
          十位 = x%100/10
          个位 = x%10/1
**/
#include <stdio.h>
int main(void)
{
    int sum;
    int a,b,c,d,e;
    scanf("%d", &sum);

    a = sum%100000/10000;
    b = sum%10000/1000;
    c = sum%1000/100;
    d = sum%100/10;
    e = sum%10/1;

    if(a!=0) //从最高位开始判断是不是0
    {
        printf("一共有5位，逆序为%d,%d,%d,%d,%d", e,d,c,b,a);
    }
    else if(b!=0)
    {
        printf("一共有4位，逆序为%d,%d,%d,%d", e,d,c,b);
    }
    else if(c!=0)
    {
        printf("一共有3位，逆序为%d,%d,%d", e,d,c);
    }
    else if(d!=0)
    {
        printf("一共有2位，逆序为%d,%d", e,d);
    }
    else if(e!=0)
    {
        printf("一共有1位，逆序为%d", e);
    }
    else
    {
        printf("一共有0位，无逆序");
    }

return 0;
}
