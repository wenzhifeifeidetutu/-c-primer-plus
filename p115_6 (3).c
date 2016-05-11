#include<stdio.h>
int main(void)
{
	float i ,j ;

	while(scanf("%f%f", &i, &j) == 2){
		printf("%f", (i-j)/(i*j) );
	}
	return 0;
}
