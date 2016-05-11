// strchr()  // 在字符串中寻找字符并返回此字符串的指针
// strstr()  // 在字符串中寻找字符串
//strcasestr()    // 忽略大小写 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	char s[]="hello";            
	char *p=strchr(s, 'l');      //strrchr()从右往左边寻找第一次出现的字符并返回指针
	char *p2=strchr(p+1, 'l');
	
	printf("%s\n", p);
	printf("%s\n", p2);     //找到第二个l；
	char *p3 = (char *)malloc(strlen(p)+1);
	strcpy(p3, p2);  //复制第二个l产生的字符串到p3上去
	printf("%s\n", p3); 
	 free(p3);   //注意一定在用完后释放掉malloc分配的东西 
	 
	//如何得到此字符以前的字符串？ 
	char c= *p;
	*p = '\0';
	char *s1=(char *)malloc(strlen(s)+1);
	strcpy(s1, s);
	printf("%s\n", s1);
	*p = c;   //并且恢复回去。 
	
	free(s1); 
	 

 	return 0;	
}  
