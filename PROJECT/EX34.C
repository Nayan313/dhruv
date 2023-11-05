#include<stdio.h>
#include<conio.h>

void add()
{
	int a=1,b=2,c=3,d;
	d=a+b+c;
	printf("%d\n",d);
}

void sub()
{
	int a=1,b=2,c=3,d;
	d=a-b-c;
	printf("%d\n",d);
}

void main()
{
	void add();
	void sub();
	clrscr();
	add();
	sub();
	getch();
}