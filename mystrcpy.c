//strcpy()  copy  s2 to s1 返回s1 
// restrict 不重叠的 c99新的关键字
//  复制一个字符串  char  *dst=(char *)malloc(strlen(src)+1 );
// strcpy(dst, src);     //因为strlen()返回是不包含那个'\0', 所以需要加一


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
 
