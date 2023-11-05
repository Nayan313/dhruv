#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b,t;
	clrscr();
	printf("enter the first charecter:-");
	scanf("%c",&a);
	fflush(stdin);
	printf("enter the second charecter:-");
	scanf("%c",&b);
	fflush(stdin);
	printf("enter the third charecter:-");
	scanf("%c",&t);

	printf("first charater is %c\n",a);
	printf("second charater is %c\n",b);
	printf("third charater is %c\n",t);
	getch();
}
