#include<stdio.h>
int main(void)
{
	int ji=0;
	int ou=0;
	int num=0;
	do
	{
		scanf("%d", &num);
		if(num%2 ==0) ou++;
		else ji++;	
	}while(num != -1);
	printf("%d %d", ji-1, ou);
	return 0;
}
