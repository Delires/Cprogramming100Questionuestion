/**
��Ŀ���ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
����:��ָ�������
**/
#if(0) //��ָ�뷴ת��ַ
#include <stdio.h>

void rever(char *p); //������ת���������ݹ�ȥ���Ǹ�ָ��

int main(void)
{
    char array[]= "www.runoob.com"; //�ַ���ֱ�Ӹ�ֵ
    printf("%s\n",  array); //���������ǵ�ַ����ӡ�����ַ�Ķ���
    rever(array); //�������ǵ�ַ
    printf("%s\n", array);
}

void rever(char *p) //���庯��
{
//�������鳤��
    int len=0;
    char *s = p;
    while(*s != '\0') //һ�ỹ��pȡֵ  s��ֵ����ֵֹͣ
    {
        len++;  //�������׵�ַ \0ĩ��ַ
        s++;
    }

//ת������
    int i=0;   //&ȡַ  *ȡֵ  ���һ�ַ���\0
    char c;//�м����
    while(i <= (len-1)/2) //ǰ�벿�ָ���벿��
    {
        c = *(p+i);
        *(p+i) = *(p+len-1-i);
        *(p+len-1-i)= c;
        i++;
    }

}

#endif




#if(1)//�Լ�д
#include <stdio.h>
void revers(char *p)
{
//�����鳤��
    char *l=p;//��l����ַ ����ʱ�ż�*
    int len=0;
    while(*l != '\0') //*l lȡֵ
    {
        len++;
        l++;
    }

//ǰ�󽻻�
    int i=0;
    char c;//�м����
    while(i <= len/2-1) //len/2-1 �� (len-1)/2 һ��
    {
        c = *(p+len-1-i);
        *(p+len-1-i)=*(p+i);
        *(p+i)=c;
        i++;
    }

}

int main(void)
{
    char chuan[]="www.runoob.com";
    printf("%s\n", chuan); //������ʵ����ָ��
    revers(chuan);
    printf("%s\n", chuan);
    return 0;
}
#endif








#if(0)//����
#include <stdio.h>

int main(void)
{
    char ch[14] = "www.runoob.com";
    int i;
    for(i=13; i>=0; i--)
    {
        printf("%c", ch[i]);
    }
}
#endif
