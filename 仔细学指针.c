//ָ��Ķ���
#include<stdio.h>
int main()
{
	int hoge =5;
	int piyo = 10;
	int *hoge_p;
	//���ÿһ�������ĵ�ַ
	printf("&hoge..%p\n", &hoge);
	printf("&piyoi..%p\n", &piyo);
	printf("&hoge_p..%p\n", &hoge_p);
	
	//��hoge�ĵ�ַ����hoge_p
	hoge_p = &hoge;
	printf("hoge_p..%p\n", hoge_p);
	
	//ͨ��hoge_p���hoge������
	printf("*hoge_p..%d\n", *hoge_p);
	//ͨ��hoge_p���޸�hoge������
	*hoge_p =10;
	printf("hoge..%d\n", hoge);
	
	return 0; 
} 
