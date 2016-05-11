//设计一个函数，可以读取n个字符(包括空格制表符和换行),先满足的，储存到一个数组里面，并通过参数传递
//                       2015/6/8 
#include<stdio.h>
#include<ctype.h>

void myscanf(char *p, int n);

int main(int argc, char *argv[])
{
	int n;
	puts("请输入你想输入的字符数");
	scanf("%d", &n);
	char n1[81];
	puts("请输入字符");
	getchar();                 //清除回车 
	myscanf(n1, n);
	puts(n1);
	
	return 0;	
	
}
void myscanf(char *p, int n)
{
	int i;
	for(i=0; i<n; i++){
		*(p+i)=getchar();
		if(isspace(*(p+i)) ) break;
	}
	*(p+i)='\0';
 } 
