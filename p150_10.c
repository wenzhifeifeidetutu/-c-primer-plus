#include<stdio.h>
#define x 8
int main(void)

{
	int i[x];
	int num;
	
	for(num=0; num<x; num++)     scanf("%d",&i[num]);
	for(num=x-1; num>=0; num-- )        printf("%4d", i[num]);
	printf("\nEnd!");
	return 0;
}
	