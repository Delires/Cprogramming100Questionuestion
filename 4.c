/**
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

�����������ж����(����2��29�죬ƽ��28��)
         �ܱ�4���� ���ܱ�100���� Ϊ����
         �ܱ�4���� �ܱ�100���� �ұ�400������������leap

      ������ȡ�����ж�
**/
#include <stdio.h>
int main(void)
{
    int leap, month, day;  //������
    int year, num;        //year=0���꣬ year=1ƽ��  sum������


    printf("�����꣺");
    scanf("%d", &leap);
    printf("\n");
    printf("�����£�");
    scanf("%d", &month);
    printf("\n");
    printf("�����գ�");
    scanf("%d", &day);
    printf("\n");


    if(  leap%4 ==0 )  //�ж�����ƽ��year=0���꣬ year=1ƽ��
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
             printf("�ܹ�%d��", num);
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
             printf("�ܹ�%d��", num);
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
//��������ƽ����һ��switch��䣬�����������·�>2���������һ��
