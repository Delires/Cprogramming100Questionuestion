/**
题目：对10个数进从小到大行排序。
分析：用冒泡法排序，数组版本和指针版各写一个

scanf不能给指针赋值！！！
**/

#if(0) //冒泡法
#include <stdio.h>
#define N 10 //设置数组宽
int main(void)
{
    int a[N], i, j, temp;

    printf("Pleae intput ten number:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<N; i++) //冒泡法两个循环挨个比较
    {
        for(j=i+1; j<N; j++)
        {
            if(a[i] > a[j]) //小的排前
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("顺序为:");
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
#endif




#if(1)
#include<stdio.h>
#define N 10
int main()
{
    int i,j,a[N],temp;
    printf("请输入 10 个数字：\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        int min=i;
        for(j=i+1;j<N;j++)
            if(a[min]>a[j]) min=j;
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("排序结果是:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


#endif
