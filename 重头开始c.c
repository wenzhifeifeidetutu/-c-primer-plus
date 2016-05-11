#include<stdio.h>

int main(void)
{
	int num=0;
	int i, j, k;
	
	scanf("%d", &num);
	
	i=num/100;
	j=(num/10)%10;
	k=num%10;
	if(k==0){
		if(j==0){
			printf("%d", i);
		}else{
			printf("%d%d", j, i);
			}
	}else{
		printf("%d%d%d", k, j, i);
	}
return 0;
	
}
