// strchr()  // ���ַ�����Ѱ���ַ������ش��ַ�����ָ��
// strstr()  // ���ַ�����Ѱ���ַ���
//strcasestr()    // ���Դ�Сд 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	char s[]="hello";            
	char *p=strchr(s, 'l');      //strrchr()���������Ѱ�ҵ�һ�γ��ֵ��ַ�������ָ��
	char *p2=strchr(p+1, 'l');
	
	printf("%s\n", p);
	printf("%s\n", p2);     //�ҵ��ڶ���l��
	char *p3 = (char *)malloc(strlen(p)+1);
	strcpy(p3, p2);  //���Ƶڶ���l�������ַ�����p3��ȥ
	printf("%s\n", p3); 
	 free(p3);   //ע��һ����������ͷŵ�malloc����Ķ��� 
	 
	//��εõ����ַ���ǰ���ַ����� 
	char c= *p;
	*p = '\0';
	char *s1=(char *)malloc(strlen(s)+1);
	strcpy(s1, s);
	printf("%s\n", s1);
	*p = c;   //���һָ���ȥ�� 
	
	free(s1); 
	 

 	return 0;	
}  
