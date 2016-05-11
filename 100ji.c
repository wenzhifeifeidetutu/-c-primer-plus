#include<stdio.h>
int main(void)
{
	int a, b;
	int c;	//为了简单的写，我就以a代表公鸡，b代表母鸡 c代表小鸡
	
	for(a=0; a<=100; a++) 
	for(b=0; b<=100; b++)
	for(c=0; c<=100; c++)
	{
	if((a*5+b*3+c/3.0)==100 && (a+b+c)==100 && (c%3)==0)
	printf("公鸡数为%d, 母鸡数为%d, 小鸡数为%d",a , b, c);
	}
	return 0;
}
//母鸡公鸡小鸡肯定都是小于100的，我们只需重其中找出符合值即可	