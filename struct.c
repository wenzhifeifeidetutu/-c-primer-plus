#include<stdio.h>
#include<string.h>

//��������һ���ṹ 
struct date{
	int month;
	int day;
	int year;
};
	
//������Ҫֱ������һ���ṹ�Ͷ������

struct  student{
	char snum[15];
	char name[15];
	char sex[10];
	
}s1, s2;
	

//�ṹ������ָ���ȡ��ַ��Ҫ&�����
//  strcuct data *pDate = &today; 



int main(int argc, char const *args[])
{
	
	struct date today;
	
	today.day=7;
	today.month=12;
	today.year=2015;
	/*s1.snum="140101190060"; //���������ַ���������帳ֵֻ�����ַ������ʼ��ʱʹ�ã���������
							//�ַ�����ĸ�ֵ���ַ�����ĸ�ֵֻ�ܶ���Ԫ��һһ��ֵ������ĸ�ֵ������
							//����� 
	s1.name="wenzhi";
	s1.sex="man";
	
	*/
	struct student s3={.name="liujian", .snum="140101190061", .sex="man" };
	//����ֻ����ָ�����string.h �����strcpy����ֵ��������=����ֵ�ַ����� 
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
