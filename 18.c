/**
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
      例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

程序分析：关键是计算出每一项的值。10的次方函数相加
          输入决定几个数相加即循环次数
**/
#if(1) //自己思路
#include <stdio.h>
int main(void)
{
    int time,a, b, i, sum=0;
    printf("请输入相加的数a 和 相加的次数time:");
    scanf("%d %d", &a, &time);

    b=a;
    for(i=0; i<time; i++)
    {
       sum +=a;
       a = a*10+b;
    }
    printf("a+aa+aaa+aaaa+aa...a=%d", sum);
    return 0;
}
#endif



#if(0)//while循环也可以
while(time)
{
    sum += a;
    a = a*10+b;
    time--;
}

#endif
