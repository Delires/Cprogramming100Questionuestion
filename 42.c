/**
��Ŀ��ѧϰʹ��auto����������÷���
��������Ϊ��̬����auto��
        ��һ��ģ���ж��壬���������ģ��������ֵ̬��ÿ��һ�ξ��ͷ�
        �ں����ⶨ�� �� ����ͨ����û����
**/
#include <stdio.h>
int main(void)
{
    int i, num;
    num = 2;
    for(i=0; i<3; i++)
    {
       printf("num ����Ϊ %d \n",num);
       num++;
       {
            auto int num=1; //ģ���ڵ�auto numÿ�ζ�������¸�ֵ��������Զ��1
            printf("����ģ�� num ����Ϊ %d \n",num);
            num++;
       }
    }
    return 0;
}
