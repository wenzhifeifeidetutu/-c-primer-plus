#include <stdio.h>
#define feet 30.48
#define inch 2.54
int main(void)
{
	double cm;
	
	printf("Enter a height in centimeters : ");
	scanf("%lf", &cm);
	printf("%.1f cm=%.1f feet, %.1f inches ", cm, cm/feet, cm/inch);
	while(cm >0){
	printf("\nEnter a height in centimeters :(< = 0 to quit ) ");
	scanf("%lf", &cm);
	printf("%.1f cm=%.1f feet, %.1f inches ", cm, cm/feet, cm/inch);
	scanf("%lf", &cm);
	}
	return 0;
}