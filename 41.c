/**
��Ŀ��ѧϰstatic���徲̬�������÷���
��������Ϊ��̬����static?���ں�������
        ��̬����������ʹ�ú��ͷŵı�������һ���ú󷵻�ֵ���ͷţ���ͨ�������ú���ͷ�
        ��̬���岻�ܵ��ü���ֻ�ḳֵһ�Σ���ͨ����ÿ�ε��ö������¸�ֵ
      ��Ϊȫ�ֱ���extern��
        ȫ�ֱ��� Ҫ������ ����ĳ�����壬������������ڹ����и��������ж�����ʹ��
**/

#if(0)
#include <stdio.h>
void fun(void); //��̬��������ڷ���ֵ
                //���غ�ֵ���ͷ�
int main()
{
    for(int i=0; i<3; i++)
    {
        fun(); //ÿ�ε���i�������¸�ֵ0����static_iֻ�ḳֵһ��
    }
    return 0;
}

void fun(void)
{
    int i=0; //��ͨ
    static int static_i=0; //��̬(��ֻ��ֵһ��)
    printf("i=%d\n", i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;
}


#endif





#if(1) //��̬�������ں��������У�ÿ�ε��ú���ֵ�����ͷ�
       //��ֻ̬��ֵһ�Σ���ͨ��ÿ�ε��ö���ֵ
void diaoyong(void);
int main(void)
{
     for(int i=0; i<3; i++)
     {
         diaoyong();
     }
     return 0;
}

void diaoyong(void)
{
    int i=0;
    static int static_i=0;

    i++;
    static_i++;
    printf("i=%d\n", i);  //ÿ�ε���i�������¸�ֵ
    printf("static_i=%d\n",static_i);
                         //static_iֻ��ֵһ�Σ�ÿ�ε��ö�����ԭ�л����ϱ仯
}
#endif
