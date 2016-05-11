#include<stdio.h>
int main(void)
{
	int i, j;
	char ch='F';

	for(i=1; i<= 6; i++){
		for(j=0; j<i; j++)
			do{
				printf("%c",ch - j);
			}while(ch-j == i);
			printf("\n");
	}
	return 0;
}
