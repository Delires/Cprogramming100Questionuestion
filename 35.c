/**
题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
分析:用指针和数组
**/
#if(0) //用指针反转地址
#include <stdio.h>

void rever(char *p); //声明反转函数，传递过去的是个指针

int main(void)
{
    char array[]= "www.runoob.com"; //字符串直接赋值
    printf("%s\n",  array); //数组名就是地址，打印这个地址的东西
    rever(array); //数组名是地址
    printf("%s\n", array);
}

void rever(char *p) //定义函数
{
//测量数组长度
    int len=0;
    char *s = p;
    while(*s != '\0') //一会还用p取值  s的值不是停止值
    {
        len++;  //数组名首地址 \0末地址
        s++;
    }

//转换数据
    int i=0;   //&取址  *取值  最后一字符是\0
    char c;//中间变量
    while(i <= (len-1)/2) //前半部分给后半部分
    {
        c = *(p+i);
        *(p+i) = *(p+len-1-i);
        *(p+len-1-i)= c;
        i++;
    }

}

#endif




#if(1)//自己写
#include <stdio.h>
void revers(char *p)
{
//算数组长度
    char *l=p;//给l赋地址 定义时才加*
    int len=0;
    while(*l != '\0') //*l l取值
    {
        len++;
        l++;
    }

//前后交换
    int i=0;
    char c;//中间变量
    while(i <= len/2-1) //len/2-1 和 (len-1)/2 一样
    {
        c = *(p+len-1-i);
        *(p+len-1-i)=*(p+i);
        *(p+i)=c;
        i++;
    }

}

int main(void)
{
    char chuan[]="www.runoob.com";
    printf("%s\n", chuan); //这里其实就是指针
    revers(chuan);
    printf("%s\n", chuan);
    return 0;
}
#endif








#if(0)//数组
#include <stdio.h>

int main(void)
{
    char ch[14] = "www.runoob.com";
    int i;
    for(i=13; i>=0; i--)
    {
        printf("%c", ch[i]);
    }
}
#endif
