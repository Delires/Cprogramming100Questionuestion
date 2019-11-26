/**
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
分析：用三目运算(a>b)?a:b
**/
#include <stdio.h>
int main(void)
{
    float score;
    char grad;

    printf("请输入分数：");
    scanf("%f", &score);

    if( score > 100)
    {
        printf("error");
    }

    else
    {
        grad = (score>=90)?'A':( (score>=60)?'B':'C' );

        printf("%c", grad);
    }
}
