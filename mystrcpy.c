//strcpy()  copy  s2 to s1 ����s1 
// restrict ���ص��� c99�µĹؼ���
//  ����һ���ַ���  char  *dst=(char *)malloc(strlen(src)+1 );
// strcpy(dst, src);     //��Ϊstrlen()�����ǲ������Ǹ�'\0', ������Ҫ��һ


#include<stdio.h>
#include<string.h>

char *mystrcpy(char *dst, char const *src);

int main(int argc, char const *argvp[])
{
	char s1[]="abc";
	char s2[]="abcde";
	
	printf("%s\n", strcpy(s1, s2));
	printf("%s\n", mystrcpy(s1, s2));
	
	return 0;
}

char *mystrcpy(char *dst, char const *scr)
{
	int idx=0;
	while(*(scr+idx) != '\0'){    
		dst[idx]= scr[idx];
		idx++;
	};
	dst[idx]='\0';
	
	return dst;
 } 
 
