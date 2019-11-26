/**
题目：将一个数组逆序输出。
程序分析：用数组从中间分割前后交换
          用指针先测数组长度，在*取值前后交换
**/

#if(0)//用数组
#include <stdio.h>
int main(void)
{
    int a[11] ={0,1,2,3,4,5,6,7,8,9,10};
    int i, temp;

    for(i=0; i<=11/2; i++)
    {
        temp = a[i];
        a[i] = a[10-i];   //从0开始计数，第11个数是a[10]
        a[10-i] = temp;
    }

    for(i=0; i<11; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

#endif




#if(1) //用指针   a[0]=*p a[1]=*(p+1) a[i]=*(p+i)
#include <stdio.h>
int main(void)
{
    int i, temp, a[11] ={0,1,2,3,4,5,6,7,8,9,10};
    int *p1;
    p1 = a;

    printf("用指针打印原来数组：\n");
    for(i=0; i<11; i++)
    {
      printf("%d\t", *(a+i));
    }

    printf("\n\n");

    for(i=0; i<11/2; i++) //指针交换
    {
        temp = *(a+i);
        *(a+i) = *(a+10-i);
        *(a+10-i) = temp ;
    }

    printf("用指针打印交换后的数组：\n");
    for(i=0; i<11; i++)
    {
      printf("%d\t", *(a+i));
    }

}
#endif
