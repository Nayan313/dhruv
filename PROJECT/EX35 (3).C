#include<stdio.h>
#include<conio.h>

void main()
{
	char a[30];
	int i=0,c=0;
	clrscr();
	gets(a);

	while(a[i]!='\0')
	{
		c++;
		i++;
	}
	printf("length:-%d\n",c);
	getch();
}