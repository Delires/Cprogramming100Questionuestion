/**
��Ŀ��ѧϰʹ��static����һ�÷�����
������static�ŵ�ģ����ʹ��
**/
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num ����Ϊ %d \n",num);
        num++;
        {
            static int num=1;  //Ҳ�ɻ��� auto int num=1���������Ϊ1
            printf("����ģ�� num ����Ϊ %d\n",num);
            num++;
        }
    }
    return 0;
}
