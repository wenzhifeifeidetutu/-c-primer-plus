#include<stdio.h>
static unsigned long int next = 1; //����~~
int rand0()
{
	next = next * 1103515245 +12345;
	return (unsigned int ) (next/65536)%32768;
} 




