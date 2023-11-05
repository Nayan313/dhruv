//program to find simple interest
#include<stdio.h>
#include<conio.h>

void main()
{
	float i,p,r,n;
	clrscr();
	printf("enter the value of p:-");
	scanf("%f",&p);
	printf("enter the value of r:-");
	scanf("%f",&r);
	printf("enter the value of n:-");
	scanf("%f",&n);
	i=(p*r*n)/100;
	printf("simple interest=%f\n",i);
	getch();
}