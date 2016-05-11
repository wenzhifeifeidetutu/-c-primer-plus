#include<stdio.h>
int main(void)
{
	double num[8],sum[8];
	int i,j;
	
	printf("Enter 8 numbers :");
	for(i=0; i<8;i++){
		scanf("%lf", &num[i]);
		for(j=0,sum[i]=0; j<=i; j++){
		sum[i]+=num[j];}
		}
	for(i=0; i<8;i++)
		printf("%8.3f",num[i]);
	printf("\n");
	for(i=0; i<8; i++)
		printf("%8.3f", sum[i]);
	return 0;
}	