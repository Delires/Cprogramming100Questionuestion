/**
��Ŀ����ϰ�������á����һ����ӡHlloworld����
**/
#include <stdio.h>

void Hello(void); //�����������޷���ֵ �޴���ֵ

int main(void)
{
    int i;
    for(i=0; i<3; i++)
    {
       Hello();
       printf("\n");
    }

    return 0;
}

void Hello(void)
{
    printf("Hello world");
}
