/**
��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
����: �ݹ�Ҫ�Լ�д������������if�����ݹ�
      �����ַ�getchar(); Ҫ��putchar����    ��������char array[5]/*char array

getchar() �紫�����һ�������������������ӦASCII����ַ�
          �紫�����һ���ַ�����ֱ�����
          ջ����������ԭ��������ĺ��ӡ����������

**/
#if(1)
#include <stdio.h>

void Zhan(int n); //����ջ��������ԭ��

int main(void)
{
  static char next;
  int i;
  i=5;
  printf("������5������");
  Zhan(i);
  printf("\n");

}

void Zhan(int n)//getchar�������ȫ������ջ���putchar��ӡʱ�����������ԭ��
{
    char next;
    if(n<=1)
    {
        next = getchar();
        printf("����Ľ��Ϊ");
        putchar(next);
    }
    else
    {
        next = getchar();
        Zhan(n-1);
        putchar(next); //ע���������ʹ�ӡһ��
    }
}

#endif













#if(1)
int main()
{
    char ch;
    int i;
    for(i=0; i<5; i++)
    {
        ch = getchar();

    }
    putchar(ch);  //��ӡ������ȴ�����һ��
                 //ջ������ ��printf putcharͬ������
}

#endif
