#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,f=1;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&x);

	for(y=1;y<=x;y++)
	{
	f=f*y;
	}
	printf("%d\n",f);
	getch();
}