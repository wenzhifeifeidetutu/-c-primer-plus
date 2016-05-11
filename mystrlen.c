//strlen ()  返回s的字符串长度（不包括结尾的0）
// int mystrlen(char const * s)

#include<stdio.h>
#include<string.h>

int mystrlen(char const *s)
{
	int idx=0;
	int cnt=0;
	while(s[idx] != '\0'){
		idx++;
		cnt++;
	};
	return cnt;
}


int main(int argc, char const *argv[])
{
	char line[]="hello";
	
	printf("strlen is %d\n", strlen(line));
	printf("mystrlen is %d\n", mystrlen(line));
	printf("sizeof is %d\n", sizeof(line));
	
	return 0;
}

 
