//check no. divisible by 7
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("enter the value of a:-");
	scanf("%d",&a);

	if(a%7==0)
	printf("a is divisiblr");
	else
	printf("a is not divisible");
	getch();
}
