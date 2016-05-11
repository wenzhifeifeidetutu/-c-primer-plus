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
	puts("测试开始 ");
	printf("test1的结构总数为:%d\n", sizeof(test1));
	printf("分开计算:%d\n", sizeof(test1.i)+sizeof(test1.j)+sizeof(test1.f));
	printf("test2的结构总数为:%d\n", sizeof(test2));
	printf("分开计算:%d\n", sizeof(test2.i)+sizeof(test2.j)+sizeof(test2.d));
	printf("test1的地址:%p", &test1);
	printf("test1里面的地址%p %p %p %p\n", &test1.i[9], &test1.j[0], &test1.j[9], &test1.f[0]);
	return 0; 
}
