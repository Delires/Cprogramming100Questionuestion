/**
��Ŀ����һ���������ҳ������֮�͵����ұ�֮�͵������
�����������飬forѭ��ѡ��i������for��Ƕ��iǰ֮����i��֮�ͣ�����if����ж�
**/

/**
����ʵ�����ȥ�ı�����������������ݣ����಻�øı�
**/
#include <stdio.h>
int main(void)
{
    int sum1=0, sum2=0;
    int i, j, k;
    int combine[11]={1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5};
    for(i=0; i<11; i++)
    {
     for(j=0; j<=i; j++)
      {
        sum1 = sum1+combine[j];
      }
     // printf("%d\t", sum1);



      for(k=10; k>=i; k--)
      {
        sum2 = sum2+combine[k];
      }
      //printf("%d\t", sum2);



      if(sum1 == sum2)
      {
          printf("\n������ǵ�%d��\nǰ���ֺ󲿷���ȵĺ�Ϊ%d",combine[i],sum1);
      }

      sum1 = 0;
      sum2 = 0;

    }

    return 0;

}
