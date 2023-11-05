#include<stdio.h>
#include<conio.h>

void main()
{
	int o,p,i;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&o);
	printf("enter the number:-");
	scanf("%d",&p);

	for(i=o;i<=p;i++)
	{
	if(i%2==0)
	printf("%d\n",i);
	}
	getch();
}