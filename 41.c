/**
题目：学习static定义静态变量的用法。
分析：何为静态变量static?见于函数调用
        静态变量就是在使用后不释放的变量，第一调用后返回值不释放，普通变量调用后会释放
        静态定义不管调用几次只会赋值一次，普通定义每次调用都会重新赋值
      何为全局变量extern？
        全局变量 要先声明 再在某处定义，这样这个函数在工程中各个函数中都可以使用
**/

#if(0)
#include <stdio.h>
void fun(void); //静态变量多见于返回值
                //返回后值不释放
int main()
{
    for(int i=0; i<3; i++)
    {
        fun(); //每次调用i都会重新赋值0，而static_i只会赋值一次
    }
    return 0;
}

void fun(void)
{
    int i=0; //普通
    static int static_i=0; //静态(则只赋值一次)
    printf("i=%d\n", i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;
}


#endif





#if(1) //静态变量用于函数调用中，每次调用函数值不会释放
       //静态只赋值一次，普通的每次调用都赋值
void diaoyong(void);
int main(void)
{
     for(int i=0; i<3; i++)
     {
         diaoyong();
     }
     return 0;
}

void diaoyong(void)
{
    int i=0;
    static int static_i=0;

    i++;
    static_i++;
    printf("i=%d\n", i);  //每次调用i都会重新赋值
    printf("static_i=%d\n",static_i);
                         //static_i只赋值一次，每次调用都会在原有基础上变化
}
#endif
