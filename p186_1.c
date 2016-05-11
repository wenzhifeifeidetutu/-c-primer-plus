#include<stdio.h>
int main(void)
{
	char c;
	int n_spaces = 0;
	int n_chars =0;
	int n_lines = 0;
	printf("please Enter a words:\n");
	while( (c=getchar()) != '#'){
		n_chars++;
		if(c==' ') n_spaces++;
		if(c=='\n') n_lines++;
	}
	printf("you input chars is %d, spaces is %d, »»ĞĞ is %d", n_chars, n_spaces, n_lines);
	return 0;
}

