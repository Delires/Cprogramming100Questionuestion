/**
��Ŀ���� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ������

������������鱾������ָ��   ���캯��ʱ(*p,n) �� (p[],n)
        ����Ҫ���뼸λ����
        �������֣�
        Ҫ�����Ƽ�λ��
        ��ӡ��������� �� �ƶ�mλ�����

  ������������ӡ���������ƺ���
**/

#include <stdio.h>
#include <stdlib.h>
void print_s(int *s, int n);    //void print_s(int s[], int n);
void move(int *s, int n, int m); //m�ƶ�λ��

int main(void)
{
    int a[20],l, i ,m;
    printf("Input the long of array:");
    scanf("%d", &l);

    printf("Input the back bit is");
    scanf("%d", &m)

    printf("Please %d numbers", %l);
    for(i=0; i<l; i++)
    {
        scanf("%d", &a[i]);
    }

    print_s(a, l); //��ӡ����ǰ

    move(a, l, m);
    print_s(a, l); //��ӡ���ĺ�

}

void print_s(int *s, int n)    //void print_s(int s[], int n);
{
   int i;
   for(i=0; i<n; i++)
   {
       printf("%d", s[i]);
   }
}
