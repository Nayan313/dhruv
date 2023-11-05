#include<stdio.h>
#include<conio.h>

void main()
{
	char a[30];
	int i=0;
	clrscr();
	gets(a);

	while(a[i]!='0')
	{
		if(a[i]>=97 && a[i]<=122)
		a[i]=a[i]-32;
		i++;
	}
	puts(a);
	getch();
}