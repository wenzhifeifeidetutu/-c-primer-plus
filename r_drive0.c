#include<stdio.h> 
extern int rand0();

int main()
{
	int count;
	
	for(count = 0; count<5; count++)
	printf("%hd\n", rand(0));
	//puts("text");
		//printf("\n%hd",(1103515245 +12345)/65536%32768 );
	return 0;
}
static unsigned long int next = 1; //ÖÖ×Ó~~
int rang0()
{
	next = next * 1103515245 +12345;
	return (unsigned int ) (next/65536)%32768;
} 


