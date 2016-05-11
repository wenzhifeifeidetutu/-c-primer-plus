//  char **a  表示一个指针 a 指向另一个指针，那个指针指向某个数组
//  char a[][]在另一个行里面必须要有下标否则编译不通过。 
// char *a[]   a[0] ->char *a

#include<stdio.h>

int main(int argc, char const *argv[])
{
	char *month[12] = {"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"	
	};
	int i;
	scanf("%d", &i);
	printf("%d 是 %s", i, month[i-1]);
	
	return 0;
	
}
