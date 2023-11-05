//teble
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,ans;
	clrscr();
	printf("enter the number:-");
	scanf("%d",&n);
	while(i<=10)
	{
	ans=i*n;
	printf("%d*%d=%d\n",i,n,ans);
	i=i+1;
	}
	getch();
}