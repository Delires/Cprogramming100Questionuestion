/**
��Ŀ��#if #ifdef��#ifndef���ۺ�Ӧ�á�
������#if #ifdef #ifndef һ���#else �� #endif ����ʹ�ã���������if{},�������ǵ����鲻����{}��ɶ��ɴ���#endif���

      #if()       #ifdef xxx                #ifndef xxx
                   ִ�����³���            #define xxx
                  #eles                    �����������ݶ���
                   ���¶���xxx            ��һ����.h�ļ��У�
      #endif      #endif                   #endif

      ����Ԥ������Ϊ�˷�ֹ����/�������ض���(��Ϊͷ�ļ��а���ͷ�ļ�����С�ľ��ظ�������)

#undef�������ȡ��֮ǰ��#define����(�����Ƿ��������ʹδ����Ϊȷ��δ�ظ�����Ҳ������)
      #define LUM 10
      #undef LUM     //��ȡ����LUM�Ķ���
**/
#include <stdio.h>
#define MAX
#define MAXMUM(x,y)  (x>y)?x:y  //a?b:c��Ŀ�����
#define MINMUM(x,y)  (x<y)?x:y

int main(void)
{
    int a=10, b=20;
    #ifdef MAX
       printf("�����������%d\n", MAXMUM(a,b));
    #else
       printf("��С��������%d\n", MINMUM(a,b));
    #endif // MAX

    #ifdef MIN
       printf("��С��������%d\n", MINMUM(a,b));
    #else
       printf("�����������%d\n", MAXMUM(a,b));
    #endif // MIN


    #undef MAX  //ȡ��MAX����
    #ifdef MAX
       printf("�����������%d\n", MAXMUM(a,b));
    #else
       printf("��С��������%d\n", MINMUM(a,b));
    #endif // MAX

    #define MIN
    #ifdef MIN
    printf("��С��������%d\n", MINMUM(a,b));
    #else
    printf("�����������%d\n", MAXMUM(a,b));
    #endif // MIN

    return 0;
}
