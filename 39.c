/**
��Ŀ:��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĵ�С���ɽ������������С�
����:����һά���飬�����жϴ�С���ҳ�ǰС����λ�ò��룬�����ȫ������һλ
     �ѵ�������ΰ���������������һλ
**/
#if(0) //�������������һλ
int main(void)
{
   int a[11]= {1,4,6,9,13,16,19,28,40,100};
   int temp1, temp2, i,j ;

   temp1 = 0;
   for(i=0; i<11; i++)
   {
       temp2 = a[i];
       a[i] = temp1;
       temp1 = temp2;
   }

   for(j=0; j<11; j++)
   {
       printf("%d\t", a[j]);
   }
}
#endif




#if(0)
#include <stdio.h>
int main(void)
{
  int a[11] = {1,4,6,9,13,16,19,28,40,100};
  int temp1, temp2, end, i,j, number;
    //temp1, temp2���ڰ�������һλ��end�ж��Ƿ�Ϊ���ijѭ��

  printf("ԭ����Ϊ:\n");
  for(i=0; i<10; i++)
  {
      printf("%d\t", a[i]);
  }
  printf("\n����һ���µ�����: ");
  scanf("%d", &number);

  end = a[9];
  if(number>end)
  {
      a[10] = number;
  }
  else
  {
      for(i=0; i<10; i++) //ĳ��������number�Ͱ�number��������
      {
          if(a[i]>number)
          {
            temp1 = a[i];
            a[i] = number;
            for(j=i+1; j<11; j++)//������� �ص�
            {
                temp2 = a[j];
                a[j] = temp1;
                temp1 = temp2;
            }
            break;
          }
      }
  }

  for(i=0; i<11; i++)
  {
      printf("%d\t", a[i]);
  }
}

#endif






#if(0)
#include<stdio.h>
int main()
{
  int a[11] = {1,4,6,9,13,16,19,28,40,100};
  int temp1, temp2,number,end,i,j;

//��ӡ������
  printf("ԭʼ����Ϊ:\n");
  for(i=0; i<10; i++)
  {
      printf("%d\t", a[i]);
  }
//��������
  scanf("%d", &number);

//��ʼ�ж�,�Ѳ�������ŵ����ڲ������������λ��
  end = a[9];
  if(number > end)
  {
      a[10] = number;
  }
  else
  {
      for(i=0; i<10; i++)
      {
          if( a[i]>number ) //���һ��������number�Ͱ�number������λ��
          {
              temp1 = a[i];
              a[i] = number;

              for(j=i+1; j<11; j++) //������������һλ
              {
                  temp2 = a[j];
                  a[j] = temp1;
                  temp1 = temp2;
              }

              break;
          }
      }
  }

  for(i=0; i<11; i++) //��ӡ����
  {
      printf("%d\t", a[i]);
  }
  printf("\n");
  return 0;
}
#endif
