/**
register����(����CPU�����ٶȿ�)
1.���һ��������Ƶ������ȡʹ�þ���register����
2.register����ı�������CPU�У������ȡ�ٶȿ죬������ʹ��*&ָ��
3.register�ŵ�ֵ������CPU���ܵ�ֵ��һ��Ϊ����
4.�ںܶ�������л����register�Ķ��壬��Ϊ��û��Ҫ
5.static��̬�������ܶ���register
**/
#include <stdio.h>
int main(void)
{
    register int i;  //i����CPU�в�����ȡ�����������ٶȿ�
    int temp = 0;
    for(i=0; i<=100; i++)
    {
        temp += i;
    }
    printf("1��100�ĺ�Ϊ:%d", temp);
    return 0;
}
