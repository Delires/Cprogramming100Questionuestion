/**
��Ŀ����10��������С����������
��������ð�ݷ���������汾��ָ����дһ��

scanf���ܸ�ָ�븳ֵ������
**/

#if(0) //ð�ݷ�
#include <stdio.h>
#define N 10 //���������
int main(void)
{
    int a[N], i, j, temp;

    printf("Pleae intput ten number:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<N; i++) //ð�ݷ�����ѭ�������Ƚ�
    {
        for(j=i+1; j<N; j++)
        {
            if(a[i] > a[j]) //С����ǰ
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("˳��Ϊ:");
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
    printf("������ 10 �����֣�\n");
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
    printf("��������:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


#endif
