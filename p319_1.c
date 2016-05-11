//设计一个函数，可以读取n个字符(包括空格制表符和换行),储存到一个数组里面，并通过参数传递
//                       2015/6/8 
#include<stdio.h>
void write(char *p, int n);

int main(int argc, char *argv[])
{
	int n;
	puts("请输入你想输入的字符数");
	scanf("%d", &n);
	getchar();
	char n1[81];
	puts("请输入字符");
	write(n1, n);
	puts(n1);
	
	return 0;	
	
}
void write(char *p, int n)
{
	int i;
	for(i=0; i<n; i++){
		*(p+i)=getchar();
	}
	*(p+i)='\0';
 } 
