/**
�����������ɽṹ����ɵģ��ṹ���һ������ָ����һ���ṹ���ַ������ṹ�������������������ˡ�
      �����Ϊ��̬���� �� ��̬����
      ��̬���� ��ֱ�����ö���ṹ�壬���ṹ��ֱ�Ӹ�ֵ���������ڴ��������ġ�
      ��̬���� �����ٶ���ṹ����ڴ档���ٳ������ڴ�Ĳ������������Ƕ�̬�ġ�

��Ŀ:����һ���������������������Ȼ�������Ľڵ㸳ֵ���ٴ�ӡ����
**/
#if(0) //��̬����
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
typedef struct NODELINK   //����ṹ��
{
  int number;
  struct NODELINK *next;    //struct *next   ==  Link_Code *next ��Link_Code �ں��治����ǰ��
}Link_Code;
//typedef���� ����Link_Code����    ûtypedef ֻ����struct xxx����
int main(int argc, char *argv[])
{
    Link_Code  Node1 = {1, NULL};  //����Ľṹ���ʼ����{}
    struct NODELINK  Node2 = {2, NULL};
    struct NODELINK  Node3 = {3, NULL};

    Node1.next = &Node2;
    Node2.next = &Node3;
    Node3.next = NULL;    //��������

    struct NODELINK  *head = &Node1;//�����ͷ��

    while(head != NULL)
    {
        printf("%d\n", head->number);   //head������һ��ָ�룬���Ա���->���� ����.
        head = head->next;
    }

    system("pause");
    return 0;
}
#endif



#if(0) //��̬������ָ��ֱ�ӿ����ڴ�
#include <stdio.h>
#include <stdlib.h>

typedef struct LINK
 {
    int data;
    struct LINK *next;
 }Link_de;

int main(void)
{
    Link_de *NODE1;
    Link_de *NODE2;
    Link_de *NODE3; //��������ָ��ṹ��ָ�룬���������ڴ��������
                    //����ָ�뿪���ڴ��С������Ұָ��
    NODE1 = (Link_de*)malloc(sizeof(Link_de));
    NODE2 = (Link_de*)malloc(sizeof(Link_de));
    NODE3 = (Link_de*)malloc(sizeof(Link_de));

//ע��ָ������� ->  Ҫ�涫������Ҫ�����ڴ�
    NODE1->data = 1;
    NODE2->data = 2;
    NODE3->data = 3;

//��ʼ��������
    NODE1->next = NODE2;  //NODE2��������ָ�� ����Ҫ&NODE2
    NODE2->next = NODE3;
    NODE3->next = NULL;

//����ͷ����
    Link_de *head = NODE1;

    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }

}
#endif





/**
ָ�뺯�����򵥵���˵������һ������ָ��ĺ������䱾����һ�����������ú����ķ���ֵ��һ��ָ�롣
������ʽΪ��*���ͱ�ʶ�� ������(������)
**/

#if(1) //������������ڵ����������ÿ���ڵ�����
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct LIAN
{
    int data;
    struct LIAN *next;
} LNode, *LinkList;
//�ṹ��typedef������Ϊ LNODE �� ָ��

LinkList Creat_LINK(int n);      //����������,ָ�뺯�������ص���ָ��
void printf_s(LinkList h); //��ӡ���麯��

int main(void)
{
    int m;
    LinkList head=NULL; //�������ͷ�ڵ�

    printf("��������ڵ����:");
    scanf("%d", &m);
    head = Creat_LINK(m);  //������ô���ڵ������
                           //���ص�ָ���ַ����head

    printf("����ֵΪ:\n");
    printf_s(head);

    system("pause");
    printf("\n\n");
    return 0;
}


void printf_s(LinkList h) //h�Ǹ�ָ��
{
    LinkList p;
    p = h->next;
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

LinkList Creat_LINK(int n)
{
    LinkList l,p,q;
    int i;
    l = (LNode*)malloc(sizeof(LNode)); //lҪ���ֵ������Ҫ����ռ�
    if(!l) return 0;//ȷ��l������ڴ�Ϊ�յ�
    l->next = NULL;  //��l���ָ
    q = l; //qҲ�Ǳ�ã�֮����Ū��l������l��Ϊ������׵�ַ

    for(i=1; i<=n; i++)  //���ݽڵ������ֵ
    {
        p = (LNode*)malloc(sizeof(LNode));  //��p��ֵ
        printf("�������%d������ֵ", i);
        scanf("%d", &(p->data) );  //data��int��Ҫ��&

        p->next = NULL; //��p������
        q->next = p;    //q��p

        q = p;   //�ٰ�p��q ��������һ��
    }
    return l; //l�ǿյģ���������һ������ֵ
}
#endif
