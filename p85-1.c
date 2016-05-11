#include <stdio.h>
int main (void)
{
char name[40];
char last[40];

printf("please input your name and your last name:");
scanf("%s%s", name, last);
printf("%s %s", name, last);
return 0;
}