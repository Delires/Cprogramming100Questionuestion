/**
��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
����:��ѭ������������ʼ����һֱ����1������û�����ͱ���
**/
#include <stdio.h>
int main(void)
{
    int n, i;

    printf("Please intput a number:");
    scanf("%d", &n);

    printf("%d=",n);

    for(i=2; i<=n; i++)
    {
        while(n%i == 0)//�ܳ����ͼ���
        {
            printf("%d", i);
            n /= i; //n����ÿ�γ�����n
            if( n != 1)
            {   //nû�������ʹ�ӡ*
              printf("*");
            }
        }
    }
    printf("\n");
    return 0;
}
