//srrncpy函数的编写 
#include<stdio.h>
char *strncpy(char *p1, char *p2, int n);
int main()
{	
	char str1[81];
	char str2[81];
	int n;
	
	do{
	puts("please input str1: ");
	gets(str1);
	puts("please input str2: ");
	gets(str2);
	puts("please input you want copy numbers!");
	scanf("%d", &n);
	getchar();
	puts(" After copyed !");
	puts(strncpy(str1, str2, n));
	puts("please input (q to quit!) anther char to go on!");
	gets(str1);
	}while(*str1 != 'q');
	puts("quit!");
	puts("end!");
	return 0;
}
char *strncpy(char *p1, char *p2, int n)
{
	char *p = p1;   //用于存放一个指针p1的地址！！！
	while(*p1++ !='\0')  continue; //先移到结尾！！
	*--p1 = *p2;
	//n--;
	while(n>0 && *p2 != '\0'){
		*++p1 = *++p2;
		n--;
	} 
	return p;
	}
