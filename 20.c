/**

��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
      �����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

��������������֣�������Ĵ�����
      100 50 25 12.5 ÿ�γ�2^����
**/
#include <stdio.h>
#define HIGH 100.0  //����Ϊ�����ͳ��������Ǹ�����
int main(void)
{
  int n, i,time=1;
  float meter, all=100;
  printf("��������صĴ���:");
  scanf("%d", &n);

  for(i=0;i<n;i++)
  {
      time*=2;
      all +=(HIGH/time);
  }

  printf("������·��Ϊ%f\n", all);
  printf("��%d�θ߶�Ϊ%f", n, HIGH/time);


  return 0;

}
