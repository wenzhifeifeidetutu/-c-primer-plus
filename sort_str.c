//读字符串排序。使用传指针来操作这个字符串数组  2015 6 4
#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LTM 20      //输入的行数 
#define HALT " "  //用空字符来终止输入

void mystrstr(char *string[], int num);   //定义我的字符串排序函数按从小到大排列 

int main(void)
{
	char input[LTM][SIZE];
	char *ptstr[LTM];
	int ct =0 ;
	int k;                  //存入输入数组，指针变量数组， 输入记数， 输出记数
	
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
	}                                                           //原来的数组还是未变，只是将原来的数组的地址传给ptstr然后再修改的是ptstr的址~~ 
	*/ 
	return 0;
	
 } 
 
 void mystrstr(char *string[], int num)
 {
 	char *temp;  //用来保存交换的字符串的地址；
	int top, seek;
	for(top=0; top<num-1; top++){
		for(seek=top+1; seek<num; seek++){           //注意一定要先从后面那个开始比较不然换会出错 seek=top+1 
			if(strcmp(string[top], string[seek]) > 0){
				temp=string[top];
				string[top]=string[seek];
				string[seek]=temp;
			}
		}
	} 
 }
