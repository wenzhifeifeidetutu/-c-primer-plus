#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
 
#define MAXOP 100   // �������п��ܵ���󳤶� 
#define MaxSize 100  // ��ջԪ�ص������� 
#define NUMBER 0  //  �������ı�ʶ 
typedef double ElementType;    //��ʱ���廯ΪdoubleԪ�� 
typedef struct {   //��ջ�ṹ�� 
	ElementType Data[MaxSize];
	int Top;
	
}Stack;

void Push(Stack * Ptrs, ElementType item);    //��ջ���� 
ElementType Pop(Stack *PtrS);   // ��ջ����
int GetOp(char s[]);

int main(void){
	int Type;
	double Op2;
	char s[MAXOP];
	Stack *PtrS;
	//����һ���µĶ�ջ��ptrsָ��Ķ�ջ
	PtrS = (Stack *)malloc(sizeof(Stack));
	PtrS->Top = -1;
	
	while((Type = GetOp(s)) !=EOF){
		//��δ�����������ʱ
		switch(Type) {
			case NUMBER:Push(PtrS, atof(s)) ; break;
			case '+':Push(PtrS, Pop(PtrS) + Pop(PtrS)); break;
			case '*':Push(PtrS, Pop(PtrS) * Pop(PtrS)); break;
			case '-':Op2 =Pop(PtrS);
					Push(PtrS,Pop(PtrS) - Op2); break;
			case '/':Op2 = Pop(PtrS);
					if(Op2 != 0.0) //�������ķ�ĸ�Ƿ�Ϊ0  
						Push(PtrS, Pop(PtrS)/Op2);
						else
							printf("����0����Ϊ����\n");
						break;
			case '\n':printf("%.8g\n",Pop(PtrS)); break;
			default: printf("δ֪�Ĳ�����%s\n", s);
				break; 
		} 
	}
	free (PtrS);  //�ͷŶ�ջ
	return 0; 
	 
}



void Push(Stack *PtrS, ElementType  item){     //��ջ 
	if(PtrS -> Top == MaxSize -1) {
		printf("��ջ��");
		return ;
	}else {
		PtrS ->Data[++(PtrS->Top)] = item;
		return;
	}
} 

ElementType Pop(Stack *PtrS) {    //   ��ջ 
	if(PtrS->Top == -1) {
		printf("��ջ��");
		return 0 ;    //����error 
	}else 
		return(PtrS->Data[(PtrS->Top)--]);
} 

int GetOp(char s[]) {
	// �������л����һ����������������������������������ַ�����s�� 
	//  ����ֵΪNULL�������������
	
	int  i, c;
	// �������ʽǮ�ո���ַ�
	while( (s[0] =c = getchar()) == ' '|| c=='\t');
	s[1]='\0';
	 if(!isdigit(c) && c!='.')  //���c�������  
	 	return c;
	i = 0; 
	if(isdigit(c) )   //��������֣���һֱ�������������ֲ����� 
		while( isdigit(s[++i] =c =getchar() ) );
	if(c == '.')   // �����С���㡣���������С�������������� 
		while(isdigit(s[++i] =getchar()));
	s[i] ='\0';
	return NUMBER;   //��ʾs�д����һ������
}


