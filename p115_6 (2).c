#include<stdio.h>
int main(void)
{
	int num1, num2;
	int i;

	printf("please input min to max: ");
	while(scanf("%d%d",&num1, &num2) == 2){
		for(i=0; i <=(num2 -num1); i++){
			printf(" 此数为 %d 平方:%d， 立方:%d", num1+i, (num1+i)*(num1+i), (num1+i)*(num1+1)*(num1+1) );
			printf("\n");
		}
	}
	return 0;
}
