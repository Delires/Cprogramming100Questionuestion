/**
猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
               第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上
               都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下
               一个桃子了。求第一天共摘了多少。
分析:反响考虑问题，从第十天开始算。前一天/2-1=今天。 则前一天=(今天+1)*2.
     10次循环就算出来辣
     但可以细化这个函数。。。。。。。比如,最后一天桃子数，天数，可以手动输入
**/
#if(0)//for语句
#include <stdio.h>
int main(void)
{
    int Remain_P_N=1, All_P_N, Dealy, i;
    for(i=0; i<9; i++)
    {
        Remain_P_N = (Remain_P_N+1)*2;
    }
    All_P_N = Remain_P_N;

    printf("猴子共摘了%d个桃子",All_P_N);

    return 0;

}
#endif




#if(1)//while语句
#include <stdio.h>
int main(void)
{
    int r=1, a, i=9;
    while(i)
    {
        r=(r+1)*2;
        a = r;
        i--;
    }


    printf("猴子共摘了%d个桃子",a);

    return 0;

}




#endif
