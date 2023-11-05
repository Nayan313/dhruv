#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i;
	char s[30],temp;
	clrscr();
	printf("Enter the reverse string:-");
	gets(s);
	while(s[len]!='\0')
	{
		len++;
	}
	for(i=0;i<(len-1)/2;i++)
	{
		temp=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=temp;
	}
	printf("Reverse String:-%s",s);
}