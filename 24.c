/**
��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...
      ���������е�ǰ20��֮�͡�
������forѭ��ÿ�Σ�2��a1=a2��a2=a1

ѧϰ�㣺fraction=fraction+(k/j);�ǶԵ�
        fraction=(k/j)   fraction+=fraction;  �Ǵ��  fraction+=(k/j)

**/
#if(1)//�ҵ�
#include <stdio.h>
int main(void)
{
    float i,j=1.0 ,k=2.0;
    float fraction=0;
    for(i=0; i<20; i++)//ѭ��20�μ�
    {
        fraction+=(k/j);  //����Ҫдǰͷ����һ����2/1
                           //z����д����������ǶԵ�
        k=j+k;
        j=k-j;
    }
    printf("%f\t", fraction);

    return 0;
}
#endif








#if(0)//��׼��
#include <stdio.h>
int main()
{
    int i,t;
    float sum=0;
    float a=2,b=1;
    for(i=1;i<=20;i++)
    {
        sum=sum+a/b;  //                      2/1
        t=a;          //t=a=2 a=a+b=3 b=t=2   3/2
        a=a+b;        //t=a=3 a=a+b=5 b=t=3   5/3
        b=t;
    }
    printf("%9.6f\n",sum);
}
#endif
