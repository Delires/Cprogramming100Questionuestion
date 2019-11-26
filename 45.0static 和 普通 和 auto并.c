/**
区分 static变量  变量  auto变量之间的区别

extern >>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 普通  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>auto
每次调用函数都不会重新赋值    每次执行函数都会重新复制，但执行函数里不会重新赋值                执行函数里都会重新赋值
**/
#include <stdio.h>
void fun(void);
int main(void)
{
    int num=0,i;
    for(i=0; i<3; i++)
    {
       fun();
       num++;
       printf("num=%d\n",num);

       {
           auto int auto_num=0;
           auto_num++;
           printf("auto_num=%d\n",auto_num);

       }
       printf("\n\n");
    }
    return 0;
}
void fun(void)
{
    int i=0;
    static int static_i=0;
    printf("i=%d\n", i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;

}
