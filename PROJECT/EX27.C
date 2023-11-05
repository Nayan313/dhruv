#include<stdio.h>
#include<conio.h>

void main()
{
	int rev=0,digit,n;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&n);

	while(n>0)
	{
	digit=n%10;
	rev=rev*10+digit;
	n=n/10;
	}
	printf("%d\n",rev);
	getch();
}