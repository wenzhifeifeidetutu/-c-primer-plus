//两个数组的和储存到3个数组中
#include<stdio.h>
void copy(int (*a1), int (*a2), int (*a3) ,int n1);
void writea(int *a, int k);

int main(void)
{
	int n, m;
	printf("\n请输入第一个数组的大小:");
	scanf("%d", &n);
	printf("\n请输入第二个数组的大小:");
	scanf("%d", &m);
	int num2[m];
	writea(num2, m);
	int num1[n];
	writea(num1, n);
	int bigger = n>m?n:m;
	int num3[bigger];
	copy(num1, num2, num3, bigger);
	
}
 void writea(int *a, int k)
 {
 	printf("请输入此数组的元素:");
 	int h;
 	for(h=0; h< k; h++){
 		scanf("%d", &a[h]);	
	}
	printf("你输入的数为:");
	int n2=0;
	for(n2 = 0; n2< k; n2++){
		printf("%d", a[n2]);
	}
	printf("\n");
 }
void copy(int (*a1), int (*a2), int (*a3), int n1)
{
	int i=0;
	for(i=0;i<n1;i++){
		a3[i]=a1[i]+a2[i];
	}
	int j;
	for(j=0; j< n1; j++){
		printf("%2d ", a3[j]);
	}
}
