//is_within�����ı�д�����ַ����з���!=0�����ڷ���0
#include<stdio.h>
int is_within(char *pts, char ch);

int main()
{	
	char s1[81];
	char ch;
	do{
	puts("Int the strings: ");
	gets(s1);
	puts("you wants serch char: ");
	ch = getchar();
	getchar(); //����'\n' ��Ӱ��
	if(is_within(s1, ch) )   puts("FIND !");
	else puts("CANT'T FIND!'");
	puts("PLEASE INPUT ANTHER CHAR (q TO QUIT)");
	ch = getchar();
	getchar();
	}while(ch !='q');
	puts("quit! ");
	return 0;
}

int is_within(char *pts, char ch)
{
	if(*pts == '\0')  puts("you haven't input any string!");
	do{
		if(*pts == ch) return 1;
		pts++;
	}while(*pts =='\0');
	return 0;
} 
