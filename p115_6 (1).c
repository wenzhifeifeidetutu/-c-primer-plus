#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char ch[20];
	int i;

	scanf("%s", ch);
	for(i = strlen(ch); i>=0 ; i--){
		if( !isspace(ch[i]) )//��������������������ո�
		putchar(ch[i]);
		//printf("%c", ch[i]);   ����Ϊ����û�����س���~~~~�и����ַ������
	}
	printf("\n");
	return 0;
}

