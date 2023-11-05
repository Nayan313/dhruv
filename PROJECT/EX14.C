//difference of two no. is positive or negative
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);

	c=a-b;
	printf("%d\n",c);

	if(c>0)
	printf("positive");
	else
	printf("bifference");
	getch();
}