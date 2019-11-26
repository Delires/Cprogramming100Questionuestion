/**
题目：输出9*9口诀。
分析：肯定用for循环，i和j控制行和列，和\n
**/
#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=i; j++)
        {
            k = j*i;
            printf("%d*%d=%-3d",j,i,k);    //%3d这个字符前面占3位
        }                                  //%-3d这个字符后面占3位
       printf("\n");
    }

    return 0;
}
