#include<stdio.h>
int main(void)
{
	int num1, num2;
	int n1=1;
	int n2=1;   //  ���� 
	int count=1;  //����λ�� 
	
	scanf("%d/%d", &num1, &num2);
	printf("0.");
	while(n1!=0 || count<=200){
		n1=num1*10/num2;
		n2=num1*10%num2;
		printf("%d", n1);
		if(n2 == 0 && count !=200) break;
		num1=n2;
		count++;
	}
	return 0;
}
