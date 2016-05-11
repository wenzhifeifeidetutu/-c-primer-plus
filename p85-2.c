#include <stdio.h>
#include <string.h>
int main(void)
{
char name[40];

printf("please input your name:__________\b\b\b\b\b\b\b\b\b");
scanf("%s", name);
printf("your name is:\"%s\"\n", name);
printf("your name is:\"%20s\"\n", name);
printf("your name is:\"%-20s\"\n", name);
printf("your name is:%*s\n",strlen(name)+3, name);
return 0;
}