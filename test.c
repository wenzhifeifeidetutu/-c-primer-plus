#include<stdio.h>
int main(int argc, char *argv[] )
{
	char *s[]={"dassad", "adasdasd"};
	printf("%c", **s);
	//printf("%c", **s);
	char c[100]={'a', 'b', 'c'};
	printf("\n%p\n", *c);
	printf("%p\n", c[0]);
	printf("%p\n", c);
	return 0;
} 
