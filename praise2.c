#include <stdio.h>
#include <string.h>
#define P "waht a super marvelous name"  //string Õâ¾ÍÊÇ¶¨ÒåµÄ×Ö·û´®
int main (void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("Hellow,%s. %s" , name, P);
	printf("your name of %d letters occupies %d memory cells.\n", strlen (name) , sizeof (name));
	printf("The phrase of praise has %d letters" , strlen (P) );
	printf("and occupies %d memory cells. \n", sizeof P);
	return 0;
}
	
	
	