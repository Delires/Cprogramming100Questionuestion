/**
��Ŀ����1+2!+3!+...+20!�ĺ͡����������мӵ�20������ˣ��ӵ�10�Ľ׳�
���������㣬һ���������һ�ο��Ƴ��forѭ������������
**/
#if(1)
#include <stdio.h>
int main(void)
{
    long i, j,factorial=1, sum;
    for(i=1; i<=10; i++)
    {
        for(j=i; j>=i; j--)//��Сѭ��
        {
           factorial *= j;
        }
        sum +=factorial;
    }
    printf("%ld", sum);

    return 0;
}
#endif





