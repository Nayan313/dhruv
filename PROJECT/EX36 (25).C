#include <stdio.h>
#include <conio.h>
void main()
{
	char y[30];
	int i=0,len=0;
	clrscr();
	gets(y);

	while(y[i]!='\0')
	{
		if(y[i]==' ')
		len++;
		fi++;
	}
	len=len+1;
	printf("%d",len);
	getch();
}
