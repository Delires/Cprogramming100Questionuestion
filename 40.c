/**
��Ŀ����һ���������������
�����������������м�ָ�ǰ�󽻻�
          ��ָ���Ȳ����鳤�ȣ���*ȡֵǰ�󽻻�
**/

#if(0)//������
#include <stdio.h>
int main(void)
{
    int a[11] ={0,1,2,3,4,5,6,7,8,9,10};
    int i, temp;

    for(i=0; i<=11/2; i++)
    {
        temp = a[i];
        a[i] = a[10-i];   //��0��ʼ��������11������a[10]
        a[10-i] = temp;
    }

    for(i=0; i<11; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

#endif




#if(1) //��ָ��   a[0]=*p a[1]=*(p+1) a[i]=*(p+i)
#include <stdio.h>
int main(void)
{
    int i, temp, a[11] ={0,1,2,3,4,5,6,7,8,9,10};
    int *p1;
    p1 = a;

    printf("��ָ���ӡԭ�����飺\n");
    for(i=0; i<11; i++)
    {
      printf("%d\t", *(a+i));
    }

    printf("\n\n");

    for(i=0; i<11/2; i++) //ָ�뽻��
    {
        temp = *(a+i);
        *(a+i) = *(a+10-i);
        *(a+10-i) = temp ;
    }

    printf("��ָ���ӡ����������飺\n");
    for(i=0; i<11; i++)
    {
      printf("%d\t", *(a+i));
    }

}
#endif
