/**
��Ŀ:��һ��3*3����Խ���Ԫ��֮��
��������Ϊ����Ķ��壬��ֵ��һά������һ��for��������ά��������
**/
#include <stdio.h>
int main(void)
{
    int a[3][3];
    int sum=0,i,j;

    for(i=0; i<3; i++) //��ά���鸳ֵ
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        sum += a[i][i];
    }
    printf("�Խ��ߺ�Ϊ%d", sum);
}
