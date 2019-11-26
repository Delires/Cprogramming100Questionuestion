/**
题目：有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。

程序分析：数组本来就是指针   构造函数时(*p,n) 或 (p[],n)
        输入要输入几位数？
        输入数字？
        要往后移几位？
        打印于哪里的数 和 移动m位后的数

  两个函数，打印函数，后移函数
**/

#include <stdio.h>
#include <stdlib.h>
void print_s(int *s, int n);    //void print_s(int s[], int n);
void move(int *s, int n, int m); //m移动位数

int main(void)
{
    int a[20],l, i ,m;
    printf("Input the long of array:");
    scanf("%d", &l);

    printf("Input the back bit is");
    scanf("%d", &m)

    printf("Please %d numbers", %l);
    for(i=0; i<l; i++)
    {
        scanf("%d", &a[i]);
    }

    print_s(a, l); //打印更改前

    move(a, l, m);
    print_s(a, l); //打印更改后

}

void print_s(int *s, int n)    //void print_s(int s[], int n);
{
   int i;
   for(i=0; i<n; i++)
   {
       printf("%d", s[i]);
   }
}
