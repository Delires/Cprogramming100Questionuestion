/**
将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
分析:用循环，从它自身开始除，一直除到1。除完没余数就保存
**/
#include <stdio.h>
int main(void)
{
    int n, i;

    printf("Please intput a number:");
    scanf("%d", &n);

    printf("%d=",n);

    for(i=2; i<=n; i++)
    {
        while(n%i == 0)//能除尽就继续
        {
            printf("%d", i);
            n /= i; //n等于每次除完后的n
            if( n != 1)
            {   //n没除到最后就打印*
              printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}
