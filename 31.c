/**
题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继
      续判断第二个字母。一二字母都一样则输出星期几
分析: 星期一Mon 星期二Tues 星期三Wed 星期四Thur 星期五Fri 星期六Sat 星期日sun
      定义字符型变量，先用switch语句判断第一个字母，二四，六日需二次判断
**/
#include <stdio.h>
int main(void)
{
    char i,j; //定义字符变量    字符串变量要用指针间接赋值或数组直接赋值
    printf("请输入第一个字母(小写):");
    scanf("%c", &i);
    getchar(); //输入完有一个回车，必须用次语句消耗掉回车

    switch(i)
    {
    case 'm':
        printf("Monday星期一");
        break;
    case 'w':
        printf("Wednessday星期三");
        break;
    case 'f':
        printf("Friday星期五");
        break;
    case 't':
        printf("\n请输入第二个字母(小写):");
        scanf("%c", &j);
        if(j == 'u')
        {
            printf("Tuesday星期二");
        }
        else if(j == 'h')
        {
            printf("Thursday星期四");
        }
        else
        {
            printf("input error");
        }
        break;
    case 's':
        printf("\n请输入第二个字母(小写):");
        scanf("%c", &j);
        if(j == 'a')
        {
            printf("Saturday星期六");
        }
        else if(j == 'u')
        {
            printf("Sunday星期五");
        }
        else
        {
            printf("input error");
        }
        break;
    default:
        printf("input error");
    }
    return 0;
}
