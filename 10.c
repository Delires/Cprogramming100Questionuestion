/**
��Ŀ����ӡ¥�ݣ�ͬʱ�ڰ����Ϸ���ӡ����Ц����
�������ȴ�ӡ����Ц��(��ASC��)���ںͳ˷��ھ�һ����ӡ¥�ݿ�
**/
#include <stdio.h>
int main(void)
{
    int i,j;
    printf("%c%c\n", 1, 2);
    for(i=2; i<15; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c",3);
        }
        printf("\n");
    }
}
