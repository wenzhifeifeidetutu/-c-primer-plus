//p59 6 ����ˮ�Ŀ������һ��ˮ����
#include <stdio.h>
int main (void)
{
	double i=3.0*10^-23;
	double  h;
	printf("please input the number of warter quart:\n");
	scanf("%lf", &h);
	h = h*950/i ;
	printf("%lf", h);
	return 0;
}