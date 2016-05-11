#include<stdio.h>
int main(void)
{
	int i,f;
	
	printf("please input a integer:");
	scanf("%d", &i);
	f = i+10;
	while(i <= f){
	printf("%3d",i);
	i++;
	}
	return 0;
}
