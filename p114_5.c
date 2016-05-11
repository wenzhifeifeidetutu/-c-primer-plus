#include<stdio.h>
int main(void)
{
	int sum=0;
	int count=0;
	
	while(count++<20){
	printf("the sum of %d days is %d", count, sum+=count);
	printf("\n");
	}
	return 0;
}//如果count变为count++的话判断是count的值后面所输入的带了count++不用再加<=20

	