#include <stdio.h>
#include <conio.h>

void yash(int a)
{
	int i,j;
	for(i=1;i<=a;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	   printf("%d",j);
	   }
	   printf("\n");



	 }

}

void main()
{
	int a;
	clrscr();
	printf("Enter The Number:-");
	scanf("%d",&a);
	yash(a);
	getch();
}