#include<stdio.h>
#include<conio.h>

void main()
{
	char s[30],t[30],a[30],b[30];
	clrscr();
	printf("enter the string:-");
	gets(s);
	printf("enter the string:-");
	gets(t);
	printf("enter the string:-");
	gets(a);
	printf("enter the string:-");
	gets(b);
	strcat(s,t,a,b);
	strcat(a,b);
	puts(s);
	puts(a);
	getch();
}
