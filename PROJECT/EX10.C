//find to greatest of two no
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);

	if(a>b)
	printf("a is greater");
	else
	printf("b is greater");
	getch();
}