/**
��Ŀ:�ж�һ�����Ƿ�Ϊ����
**/
#include <stdio.h>
int main(void)
{
    int num, i;
    printf("Please int put a number:");
    scanf("%d", &num);

    if(num<=0)
    {
        printf("Intput error");
    }

    else if(num==1 || num == 2)
    {
      printf("It is prinme number");
    }

    else
    {
     for(i=2; i<=num/2; i++)
     {
        if(num%i == 0)
        {
            printf("It's Not");
            break;     //һ���б���������ӡ��Not�� �������� ������ӡ���
        }
        else
        {
            printf("It is prinme number");
            break;  //ͬ������8/3�Ͳ��� �����ܴ�ӡ8������
        }
     }

    }
}
