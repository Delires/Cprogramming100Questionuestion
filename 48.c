/**
宏#define命令练习3。
  不把宏定义定义为带参宏定义(做函数)
  而是简单的做某些数字/符号的替换
**/
#include <stdio.h>
#define LAG >
#define SMA <
#define EQ  ==
int main(void)
{
    int a,b;
    printf("Intput two numbers:");
    scanf("%d %d",&a, &b);

    if(a LAG b)      //宏定义替换大于小于等于号
    {
        printf("a大于b");
    }
    else if(a SMA b)
    {
        printf("a小于b");
    }
    else if(a EQ b)
    {
        printf("a等于b");
    }
    else
    {
       printf("输入错误");
    }
    return 0;
}
