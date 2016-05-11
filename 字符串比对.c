/*题目内容：
题目说起来很简单，你会读到两个字符串，每个字符串占据一行，每个字符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。你的程序要找出第一个字符串在第二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。

注意，第一个字符的位置是0。

注意，第一个字符串在第二个字符串中的位置可能不止一处。

注意，字符串中可能含有空格。

注意，两个字符串的长度一定大于0。

输入格式:
两个字符串，一行一个。

输出格式：
第一个字符串在第二个字符串中出现的位置，按照从小到到的顺序排列，每个数字后面有一个空格。
如果在第二个字符串中找不到第一个字符串，则输出-1。

输入样例：
abba
ababbba abbabbabbabbaacc

输出样例：
8 11 14 17
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char s1[10000];
	char s2[10000];
	gets(s1);
	gets(s2);
	char *s = s2;
	char *p=strstr(s2, s1);
	if(p == NULL) printf("-1"); 
	while (p){
		printf("%d ", p-s );
		p+=strlen(s1)-1;
		if(strlen(s1) == 1){
			p++;
		}
		p=strstr(p, s1);
	}
	
	return 0;
}
