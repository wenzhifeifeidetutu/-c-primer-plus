#include<stdio.h>
int Sum(int a, int b);

int main(int argc, char *argv[])
{
	int num1, num2;
	printf("��������������:");
	while(	scanf("%d%d", &num1, &num2) != 2){
		printf("���������������������");                                    //������ʾ~~ 
		getchar();                                                                  //����������������/n 
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
