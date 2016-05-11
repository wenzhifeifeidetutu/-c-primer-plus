#include<stdio.h>
int main(void)
{
	char ch;
	int i, j, k;
	
	printf("pelase enter a capital: ");
	scanf("%c", &ch);
	k= ch - 'A'+1;
	for(i=0; i<k; i++){
	for(j=0; j<k-i; j++) printf(" ");
	for(j=0; j<=i; j++)  printf("%c", 'A'+j);
	for(j=i-1; j>=0; j--) printf("%c", 'A'+j);
	printf("\n");
	}
	return 0;
}