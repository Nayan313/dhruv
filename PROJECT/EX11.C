//check no. is even or odd
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the value of a:-");
	scanf("%d",&a);
	if(a%2==0)
	printf("a is even");
	else
	printf("a is odd");
	getch();
}