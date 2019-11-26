/**
register变量(放在CPU运行速度快)
1.如果一个变量被频繁的提取使用就用register定义
2.register定义的变量放在CPU中，因此提取速度快，但不能使用*&指针
3.register放的值必须是CPU接受的值，一般为整型
4.在很多编译器中会忽略register的定义，因为它没必要
5.static静态变量不能定义register
**/
#include <stdio.h>
int main(void)
{
    register int i;  //i放在CPU中不断提取，这样运行速度快
    int temp = 0;
    for(i=0; i<=100; i++)
    {
        temp += i;
    }
    printf("1到100的和为:%d", temp);
    return 0;
}
