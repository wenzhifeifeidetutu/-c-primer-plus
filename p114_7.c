#include<stdio.h>
float CUBE (float);
int main(void)
{
	float x;
	printf("Enter a number: ");
	scanf("%f", &x); 
	printf("the cube of %f what you enter is:%f", x, CUBE(x));
	return 0;
}
	float CUBE(float num)
{
	
	return (num*num*num);
}