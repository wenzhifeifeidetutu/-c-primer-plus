#include<stdio.h>
int main(void)
#define min 60
{
	int minute;

	printf("please input your all minutes:");
	scanf("%d", &minute);
	while(minute > 0){
	printf("you use %d hours and %d minutes\n", minute/min, minute%min );
	scanf("%d", &minute);
	}
	return 0;
}
