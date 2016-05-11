#include <stdio.h>
int main(void)
{
	char name[40];
	float high;

	printf("please input your name:");
	scanf("%s", name);
	printf("\nplease input your body high:");
	scanf("%f", &high);
	printf("\n%s, your are %f feet tall", name, high);
	return 0;
}