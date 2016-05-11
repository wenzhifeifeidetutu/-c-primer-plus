#include"acllib.h"
#include<stdio.h>

int Setup()
{
	initConsole();
	puts("«Î ‰»ÎøÌ∂»");
	int width;
	scanf("%d", &width); 
	initWindow("test", 600, 600, width, width);
	beginPaint();
	line(20, 20, width-20, width-20);
	endPaint();
	
	return 0;
} 
