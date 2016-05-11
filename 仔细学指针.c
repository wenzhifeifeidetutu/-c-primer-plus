//指针的东西
#include<stdio.h>
int main()
{
	int hoge =5;
	int piyo = 10;
	int *hoge_p;
	//输出每一个变量的地址
	printf("&hoge..%p\n", &hoge);
	printf("&piyoi..%p\n", &piyo);
	printf("&hoge_p..%p\n", &hoge_p);
	
	//将hoge的地址赋给hoge_p
	hoge_p = &hoge;
	printf("hoge_p..%p\n", hoge_p);
	
	//通过hoge_p输出hoge的内容
	printf("*hoge_p..%d\n", *hoge_p);
	//通过hoge_p来修改hoge的内容
	*hoge_p =10;
	printf("hoge..%d\n", hoge);
	
	return 0; 
} 
