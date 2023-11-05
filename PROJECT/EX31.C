#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,f1,f2,f3;
	clrscr();
	printf("enter the number trems:-");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("%d\n",f1);
	printf("%d\n",f2);
	i=3;
	while(i<=n)
	{
	f3=f1+f2;
	printf("%d\n",f3);
	f1=f2;
	f2=f3;
	i++;
	}
	getch();
}