/**
题目:有一个已经排好序的数组。现输入一个数，要求按原来的大小规律将它插入数组中。
分析:设置一维数组，挨个判断大小，找出前小后大的位置插入，后面的全部后移一位
     难点在于如何把数组的数整体后移一位
**/
#if(0) //把数组的数后移一位
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
    //temp1, temp2用于把数后移一位，end判断是否为最后，ij循环

  printf("原来数为:\n");
  for(i=0; i<10; i++)
  {
      printf("%d\t", a[i]);
  }
  printf("\n插入一个新的数字: ");
  scanf("%d", &number);

  end = a[9];
  if(number>end)
  {
      a[10] = number;
  }
  else
  {
      for(i=0; i<10; i++) //某个数大于number就把number放在这里
      {
          if(a[i]>number)
          {
            temp1 = a[i];
            a[i] = number;
            for(j=i+1; j<11; j++)//数组后移 重点
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

//打印出数据
  printf("原始数据为:\n");
  for(i=0; i<10; i++)
  {
      printf("%d\t", a[i]);
  }
//输入数据
  scanf("%d", &number);

//开始判断,把插入的数放到大于插入数的这个数位置
  end = a[9];
  if(number > end)
  {
      a[10] = number;
  }
  else
  {
      for(i=0; i<10; i++)
      {
          if( a[i]>number ) //如果一个数大于number就把number放在这位置
          {
              temp1 = a[i];
              a[i] = number;

              for(j=i+1; j<11; j++) //所有数往后移一位
              {
                  temp2 = a[j];
                  a[j] = temp1;
                  temp1 = temp2;
              }

              break;
          }
      }
  }

  for(i=0; i<11; i++) //打印出数
  {
      printf("%d\t", a[i]);
  }
  printf("\n");
  return 0;
}
#endif
