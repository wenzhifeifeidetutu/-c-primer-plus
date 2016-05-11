#include<stdio.h>
int main(void)
{
	int num;
	int max;
	
	printf("Enter you want max:");
	scanf("%d", &max);
	for(num=1;  num<=max; num++){
	printf("%d days you can get %d money\n", num, num*num);
	}
	return 0;
}