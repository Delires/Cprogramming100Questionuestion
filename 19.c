/**
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
      ����6=1��2��3.����ҳ�1000���ڵ�����������
      Ҫ�����������,һ�������ܳ����ʹ浽������
      ����ĳ��Ȳ����趨Ϊ��������ÿ��λ����Ϊ����
      ���ӿ϶��� 1~�����һ�� ֮��
**/
#if(1)
#include <stdio.h> //Ҫ�����������
#define SCOPE 1000
int main(void)
{
    int i,j,k,n;
    int sum, array[200]; //���鶨�岻���Ǳ�����λ������

    for(i=1; i<=SCOPE; i++)
    {
       sum=array[0]=1; //sum��ֵ1
       k=0;
       for(j=2; j<=(i/2); j++) //������1~����һ��
       {
           if(i%j==0)
           {
            array[++k]=j;
            sum += j;
           }
       }

       if(sum == i)
       {
           printf("%d=%d", i, array[0]);//��ӡi

           for(n=1; n<=k; n++)//��ӡ������
           {
               printf("+%d", array[n]);
           }
            printf("\n");
       }
    }
    return 0;

}

#endif


#if(0)//��׼
#include<stdio.h>
#define N 1000
int main()
{
    int i,j,k,n,sum;
    int a[256];
    for(i=2;i<=N;i++)
    {
        sum=a[0]=1;
        k=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[++k]=j;
            }

        }
        if(i==sum)
        {
            printf("%d=%d",i,a[0]);
            for(n=1;n<=k;n++)
                printf("+%d",a[n]);
            printf("\n");
        }

    }
    return 0;
}
#endif

