#include<stdio.h>
#include<string.h>
#define SIZE 100

int main(void)
{
	char flower[SIZE];
	gets(flower);
	char *p="dasdadasdsadasdsa";
	strcat(flower, p);
	puts(flower);
	printf("%d", strlen(flower));
	return 0;
}
