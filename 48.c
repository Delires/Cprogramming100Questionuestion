/**
��#define������ϰ3��
  ���Ѻ궨�嶨��Ϊ���κ궨��(������)
  ���Ǽ򵥵���ĳЩ����/���ŵ��滻
**/
#include <stdio.h>
#define LAG >
#define SMA <
#define EQ  ==
int main(void)
{
    int a,b;
    printf("Intput two numbers:");
    scanf("%d %d",&a, &b);

    if(a LAG b)      //�궨���滻����С�ڵ��ں�
    {
        printf("a����b");
    }
    else if(a SMA b)
    {
        printf("aС��b");
    }
    else if(a EQ b)
    {
        printf("a����b");
    }
    else
    {
       printf("�������");
    }
    return 0;
}
