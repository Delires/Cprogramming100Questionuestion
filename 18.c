/**
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
      ����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

����������ؼ��Ǽ����ÿһ���ֵ��10�Ĵη��������
          ���������������Ӽ�ѭ������
**/
#if(1) //�Լ�˼·
#include <stdio.h>
int main(void)
{
    int time,a, b, i, sum=0;
    printf("��������ӵ���a �� ��ӵĴ���time:");
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



#if(0)//whileѭ��Ҳ����
while(time)
{
    sum += a;
    a = a*10+b;
    time--;
}

#endif
