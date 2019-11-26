/**
题目：输入数组，数组中最大的与第一个元素交换，数组中最小的与最后一个元素交换，输出数组。
分析：设定数组大小   输入数组元素   进行交换

搞清一个概念：数组本来就是指针  a[10]的a就是指针代表一个地址
              所以用不着*a去取值，直接a[i]就是值。
**/
#include <stdio.h>
//交换元素函数
void exchange(int *s, int n);  //s是传过去的数组，n是长度
//打印数组函数
void printf_s(int *s, int n);

int main(void)
{
    int a[20], l,i;
    printf("数组长度<20\n");
    printf("请输入数组长度:");
    scanf("%d", &l);
    printf("请输入%d个元素:", l);

    for(i=0; i<l; i++)
    {
        scanf("%d", &a[i]);   //scanf的%d后不要加任何东西，不然输入的数据会变多
    }

    exchange(a, l);
//打印数组函数
    printf_s(a, l);

    return 0;

}
void exchange(int *s, int n)  //s是传过去的数组，n是长度,
{                             //数组传过去本来就是指针 所以函数要定义为指针
//最大的和第一个数替换
    int i, max=s[0], a=0;
    for(i=0; i<n; i++)
    {
        if(s[i]>max)
        {
            max =s[i]; //最大的数给max
            a = i;     //序号给a
        }
    }
    s[a] = s[0];
    s[0] = max;
//最小的和倒数第二个数替换
    int j, min=s[n-1], b=0; //数组最后一位是\0
    for(j=0; j<n; j++)
    {
        if(s[j]<min)
        {
            min = s[j];
            b = j;
        }
    }
    s[b]=s[n-1];
    s[n-1]=min;
}


//打印数组函数
void printf_s(int *s, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t", s[i]);
    }
}

/**
//\n\t这一堆东西在scanf中的作用是让scanf忽略尽可能多的空格，
而不是指定用户一定要输入一个空行。当scanf遇到\n后，它会读取
尽可能多的空格（空格包括普通的空格,\t,\n等），直到它读到一
个非空格的字符才会结束。比如输入的多一个字符就会让scanf结束
**/

