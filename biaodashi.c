#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
 
#define MAXOP 100   // 运算数列可能的最大长度 
#define MaxSize 100  // 堆栈元素的最大个数 
#define NUMBER 0  //  运算数的标识 
typedef double ElementType;    //此时具体化为double元素 
typedef struct {   //堆栈结构体 
	ElementType Data[MaxSize];
	int Top;
	
}Stack;

void Push(Stack * Ptrs, ElementType item);    //入栈操作 
ElementType Pop(Stack *PtrS);   // 出栈操作
int GetOp(char s[]);

int main(void){
	int Type;
	double Op2;
	char s[MAXOP];
	Stack *PtrS;
	//申请一个新的堆栈，ptrs指向改堆栈
	PtrS = (Stack *)malloc(sizeof(Stack));
	PtrS->Top = -1;
	
	while((Type = GetOp(s)) !=EOF){
		//当未读到输入结束时
		switch(Type) {
			case NUMBER:Push(PtrS, atof(s)) ; break;
			case '+':Push(PtrS, Pop(PtrS) + Pop(PtrS)); break;
			case '*':Push(PtrS, Pop(PtrS) * Pop(PtrS)); break;
			case '-':Op2 =Pop(PtrS);
					Push(PtrS,Pop(PtrS) - Op2); break;
			case '/':Op2 = Pop(PtrS);
					if(Op2 != 0.0) //检查除法的分母是否为0  
						Push(PtrS, Pop(PtrS)/Op2);
						else
							printf("错误0不能为除数\n");
						break;
			case '\n':printf("%.8g\n",Pop(PtrS)); break;
			default: printf("未知的操作！%s\n", s);
				break; 
		} 
	}
	free (PtrS);  //释放堆栈
	return 0; 
	 
}



void Push(Stack *PtrS, ElementType  item){     //出栈 
	if(PtrS -> Top == MaxSize -1) {
		printf("堆栈满");
		return ;
	}else {
		PtrS ->Data[++(PtrS->Top)] = item;
		return;
	}
} 

ElementType Pop(Stack *PtrS) {    //   出栈 
	if(PtrS->Top == -1) {
		printf("堆栈空");
		return 0 ;    //返回error 
	}else 
		return(PtrS->Data[(PtrS->Top)--]);
} 

int GetOp(char s[]) {
	// 从输入中获得下一个对象（运算数或者运算符），并保存在字符数组s中 
	//  返回值为NULL或者运算符本身
	
	int  i, c;
	// 跳过表达式钱空格等字符
	while( (s[0] =c = getchar()) == ' '|| c=='\t');
	s[1]='\0';
	 if(!isdigit(c) && c!='.')  //如果c是运算符  
	 	return c;
	i = 0; 
	if(isdigit(c) )   //如果是数字，则一直读完连续的数字并存入 
		while( isdigit(s[++i] =c =getchar() ) );
	if(c == '.')   // 如果有小数点。则继续读完小数点后的连续数字 
		while(isdigit(s[++i] =getchar()));
	s[i] ='\0';
	return NUMBER;   //表示s中存的是一个数字
}


