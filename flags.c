//flags 一些格式标志的示列
#include <stdio.h>
int main (void)
{
	printf("%x %X %#X\n", 31, 31, 31);
	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**% d**% d\n", 42, 42, -41);
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
	return 0;
}