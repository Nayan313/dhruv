#include <stdio.h>
#include <conio.h>

void main()
{
	int a[10],i;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("this is a array value\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}

	getch();
}
