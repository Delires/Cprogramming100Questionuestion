/**
链表：链表是由结构体组成的，结构体的一个变量指向下一个结构体地址。多个结构体连接起来就是链表了。
      链表分为静态链表 和 动态链表
      静态链表 ：直接设置多个结构体，给结构体直接赋值。这样的内存是连续的。
      动态链表 ：开辟多个结构体的内存。开辟出来的内存的不是连续，而是动态的。

题目:建立一个链表。先输入链表个数，然后给链表的节点赋值。再打印出来
**/
#if(0) //静态链表
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
typedef struct NODELINK   //定义结构体
{
  int number;
  struct NODELINK *next;    //struct *next   ==  Link_Code *next 但Link_Code 在后面不能提前用
}Link_Code;
//typedef定义 可用Link_Code声明    没typedef 只能用struct xxx声明
int main(int argc, char *argv[])
{
    Link_Code  Node1 = {1, NULL};  //定义的结构体初始化用{}
    struct NODELINK  Node2 = {2, NULL};
    struct NODELINK  Node3 = {3, NULL};

    Node1.next = &Node2;
    Node2.next = &Node3;
    Node3.next = NULL;    //串起链表

    struct NODELINK  *head = &Node1;//定义个头链

    while(head != NULL)
    {
        printf("%d\n", head->number);   //head定义是一个指针，所以必须->操作 不能.
        head = head->next;
    }

    system("pause");
    return 0;
}
#endif



#if(0) //动态链表，用指针直接开辟内存
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
    Link_de *NODE3; //定义三个指向结构体指针，他们三个内存非连续。
                    //并给指针开辟内存大小，否则野指针
    NODE1 = (Link_de*)malloc(sizeof(Link_de));
    NODE2 = (Link_de*)malloc(sizeof(Link_de));
    NODE3 = (Link_de*)malloc(sizeof(Link_de));

//注意指针操作用 ->  要存东西所以要分配内存
    NODE1->data = 1;
    NODE2->data = 2;
    NODE3->data = 3;

//开始连接链表
    NODE1->next = NODE2;  //NODE2本来就是指针 不需要&NODE2
    NODE2->next = NODE3;
    NODE3->next = NULL;

//设置头链表
    Link_de *head = NODE1;

    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }

}
#endif





/**
指针函数，简单的来说，就是一个返回指针的函数，其本质是一个函数，而该函数的返回值是一个指针。
声明格式为：*类型标识符 函数名(参数表)
**/

#if(1) //创造链表，输入节点个数，输入每个节点数据
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct LIAN
{
    int data;
    struct LIAN *next;
} LNode, *LinkList;
//结构体typedef重命名为 LNODE 和 指针

LinkList Creat_LINK(int n);      //创造链表函数,指针函数。返回的是指针
void printf_s(LinkList h); //打印数组函数

int main(void)
{
    int m;
    LinkList head=NULL; //用来存放头节点

    printf("输入链表节点个数:");
    scanf("%d", &m);
    head = Creat_LINK(m);  //产生这么长节点的链表
                           //返回的指针地址赋给head

    printf("链表值为:\n");
    printf_s(head);

    system("pause");
    printf("\n\n");
    return 0;
}


void printf_s(LinkList h) //h是个指针
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
    l = (LNode*)malloc(sizeof(LNode)); //l要存放值，所以要分配空间
    if(!l) return 0;//确保l分配的内存为空的
    l->next = NULL;  //让l别胡指
    q = l; //q也是变得，之所以弄个l，是让l作为链表的首地址

    for(i=1; i<=n; i++)  //根据节点个数赋值
    {
        p = (LNode*)malloc(sizeof(LNode));  //给p赋值
        printf("请输入第%d个链表值", i);
        scanf("%d", &(p->data) );  //data是int型要加&

        p->next = NULL; //让p别乱连
        q->next = p;    //q连p

        q = p;   //再把p给q 继续连下一个
    }
    return l; //l是空的，它连的下一个才有值
}
#endif
