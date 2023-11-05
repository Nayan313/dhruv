#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0;
	char s[30],t[30];
	clrscr();
	printf("Enter the String:-");
	gets(s);
	strcpy(t,s);
	printf("Copied String:-");
	puts(t);
	getch();
}