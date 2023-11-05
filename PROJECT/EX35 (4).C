#include<stdio.h>
#include<conio.h>

void main()
{
	char a[30];
	int i=0,c=0;
	clrscr();
	gets(a);

	while(a[i]!='0')
	{
		if(a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='a')
		c++;
		i++;
	}
	puts(a);
	printf("length:-%d\n",c);
	getch();
}