/**
��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼���������Ա�����

��������������ýṹ�� typedef struct     struct stu
                        {                  {
                        int xx;             int xxx;
                        char xx;            char xxx;
                        } stu;             } Linknode;
                        stu s1, s2;        struct stu s1, s2, s2
                        ���typedef����� ĩβ��stu����ֱ�������ṹ��
                        ���ûtypedef   ������struct str�����ṹ��
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
      char name[20];
      char sex[4];
      int age;
    } Stu;

void input_stu(Stu *p1);  //stu *p1 �ṹ��ָ��
void output_stu(Stu *p2);

int main(void)
{
   Stu stu[5];
   printf("������ѧ������ ���� �Ա� ����\n");
   input_stu(stu);
   printf("ѧ������Ϊ:\n");
   output_stu(stu);

   system("pause");
   return 0;

}

void input_stu(Stu *p1)
{
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%s%s%d", p1[i].name, p1[i].sex, &(p1[i].age) );
    }
}

void output_stu(Stu *p2)
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("%s\t%s\t%d\n", p2[i].name, p2[i].sex, p2[i].age);
    }
}
