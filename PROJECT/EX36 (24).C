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

		if(y[i]=='a'||y[i]=='e'||y[i]=='i'||y[i]=='o'||y[i]=='u')
		{
		len++;
		putch(y[i]);
		printf("\n");
		}
		i++;

	}
	printf("vovels:-%d\n",len);
	getch();
}