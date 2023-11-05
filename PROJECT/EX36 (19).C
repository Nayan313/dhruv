#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0;
	char s[30];
	clrscr();
	printf("Enter The String:-\n");
	gets(s);
	len=strlen(s);
	printf("Length of String:-%d\n",len);
	getch();
}