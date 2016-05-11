#include<stdio.h>

int main(void)
{
	char a[20]="saddasdasdsa";
	char *p;
	p=a;
	p[2]='1';
	puts(a);
	return 0;
}
