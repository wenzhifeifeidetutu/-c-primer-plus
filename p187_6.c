#include<stdio.h>
int main(void)
{
	char former = 0, present;
	int count =0;
	while((present = getchar()) != '#'){
	if((former == 'e') && (present == 'i')) count++;
	former = present;
	}
	printf("ei has appeared %d times \n", count);
	return 0;
}