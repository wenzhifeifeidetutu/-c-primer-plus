#include<stdio.h>
int main(void)
{
	double sum1, sum2, i;
	int count, sign;
	
	printf("please input a count:______\b\b\b\b\b\b");
	while(scanf("%d", &count) ==1){
	for(i=1.0, sum1=0, sum2=0,sign=1; i <=count; i++,sign=-sign ){
	sum1+=1.0/i;
	sum2+=sign*1.0/i;
	}
	printf("1.0 + 1.0/2.0 + 1.0/3.0+1.0/4.0 + .......+ 1.0/%d = %lf\n", count, sum1);
	printf("1.0 - 1.0/2.0 + 1.0/3.0-1.0/4.0 + .......+ 1.0/%d = %lf\n", count, sum2);
	}
	return 0;
}
	