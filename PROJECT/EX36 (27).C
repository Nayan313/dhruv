#include <stdio.h>
#include <conio.h>
void main()
{
	char y[30];
	int i=0;
	clrscr();
	gets(y);

	while(y[i]!='\0')
	{
		if(y[i]>64 && y[i]<=96)
		y[i]=y[i]+32;

		i++;
	}
	puts(y);
	getch();
}
