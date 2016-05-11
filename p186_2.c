#include<stdio.h>
#define SIZE 8

int main(void)
{
	char a;
	int i;
	
	printf("please input a string and end of '#':\n");
	for(i=1; (a = getchar()) !='#'; i++){
	printf("%c--%d",a, a);
	if(i%8==0) printf("\n");
	}
	printf("\n ¸öÊıÎª%d", i);
	return 0;
}
	