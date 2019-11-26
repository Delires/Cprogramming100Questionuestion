/**
题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，
      他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一
      个人大2岁。最后问第一个人，他说是10岁。请问第五个人多大？

分析：递归问题，设计一个函数。如果没小于5次就继续加2
**/
#include <stdio.h>

int Years(int n); //声明递归函数

static int sum;
int main(void)
{
    int i;
    sum=10;
    i = 5;
    sum = Years(i);
    printf("第一个人%d岁", sum);
    return 0;
}

int Years(int n)
{
    if(n<=2)
    {
      sum += 2;
    }
    else
    {
      sum += 2;
      Years(n-1);
    }
    return sum;
}
