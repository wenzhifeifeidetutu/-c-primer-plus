#include<stdio.h>
#define gallon 3.785

int main(void)
{
	double i;
	double x;
	double f;
	
	printf("please input your driving miles:______\b\b\b\b\b\b");
	scanf("%lf", &i);
	printf("\nplease input you consume the number of gallons: ");
	scanf("%lf", &x);
	f=(i*1.609)/(x*gallon);
	printf("pre miles use gallons is :%.1f", f );
	return 0;	
	
}