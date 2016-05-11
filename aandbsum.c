#include<stdio.h>
int Sum(int a, int b);

int main(int argc, char *argv[])
{
	int num1, num2;
	printf("请输入两个整数:");
	while(	scanf("%d%d", &num1, &num2) != 2){
		printf("输入错误，请输入两个数字");                                    //错误提示~~ 
		getchar();                                                                  //消除缓冲区残留的/n 
	}
	printf("%d+%d=%d\n", num1, num2, Sum(num1, num2));
	Sum(5,6);
}
int Sum(int a, int b)
{
	
	static int h;
	printf("\n%d\n", h);
	h=a;
	printf("\n%d\n", h);
	return a+b;
}
