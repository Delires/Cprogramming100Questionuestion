/**
���� static����  ����  auto����֮�������

extern >>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ��ͨ  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>auto
ÿ�ε��ú������������¸�ֵ    ÿ��ִ�к����������¸��ƣ���ִ�к����ﲻ�����¸�ֵ                ִ�к����ﶼ�����¸�ֵ
**/
#include <stdio.h>
void fun(void);
int main(void)
{
    int num=0,i;
    for(i=0; i<3; i++)
    {
       fun();
       num++;
       printf("num=%d\n",num);

       {
           auto int auto_num=0;
           auto_num++;
           printf("auto_num=%d\n",auto_num);

       }
       printf("\n\n");
    }
    return 0;
}
void fun(void)
{
    int i=0;
    static int static_i=0;
    printf("i=%d\n", i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;

}
