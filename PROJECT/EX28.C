#include<stdio.h>
#include<conio.h>

void main()
{
	int rev=0,digit,n,a;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&a);
	n=a;
	while(a>0)
	{
	digit=a%10;
	rev=rev*10+digit;
	a=a/10;
	}
	printf("original numbe:-%d\n",n);
	printf("reverse numer%d\n",rev);
	if(rev==n)
	printf("it is palidrum");
	else
	printf("is not palidrum");
	getch();
}