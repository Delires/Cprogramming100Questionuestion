/**
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��
����������Ŀ����(a>b)?a:b
**/
#include <stdio.h>
int main(void)
{
    float score;
    char grad;

    printf("�����������");
    scanf("%f", &score);

    if( score > 100)
    {
        printf("error");
    }

    else
    {
        grad = (score>=90)?'A':( (score>=60)?'B':'C' );

        printf("%c", grad);
    }
}
