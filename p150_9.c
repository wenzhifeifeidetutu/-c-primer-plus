#include<stdio.h>
int main(void)
{
	int lower, upper, sum, i;
	
	printf("Enter lower and upper integer limits: ");
	scanf("%d%d", &lower, &upper );
	
	while(lower < upper ){
		for(sum=0, i= lower; i<= upper; i++) sum+= i*i;
		printf("The sums of the squares from %d to %d is %d", lower*lower, upper*upper, sum );
		scanf("%d%d", &lower, &upper);
		}
	printf("Done");
	return 0;	
}