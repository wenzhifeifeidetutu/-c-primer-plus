//  char **a  ��ʾһ��ָ�� a ָ����һ��ָ�룬�Ǹ�ָ��ָ��ĳ������
//  char a[][]����һ�����������Ҫ���±������벻ͨ���� 
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
	printf("%d �� %s", i, month[i-1]);
	
	return 0;
	
}
