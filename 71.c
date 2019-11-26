/**
题目：编写input()和output()函数输入，输出5个学生的数据记录。姓名，性别，年龄

程序分析：先配置结构体 typedef struct     struct stu
                        {                  {
                        int xx;             int xxx;
                        char xx;            char xxx;
                        } stu;             } Linknode;
                        stu s1, s2;        struct stu s1, s2, s2
                        如果typedef定义的 末尾的stu可以直接声明结构体
                        如果没typedef   必须用struct str声明结构体
**/
#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
      char name[20];
      char sex[4];
      int age;
    } Stu;

void input_stu(Stu *p1);  //stu *p1 结构体指针
void output_stu(Stu *p2);

int main(void)
{
   Stu stu[5];
   printf("请输入学生数据 姓名 性别 年龄\n");
   input_stu(stu);
   printf("学生数据为:\n");
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
