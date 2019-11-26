/**
带参宏定义，这种定义下来和定义函数很像，但和函数不一样。宏定义只做替换，不计算不求值
   如: #define SQ(X) X*X
宏定义里是几行代码则要有大括号{}

**/
#if(0) //答案
#include <stdio.h>
#define exchange(a,b) {int t; t=a; a=b; b=t;} //宏定义函数交换ab值
                    //宏定义里是几行代码则要有大括号{}
int main(void)
{
    int x=10;
    int y=20;
    printf("x=%d, y=%d", x,y);
    exchange(x,y); //宏定义做简单替换，替换后面那行代码
    printf("\nx=%d, y=%d", x,y);
    return 0;
}
#endif




#if(1) //自我构思 宏定义一个交换ab的函数
#include <stdio.h>
#define EXCHANGE(x,y)   {int t; t=x; x=y; y=t;}
int main(void)
{
    int a=10,b=20;
    printf("a=%d\tb=%d\n", a,b);
    EXCHANGE(a,b);
    printf("a=%d\tb=%d\n", a,b);
    return 0;
}
#endif
