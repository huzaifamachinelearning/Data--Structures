#include<stdio.h>
#define LEFT_TOP 0XDA
#define RIGHT_TOP 0XBF
#define HORIZ 0XC4
#define VERT 0XB3
#define LEFT_BOT 0XC0
#define RIGHT_BOT 0XD9

void main(){
	char i,j;
	putchar(LEFT_TOP);
	for(i=0;i<10;i++)
	   putchar(HORIZ);
	putchar(RIGHT_TOP);
	putchar('\n');
	
	
	for(i=0;i<4;i++)
		putchar(VERT);
	for(j=0;j<10;j++)
	    putchar(' ');
	putchar(VERT);
	putchar('\n');
	
	putchar(LEFT_BOT);
	for(i=0;i<10;i++)
	   putchar(HORIZ);
	putchar(RIGHT_BOT);
	putchar('\n');
	
	
	
}

