/**
��Ŀ����#define������ϰ��
������ʲô�Ǻ궨�壬
       #define xxx number ����һ����ĸ(һ��Ϊ��д)������һ�����֣��������ķ���

    !!!���κ궨�壬���ֶ��������Ͷ��庯�����񣬵��ͺ�����һ�����궨��ֻ���滻�������㲻��ֵ
**/
#include <stdio.h>
#define SQ(X)  (X)*(X)//���κ궨��(���ƺ�������ֻ�Ǽ��滻)
#define TRUE 1
#define FALSE 0
int main(void)
{
    int number, again;
    again = 1;

    while(again)
    {
        printf("\nIntput a number��");
        scanf("%d", &number);
        if(number >= 50)
        {
            again = TRUE;
        }
        else
        {
            again = FALSE;
        }
        printf("\nThe square of number is %d", SQ(number) );
    }
    return 0;
}
