#include<stdio.h>
int main(void)
{
	char ch[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i = 25;

	while(i>=0){
		printf("%c",ch[i]);
		i--;
		printf("\n");
	}
	return 0;
}
