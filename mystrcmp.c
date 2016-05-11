//strcmp  ±È½Ï
#include<stdio.h>
#include<string.h>

int mystrcmp(char const *s1, char const *s2);

int main(int argc, char const *argv[])
{
	char s1[]="abc";
	char s2[]="Abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d", 'a'-'A');
	printf("\n%d", mystrcmp(s1, s2));
	
	return 0;
} 

int mystrcmp(char const *s1, char const *s2)
{
	while(*s1 == *s2 && *s1 != '\0'){
		s1++;
		s2++;
	};
	return *s1 - *s2;
}
