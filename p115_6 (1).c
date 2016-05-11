#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char ch[20];
	int i;

	scanf("%s", ch);
	for(i = strlen(ch); i>=0 ; i--){
		if( !isspace(ch[i]) )//这样还是消除不了这个空格
		putchar(ch[i]);
		//printf("%c", ch[i]);   这样为好像没消除回车键~~~~有个空字符会输出
	}
	printf("\n");
	return 0;
}

