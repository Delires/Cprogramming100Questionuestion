/**
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
���������ú�������һ���ַ�����ASC���ж�/'�ַ�'��������ھͶ��������һ
      ��׼��ʽ getchar()!= '\n'  �س��������������ֻ����\n����
**/
#include <stdio.h>
int main(void)
{
    char c; //�ַ�����
    int space=0, number=0, word=0;

    printf("Please intput some numbers:\n");

    while( (c=getchar()) != '\n')//û����س���һֱ���� ������һ���ַ�ͳ��һ��
    {
        if( (c>='a'&&c<='z') || (c>='A'&&c<='Z') )
        {
           word++;
        }
        else if(c>='0' && c<='9')
        {
           number++;
        }
        else if(c == ' ')
        {
           space++;
        }
    }
    printf("��ĸ����Ϊ%d\n", word);
    printf("���ָ���Ϊ%d\n", number);
    printf("�ո����Ϊ%d\n", space);

    return 0;
}
