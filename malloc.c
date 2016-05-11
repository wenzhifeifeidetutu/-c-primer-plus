#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p[100];
	int i;
	for(i = 0; i<100; i++){
		p[i] = (int *)malloc(sizeof(int));
	}
	for(i=0; i<99; i++){
		printf("%p\n", p[i+1]-p[i]);
	}
}
