//3��Ʋ�����һ���������书���Ƕ�ȡ��������ĵ�һ�����ʵ����飬�������������������ַ���һ�����ʵĶ�����һ���ַ������в����ո��Ʊ���ͻ��з�
#include<stdio.h>
#include<ctype.h>
#define N 100

void word(char *p);

int main(void)
{
	char a[N];
	puts("�����뼸���ַ���:");
	gets(a);
	puts("ԭ������ַ���Ϊ");
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
		*p=*(p+begin);              //���˵����ᵽ��ǰ�� 
	*p='\0';
	
}
