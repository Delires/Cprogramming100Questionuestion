/**
题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
程序分析：学会分解出每一位数。
**/\
#include <stdio.h>
int main(void)
{
    int a,b,c,d,e;
    int sum;
    scanf("%d", &sum);

//分解数
    a = sum%100000/10000;
    b = sum%10000/1000;
    c = sum%1000/100;
    d = sum%100/10;
    e = sum%10/1;

    if( (a==e) && (b==d) )
    {
        printf("%d是回文数", sum);
    }
    else
    {
        printf("%d不是回文数", sum);
    }
}
