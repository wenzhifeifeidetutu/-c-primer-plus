#include<stdio.h>
int main(void)
{
	int sum=0;
	int count=0;
	
	while(count++<20){
	printf("the sum of %d days is %d", count, sum+=count*count);
	printf("\n");
	}
	return 0;
}//此时是算前二十的整数和~~~~

	