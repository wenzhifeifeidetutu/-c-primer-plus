#include<stdio.h>
int main(void)
{
	int days;
	
	printf("input the days:\n");
	scanf("%d", &days);
	while(days >0){
	printf("%d days are %d week %d days .\n", days, days/7, days%7);
	scanf("%d", &days);
	}
	return 0;
}