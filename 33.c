/**
题目:判断一个数是否为质数
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
            break;     //一旦有被除数，打印“Not” 立马跳出 否则会打印多个
        }
        else
        {
            printf("It is prinme number");
            break;  //同理，例如8/3就不行 但不能打印8是素数
        }
     }

    }
}
