/**
题目：取一个整数 a 从右端开始的 4～7 位。取高四为
程序分析：1.把a右移四位即可
          2.弄一个低4位为1的数~(~0<<4)  这个0不是1bit是0而是1type即00000000
          3. 12一与(&是0说了算，&1则a说了算)
**/
#if(0)  //八进制输入输出%o
#include <stdio.h>
int main(void)
{
    unsigned a,b,c,d;   //这里是进制运算长度不一定，但必须无符号
    printf("请输入一个数字\n");
    scanf("%o", &a); //以8进制形式存储
    d = a >> 4;

    b=~(~0<<4);   //~0=1111 1111   <<4=1111 0000  ~ =0000 1111
    c=d&b;
    printf("%o\n%o\n", a,c);
}
#endif



#if(0)  //十进制输入输出%d
#include <stdio.h>
int main(void)
{
    unsigned a,b,c,d;   //这里是进制运算长度不一定，但必须无符号
    printf("请输入一个数字\n");
    scanf("%d", &a); //以8进制形式存储
    d = a >> 4;

    b=~(~0<<4);   //~0=1111 1111   <<4=1111 0000  ~ =0000 1111
    c=d&b;
    printf("%d\n%d\n", a,c);
}

#endif




#if(1)  //直接右移四位输出，但这样容易出错。
        //还是要与一个第四位为1的数&才准确
#include <stdio.h>
int main(void)
{
    unsigned a;
    scanf("%d", &a);
    a >>= 4;
    printf("%d", a);
}
#endif
