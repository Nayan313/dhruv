#include <stdio.h>
#include <conio.h>
void main()
{
	char y[10],c;
	int i=0,r=0;
	clrscr();
	printf("Enter The Words\n");
	gets(y);
	printf("Enter The char to find\n");
	scanf("%c",&c);


	while(y[i]!='\0')
	{
		if(y[i]==c)
		{
			r++;
		}
		i++;
	}
	printf("%d",r);
	getch();
}



