#include<stdio.h>
int main(void)
{
	int gan=0, ju=0;
	char ch;
	printf("Please input a string end by # :");
	while((ch = getchar()) !='#'){
	if(ch =='.') {printf("!"); ju++;}
	else if(ch == '!'){printf("!!"); gan++;}
	else printf("%c",ch);
	}
	printf("\nthe times of '.' replaced by'!' is : %d", ju);
	printf("\nthe times of '!'replaced by '!!' is : %d", gan);
	return 0;
}	
	
	