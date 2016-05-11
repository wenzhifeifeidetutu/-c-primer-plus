#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	void *p;
	int count = 0;
	while(p = malloc(1024*1024)){
		count++;
	}
	printf("最大分配内存为%dM", count);
	
	return 0;
} 
