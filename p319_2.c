//���һ�����������Զ�ȡn���ַ�(�����ո��Ʊ���ͻ���),������ģ����浽һ���������棬��ͨ����������
//                       2015/6/8 
#include<stdio.h>
#include<ctype.h>

void myscanf(char *p, int n);

int main(int argc, char *argv[])
{
	int n;
	puts("����������������ַ���");
	scanf("%d", &n);
	char n1[81];
	puts("�������ַ�");
	getchar();                 //����س� 
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
