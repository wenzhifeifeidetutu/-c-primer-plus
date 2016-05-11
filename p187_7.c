#include <stdio.h>
#define BASIC 10.00 //基本工资
#define TIME 40 //加班超过TIME小时
#define ADD 1.5
#define LIMIT1 300
#define RATE1 0.15
#define LIMIT2 150
#define RATE2 0.20
#define RATE3 0.25 

int main(void)
{
	double hours, gross, tax;
	printf("input the work hours of a week:");
	scanf("%lf", &hours);
	if(hours >40) hours = 40 + (hours -40)* 1.5;
	gross = hours *BASIC;
	printf("\ngross income :%.4lf",gross );
	if(gross <= LIMIT1) tax = gross *RATE1;
	else if(gross <= LIMIT2) tax = LIMIT1 *RATE1 + (gross - LIMIT1)*RATE2;
	else tax = LIMIT1 *RATE1 +LIMIT2 *RATE2 +(gross - LIMIT1 - LIMIT2) *RATE3;
	printf("\ntax :%.4lf ", tax);
	printf("\nnet incom :%.4lf", gross - tax);
	return 0;
}