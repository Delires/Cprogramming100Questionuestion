/**
题目：求1+2!+3!+...+20!的和。编译器不行加到20就溢出了，加到10的阶乘
分析：两层，一层控制数，一次控制乘项，for循环乘完最后相加
**/
#if(1)
#include <stdio.h>
int main(void)
{
    long i, j,factorial=1, sum;
    for(i=1; i<=10; i++)
    {
        for(j=i; j>=i; j--)//向小循环
        {
           factorial *= j;
        }
        sum +=factorial;
    }
    printf("%ld", sum);

    return 0;
}
#endif





