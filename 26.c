/**
��Ŀ�����õݹ鷽����1~5!
������ʲô�ǵݹ�
      �ݹ�:�ڵ����и������Ĺ������ֵ������������������ѭ��
           һ�������˳����������˳����˳�����һ����if�ж����
      ����:int f(int x)
      {
      int y, z;
      z=f(y);    //��һ�ε��ú�������
      return(2*z);
      }

      ��5!����4!*5,��4!=3!*4
      ��������ݹ鹫ʽ��ʾ: n=fn_1*4!
      n=1        (n=0,1)
      n*(n-1)!   (n>1)
**/
#include <stdio.h>
int factorial(int x);//�������� �з���ֵ �и�ֵ

int main(void)//������
{
    int a,i;
    for(i=1; i<=5; i++)
    {
      a=factorial(i);
      printf("%d!=%d\n",i ,a);
    }
}

int factorial(int x)//���庯��
{
    int temp;
    if(x==0 || x==1) //if������
    {
        temp=1;      //��ִ�е�x=0/1ʱ, factorial(1)����ֵΪ1����
    }
    else
    {
        temp = factorial(x-1)*x; //�ݹ飬��x����1/0�Ͳ���ִ���������.
    }
     return temp;
}

