/**
��Ŀ��Ҫ����������������̡�
������������������64����8*8���ڰ����Ŀ����
       forѭ���к���,if�жϴ�ӡ
**/
#include <stdio.h>
int main(void)
{
    int i,j;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
          if( (i+j)%2==0 )//ż��
          {
              printf("��");
          }
          else
          {
              printf("��");
          }
        }
        printf("\n");
    }

    return 0;
}
