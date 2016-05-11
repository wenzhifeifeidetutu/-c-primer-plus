// 各种类型的字节大小 
#include<stdio.h>
#include<stdbool.h>
int main()
{
	printf("sizeof(int) = %ld\n", sizeof(int)); 
	printf("sizeof(short) = %ld\n", sizeof(short));
	printf("sizeof(long) = %ld\n", sizeof(long));
	printf("sizeof(long long) = %ld\n", sizeof(long long));
	printf("sizeof(char) = %ld\n", sizeof(char));
	printf("sizeof(float) = %ld\n", sizeof(float));
	printf("sizeof(double) = %ld\n", sizeof(double));
	printf("sizeof(bool) = %ld\n", sizeof(bool));
	return 0;
}

