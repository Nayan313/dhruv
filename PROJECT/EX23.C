#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum;
	clrscr();
	i=1;
	sum=0;
	while(i<=10)
	{
	sum=sum+i;
	i=i+1;
	printf("%d\n",sum);
	}
	getch();
}