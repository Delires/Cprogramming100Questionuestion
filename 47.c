/**
���κ궨�壬���ֶ��������Ͷ��庯�����񣬵��ͺ�����һ�����궨��ֻ���滻�������㲻��ֵ
   ��: #define SQ(X) X*X
�궨�����Ǽ��д�����Ҫ�д�����{}

**/
#if(0) //��
#include <stdio.h>
#define exchange(a,b) {int t; t=a; a=b; b=t;} //�궨�庯������abֵ
                    //�궨�����Ǽ��д�����Ҫ�д�����{}
int main(void)
{
    int x=10;
    int y=20;
    printf("x=%d, y=%d", x,y);
    exchange(x,y); //�궨�������滻���滻�������д���
    printf("\nx=%d, y=%d", x,y);
    return 0;
}
#endif




#if(1) //���ҹ�˼ �궨��һ������ab�ĺ���
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
