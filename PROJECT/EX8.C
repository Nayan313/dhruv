//program to find basic salary
#include<stdio.h>
#include<conio.h>

void main()
{
	float s,h,d,p,n;
	clrscr();
	printf("enter the value of salary:-");
	scanf("%f",&s);
	printf("enter the value of hra:-");
	scanf("%f",&h);
	printf("enter the value of da:-");
	scanf("%f",&d);
	printf("enter the value of pf:-");
	scanf("%f",&p);
	n=s+h+d-p;
	printf("basic salary=%f\n",n);
	getch();
}