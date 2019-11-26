/**
题目：输入某年某月某日，判断这一天是这一年的第几天？

分析：首先判断年份(闰年2月29天，平年28天)
         能被4整除 不能被100整除 为闰年
         能被4整除 能被100整除 且被400整除才是闰年leap

      数组提取数字判断
**/
#include <stdio.h>
int main(void)
{
    int leap, month, day;  //年月日
    int year, num;        //year=0闰年， year=1平年  sum总日期


    printf("输入年：");
    scanf("%d", &leap);
    printf("\n");
    printf("输入月：");
    scanf("%d", &month);
    printf("\n");
    printf("输入日：");
    scanf("%d", &day);
    printf("\n");


    if(  leap%4 ==0 )  //判断闰年平年year=0闰年， year=1平年
    {
        if( leap%100 ==0)
        {
           if( leap%400 ==0 )
           {
              year=0;
           }
           else
           {
              year=1;
           }
        }
        else
        {
           year=0;
        }
    }
    else
    {
       year=1;
    }


    if(year == 1)
    {
        printf("Common year, The Feb have 28 day\n");
        if( month<=12 && month>=1)
        {
           switch(month)
           {
               case 1: num = 0; break;
               case 2: num = 31; break;
               case 3: num = 59; break;
               case 4: num = 90; break;
               case 5: num = 120; break;
               case 6: num = 151; break;
               case 7: num = 181; break;
               case 8: num = 212; break;
               case 9: num = 243; break;
               case 10: num = 273; break;
               case 11: num = 304; break;
               case 12: num = 334; break;
           }
           if(day<32)
           {
             num = num+day;
             printf("总共%d天", num);
           }
           else
           {
               printf("The day intput error");
           }
        }

        else
        {
          printf("The month intput error");
        }
    }

    else
    {

        printf("Leap year, The Feb have 29 day\n");
        if( month<=12 && month>=1)
        {
           switch(month)
           {
               case 1: num = 0; break;
               case 2: num = 31; break;
               case 3: num = 60; break;
               case 4: num = 91; break;
               case 5: num = 121; break;
               case 6: num = 152; break;
               case 7: num = 183; break;
               case 8: num = 213; break;
               case 9: num = 244; break;
               case 10: num = 274; break;
               case 11: num = 305; break;
               case 12: num = 335; break;
           }
           if(day<32)
           {
             num = num+day;
             printf("总共%d天", num);
           }
           else
           {
               printf("The day intput error");
           }
        }

        else
        {
          printf("The month intput error");
        }
    }


}
//可以闰年平年用一个switch语句，当是闰年且月份>2就天数多加一天
