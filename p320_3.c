//3设计并测试一个函数，其功能是读取输入行里的第一个单词到数组，并丢掉该行中其他的字符。一个单词的定义是一串字符，其中不含空格、制表符和换行符
#include<stdio.h>
#include<ctype.h>
#define N 100

void word(char *p);

int main(void)
{
	char a[N];
	puts("请输入几行字符串:");
	gets(a);
	puts("原输入的字符串为");
	puts(a);
	word(a);
	puts(a);
    return 0;	
}
void word(char *p)
{
	int begin;
	int end;
	for(begin=0; isspace(p[begin]); begin++) continue;
	for(end=begin;!isspace(p[end]); end++) continue;
	p[end]='\0';
	for(; p[begin]!='\0'; p++)
		*p=*(p+begin);              //将此单词提到最前面 
	*p='\0';
	
}
