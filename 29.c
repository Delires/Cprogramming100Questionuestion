/**
��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ����
                                      ���������ӡ����λ���֡�
���������ѧ��ֽ��ÿһλ��������
          ��λ = x%1000/100
          ʮλ = x%100/10
          ��λ = x%10/1
**/
#include <stdio.h>
int main(void)
{
    int sum;
    int a,b,c,d,e;
    scanf("%d", &sum);

    a = sum%100000/10000;
    b = sum%10000/1000;
    c = sum%1000/100;
    d = sum%100/10;
    e = sum%10/1;

    if(a!=0) //�����λ��ʼ�ж��ǲ���0
    {
        printf("һ����5λ������Ϊ%d,%d,%d,%d,%d", e,d,c,b,a);
    }
    else if(b!=0)
    {
        printf("һ����4λ������Ϊ%d,%d,%d,%d", e,d,c,b);
    }
    else if(c!=0)
    {
        printf("һ����3λ������Ϊ%d,%d,%d", e,d,c);
    }
    else if(d!=0)
    {
        printf("һ����2λ������Ϊ%d,%d", e,d);
    }
    else if(e!=0)
    {
        printf("һ����1λ������Ϊ%d", e);
    }
    else
    {
        printf("һ����0λ��������");
    }

return 0;
}