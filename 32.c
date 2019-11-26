/**
题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母
分析：用指针，这个完全抄答案

指针：i=3;       *a=3;//第二个语句的含义是将3赋给指针变量a所指向的变量。
      a=&i;
&取址 *取值
指针变量名的基本形式：类型说明符*变量名;

**/
#if(0) //根据位数删除字符
#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    char b[100]={0};
    int c;
    int i=0,j=0;
    printf("请输入你的字符串");
    scanf("%s",a);
    printf("请输入你想要删除第几位字符");
    scanf("%d",&c);
    for(i=0;i<strlen(a);i++)
    {
        if(i+1!=c) //如果位数不等于 输入位数 就继续下
        {
            b[j++]=a[i]; //反正是++j j++会乱码
           // j++;       //如果j++必须要初始化，不然不会补\0会乱码  不会打印到\0停止
        }
    }
    printf(" %s",b);

    return 0;

}






#endif







#if(0) //输入字符，删除字符串中的字符
#include<stdio.h>

int main()
{
    char s[100],*p , *q ; //pq指针
    puts("输入小于100个字符:");    //puts输出字符串到屏幕  gets输入字符串到内存
    gets(s);//字符输给s
    char del_x;
    printf("输入要删除的字符:");
    scanf("%c",&del_x);
    getchar(); //输入完有一个回车，必须用次语句消耗掉回车

    for(p=s,q=s; *p!='\0'; p++) //数组s的首地址给p和q指针， 只要取值*p不等于\0结束符 就一直运行
    {
       if(*p != del_x)  //如果*p取值不等于输入字符，就把*p的值挨个赋值给q，如果等于就跳过不赋值
       {
           *q++=*p;//其实对s再进行操作

       }
    }
    //*p=*q;
    *q=*p;  //p++到最后刚好是\0，把\0赋值过去q打印就有停止符

    puts(s); //p q都指向s的值，看似和s没关系，其实pq就在对s进行操作
                       //pq就像是门牌，指向s家，对s进行操作
    return 0;

}

#endif






#if(1)
#include<stdio.h>
int main(void)
{
    char a[100], *p, *q, del_x;
    puts("输入一串字符");
    gets(a);

    del_x='a';

    for(p=a, q=a; *p != '\0'; p++)
    {
        if(*p != del_x)
        {
          *q++ = *p;
        }
    }
    *q = *p;
    puts(a);

    return 0;

}
#endif

