/**
��Ŀ�����9*9�ھ���
�������϶���forѭ����i��j�����к��У���\n
**/
#include <stdio.h>
int main(void)
{
    int i,j,k;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=i; j++)
        {
            k = j*i;
            printf("%d*%d=%-3d",j,i,k);    //%3d����ַ�ǰ��ռ3λ
        }                                  //%-3d����ַ�����ռ3λ
       printf("\n");
    }

    return 0;
}
