/**
��Ŀ����������������m��n���������Լ������С��������
����:
  ���Լ�� ����������������ȵģ������Ĵ�ӡ����
  ��С������ ������������ܷ��������ö������С��
**/
#if(0) //��ٷ�
#include <stdio.h>
int main(void)
{
    int m,n,i,j;
    printf("please intput m,n:");
    scanf("%d", &m);
    scanf("%d", &n);
//�����Լ��
    for(i=1, j=1; i<=m && j<=n; i++,j++) //for�����Զ�����ж� i��j��ͬʱд��ȥ
    {
        if(m%i==0 && n%j==0 )
        {
          if(i == j)
           {
             printf("%d\t", i);//����������δ�ӡ�������һ����
           }
        }
    }

    printf("\n");
//����С������
    if(m%n == 0)
    {
        printf("%d", m);
    }
    else if(n%m==0)
    {
        printf("%d", n);
    }
    else
    {
        for(i=(m>n?m:n) ;i<100000; i++)
        {
            if(i%n==0 && i%m==0)
            {
                break;
            }
        }
        printf("%d", i);
   }

   return 0;
}
#endif







#if(1)//��ѧ����
/**
������
��С��������=��������֮��/���Լ��
���Լ���㷨:շת�����(ŷ������㷨)
          ���������С�� a/b,����r��0<=r, a=b, b=r,���ص�һ��
**/

#include <stdio.h>
int main(void)
{
    int m,n;
    int r,t,p; //r���� t�м��� p�˻�
    printf("�������������֣����Կո����:");
    scanf("%d%d", &m, &n);

    if(m<n)
    {
      t=n;
      n=m;
      m=t;
    }

    p=m*n;

    while(r != 0) //r����0��һֱѭ��
    {
        r=m%n;

        if(r==0) //��ӡ�ŵ����������ش�ӡ����С��Լ��
        {
            printf("���Լ����%d\n", n);
            printf("��С��������%d\n", p/n);
        }

        m=n;
        n=r;
    }

    return 0;

}






#endif
