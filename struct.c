#include<stdio.h>
#include<string.h>

//或者声明一个结构 
struct date{
	int month;
	int day;
	int year;
};
	
//或者你要直接声明一个结构和定义变量

struct  student{
	char snum[15];
	char name[15];
	char sex[10];
	
}s1, s2;
	

//结构变量的指针和取地址需要&运算符
//  strcuct data *pDate = &today; 



int main(int argc, char const *args[])
{
	
	struct date today;
	
	today.day=7;
	today.month=12;
	today.year=2015;
	/*s1.snum="140101190060"; //上述这种字符数组的整体赋值只能在字符数组初始化时使用，不能用于
							//字符数组的赋值，字符数组的赋值只能对其元素一一赋值，下面的赋值方法是
							//错误的 
	s1.name="wenzhi";
	s1.sex="man";
	
	*/
	struct student s3={.name="liujian", .snum="140101190061", .sex="man" };
	//否则只有用指针或者string.h 里面的strcpy来赋值而不能用=来赋值字符串； 
	strcpy(s2.name, "wenzhi");
	
	struct date *pDate = &today;
	
	struct date yestoday={07, 32, 2015};
	printf("Today is %i-%i-%i", today.day, today.month, today.year);
	printf("yesoday is %i-%i-%i", yestoday.day, yestoday.month, yestoday.year);
	printf("\ntoday address is %p", pDate);
	//printf("\n%s %s %s", s1.name, s1.sex, s1.snum);
	printf("\n%s %s %s ", s3.name, s3.sex, s3.snum);
	printf("\n%s", s2.name);
	
	return 0;
	
}
