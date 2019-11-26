/**
题目：输入3个数a,b,c，按大小顺序输出。

程序分析：利用指针方法。   *取值  &取址
          构造一个指针定义的函数
**/
#include <stdio.h>
void exchang(int *s1, int *s2);  //定义指针函数，赋值为两个地址

int main(void)
{
    int a,b,c;
    int *p1, *p2, *p3;  //定义时带*  其余带*是取值 &取址

    printf("输入三个数字：");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a; //&  abc地址赋过去
    p2 = &b;
    p3 = &c;

//任意两个比i，如果大 就把大的放后面
    if(a>b)
        exchang(p1, p2);
    if(a>c)
        exchang(p1, p3);
    if(b>c)
        exchang(p2, p3);

    printf("%d %d %d",*p1, *p2, *p3);  //*p1, *p2, *p3 和 a b c都行
}                                      //不管abc如何交换 p1 p2 p3 都指的那片地址

void exchang(int *s1, int *s2)
{
    int *t;
    t=(int*)malloc(sizeof(int)); //用malloc给指针t分配空间，不然指针没空间运行会卡死

    *t = *s1;
    *s1 = *s2;
    *s2 = *t;
}

/**
1.必须给指针分配空间或把一个值地址才能用，不然
直接定义一个指针去进行数据转换是不行的。malloc()
函数给指针分配空间。
 int *a
 a= (elemtype*)malloc(10*sizeof(elemtype))
 或
 a= (elemtype*)malloc(number)


 **/
