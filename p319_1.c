//���һ�����������Զ�ȡn���ַ�(�����ո��Ʊ���ͻ���),���浽һ���������棬��ͨ����������
//                       2015/6/8 
#include<stdio.h>
void write(char *p, int n);

int main(int argc, char *argv[])
{
	int n;
	puts("����������������ַ���");
	scanf("%d", &n);
	getchar();
	char n1[81];
	puts("�������ַ�");
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
