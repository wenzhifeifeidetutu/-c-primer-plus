#include<stdio.h>
#include<string.h>

struct a{
	int i[10];
	char j[10];
	float f[10];
	
}test1;
struct b{
	int i[10];
	char j[10];
	double d[10];
}test2;

int main(int argc , char *argv[] )
{
	puts("���Կ�ʼ ");
	printf("test1�Ľṹ����Ϊ:%d\n", sizeof(test1));
	printf("�ֿ�����:%d\n", sizeof(test1.i)+sizeof(test1.j)+sizeof(test1.f));
	printf("test2�Ľṹ����Ϊ:%d\n", sizeof(test2));
	printf("�ֿ�����:%d\n", sizeof(test2.i)+sizeof(test2.j)+sizeof(test2.d));
	printf("test1�ĵ�ַ:%p", &test1);
	printf("test1����ĵ�ַ%p %p %p %p\n", &test1.i[9], &test1.j[0], &test1.j[9], &test1.f[0]);
	return 0; 
}
