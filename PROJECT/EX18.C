//digits of number
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the no:-");
	scanf("%d",&a);

	if(a>9 && a<100)
	printf("no. is two digit");
	else if(a>99 && a<1000)
	printf("np. is three digit");
	else
	printf("no. is more thanthredigit");
	getch();
}