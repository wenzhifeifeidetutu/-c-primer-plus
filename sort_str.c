//���ַ�������ʹ�ô�ָ������������ַ�������  2015 6 4
#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LTM 20      //��������� 
#define HALT " "  //�ÿ��ַ�����ֹ����

void mystrstr(char *string[], int num);   //�����ҵ��ַ�������������С�������� 

int main(void)
{
	char input[LTM][SIZE];
	char *ptstr[LTM];
	int ct =0 ;
	int k;                  //�����������飬ָ��������飬 ��������� �������
	
	printf("Input up to %d lines, and iwill sort them", LTM);
	printf("To stop, press the ENTER key at a line's start.\n");
	while(ct<LTM && gets(input[ct]) != NULL && input[ct][0] != '\0'){
		ptstr[ct]=input[ct];
		ct++;
	}
	mystrstr(ptstr, ct);
	puts("\nHere is the sorted list:");
	for(k=0; k< ct; k++){
		puts(ptstr[k]);
	}
	
	/*
	for(k=0; k< ct; k++){
		//printf("%s\n", input[k]);       
		puts(input[k]);
	}                                                           //ԭ�������黹��δ�䣬ֻ�ǽ�ԭ��������ĵ�ַ����ptstrȻ�����޸ĵ���ptstr��ַ~~ 
	*/ 
	return 0;
	
 } 
 
 void mystrstr(char *string[], int num)
 {
 	char *temp;  //�������潻�����ַ����ĵ�ַ��
	int top, seek;
	for(top=0; top<num-1; top++){
		for(seek=top+1; seek<num; seek++){           //ע��һ��Ҫ�ȴӺ����Ǹ���ʼ�Ƚϲ�Ȼ������� seek=top+1 
			if(strcmp(string[top], string[seek]) > 0){
				temp=string[top];
				string[top]=string[seek];
				string[seek]=temp;
			}
		}
	} 
 }
