#include<stdio.h>

void delspace(char *pl);

int main(void)
{
	char str[81];
	do{
		puts("input a string!");
		gets(str);
		delspace(str);
		puts(str);
		puts("input any char except q to go on!");
		gets(str);
		
	}while(str[0] !='q');
	puts("quit!");
	return 0;
} 
