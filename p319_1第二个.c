#include<stdio.h>
#define N 100

void inputchar(char *a, int n);

int main(void)
{
	char a[N];
	int n=0;
	puts("������Ҫ��ȡ����:");
	scanf("%d", &n);
	getchar();  //����س� 
	inputchar(a, n);
	int n2=0;
	puts(a);
	return 0;
} 

void inputchar(char *a, int n)
{
	int n1=0;
	for(n1=0; n1<n; n1++){
		a[n1]=getchar();	
	}
	a[n]='\0'; 
}
