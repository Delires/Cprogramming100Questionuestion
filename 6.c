/**
��Ŀ����*�������ĸC��ͼ����
������forѭ�� ��ӡ*�ʹ�ӡ\n���ϡ�����ֽ�ϻ���c����״
**/
#include <stdio.h>
int main(void)
{
    int i;
//��2�У�3��*
    printf("  ");
    for(i=0; i<3; i++)
    {
        printf("**");
    }

//��1�У���1��һ��*
    printf("\n ");
    printf("*");

//����*
    for(i=0; i<3; i++)
    {
        printf("\n");
        printf("*");
    }

//��1�У���1��һ��*
    printf("\n ");
    printf("*");

//��2�У�3��*
    printf("\n  ");
    for(i=0; i<3; i++)
    {
        printf("**");
    }
}
