/**
��Ŀ������3����a,b,c������С˳�������

�������������ָ�뷽����   *ȡֵ  &ȡַ
          ����һ��ָ�붨��ĺ���
**/
#include <stdio.h>
void exchang(int *s1, int *s2);  //����ָ�뺯������ֵΪ������ַ

int main(void)
{
    int a,b,c;
    int *p1, *p2, *p3;  //����ʱ��*  �����*��ȡֵ &ȡַ

    printf("�����������֣�");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a; //&  abc��ַ����ȥ
    p2 = &b;
    p3 = &c;

//����������i������� �ͰѴ�ķź���
    if(a>b)
        exchang(p1, p2);
    if(a>c)
        exchang(p1, p3);
    if(b>c)
        exchang(p2, p3);

    printf("%d %d %d",*p1, *p2, *p3);  //*p1, *p2, *p3 �� a b c����
}                                      //����abc��ν��� p1 p2 p3 ��ָ����Ƭ��ַ

void exchang(int *s1, int *s2)
{
    int *t;
    t=(int*)malloc(sizeof(int)); //��malloc��ָ��t����ռ䣬��Ȼָ��û�ռ����лῨ��

    *t = *s1;
    *s1 = *s2;
    *s2 = *t;
}

/**
1.�����ָ�����ռ���һ��ֵ��ַ�����ã���Ȼ
ֱ�Ӷ���һ��ָ��ȥ��������ת���ǲ��еġ�malloc()
������ָ�����ռ䡣
 int *a
 a= (elemtype*)malloc(10*sizeof(elemtype))
 ��
 a= (elemtype*)malloc(number)


 **/
