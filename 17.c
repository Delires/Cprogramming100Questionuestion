/**
题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
分析：先用函数输入一堆字符，用ASC码判断/'字符'。如果等于就定义的数加一
      标准格式 getchar()!= '\n'  回车不能输出出来，只能用\n代替
**/
#include <stdio.h>
int main(void)
{
    char c; //字符变量
    int space=0, number=0, word=0;

    printf("Please intput some numbers:\n");

    while( (c=getchar()) != '\n')//没输入回车就一直输入 ，输入一个字符统计一个
    {
        if( (c>='a'&&c<='z') || (c>='A'&&c<='Z') )
        {
           word++;
        }
        else if(c>='0' && c<='9')
        {
           number++;
        }
        else if(c == ' ')
        {
           space++;
        }
    }
    printf("字母个数为%d\n", word);
    printf("数字个数为%d\n", number);
    printf("空格个数为%d\n", space);

    return 0;
}
