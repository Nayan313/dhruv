#include <stdio.h>
#include <conio.h>

int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}

void main()
{
	int a,b,c;
	clrscr();
	a=15;
	b=20;
	c=add(a,b);
	printf("Ans:-%d",a);
	getch();
}