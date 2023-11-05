//program for swap two number
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	//before swapping
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);

	//after swapping
	printf("after swapping\n");
	c=a;
	a=b;
	b=c;
	printf("%d\n",a);
	printf("%d\n",b);
	getch();
}