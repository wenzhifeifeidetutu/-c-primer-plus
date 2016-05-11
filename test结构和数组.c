#include <stdio.h>

int main()
{
	struct abc
	{
		int x ;
		char y ;
		char *p ;
		int s;
	};
	struct abc text = {
		2,'A',"I love you.",1
	};
	printf("%i %c %s %d\n",text);
	printf("%i %c %s %d\n",*(&text+0),*(&text+1),*(&text+2),*(&text+3));
	printf("%p\n %p\n", &text.x, &text.y);
	printf("%p\n %i\n", (&text + 0),  *(&text + 0) ); 
	text.y = 'B';
	printf("%i %c %s %d\n",text);
	printf("%i %c %s %d\n",*(&text+0),*(&text+1),*(&text+2),*(&text+3));
	return 0;
}

