#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n=1;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&i);
	printf("table of:-%d\n",i);
	do
	{
	printf("%d*%d=%d\n",i,n,i*n);
	n++;
	}
	while(n<=10);
	getch();
}