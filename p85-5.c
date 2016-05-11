#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[40], lastname[40];
	
	printf("please intput your name:");
	scanf("%s", name);
	printf("\nplease intput your lastname:");
	scanf("%s", lastname);
	printf("%s %s", name, lastname);
	printf("\n%*d %*d", strlen(name)-1, strlen(name), strlen(lastname)-1,strlen(lastname));
	printf("\n%s %s", name, lastname);
	printf("\n%-*d %-*d", strlen(name)-1, strlen(name), strlen(lastname)-1,strlen(lastname));
	return 0;
}