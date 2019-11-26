/**
题目：#if #ifdef和#ifndef的综合应用。
分析：#if #ifdef #ifndef 一般和#else 和 #endif 搭配使用，他们类似if{},不过他们的区块不是由{}组成而由搭配#endif组成

      #if()       #ifdef xxx                #ifndef xxx
                   执行以下程序            #define xxx
                  #eles                    函数名，数据定义
                   重新定义xxx            （一般在.h文件中）
      #endif      #endif                   #endif

      这种预处理都是为了防止变量/函数多重定义(因为头文件中包含头文件，不小心就重复定义了)

#undef命令，用于取消之前的#define命令(不论是否定义过，即使未定义为确保未重复定义也可以用)
      #define LUM 10
      #undef LUM     //则取消了LUM的定义
**/
#include <stdio.h>
#define MAX
#define MAXMUM(x,y)  (x>y)?x:y  //a?b:c三目运算符
#define MINMUM(x,y)  (x<y)?x:y

int main(void)
{
    int a=10, b=20;
    #ifdef MAX
       printf("更大的数字是%d\n", MAXMUM(a,b));
    #else
       printf("更小的数字是%d\n", MINMUM(a,b));
    #endif // MAX

    #ifdef MIN
       printf("更小的数字是%d\n", MINMUM(a,b));
    #else
       printf("更大的数字是%d\n", MAXMUM(a,b));
    #endif // MIN


    #undef MAX  //取消MAX定义
    #ifdef MAX
       printf("更大的数字是%d\n", MAXMUM(a,b));
    #else
       printf("更小的数字是%d\n", MINMUM(a,b));
    #endif // MAX

    #define MIN
    #ifdef MIN
    printf("更小的数字是%d\n", MINMUM(a,b));
    #else
    printf("更大的数字是%d\n", MAXMUM(a,b));
    #endif // MIN

    return 0;
}
