#include<stdio.h>
#include<conio.h>

void printline()
{
	printf("--------------------\n");
	printf("--------------------\n");
}
void main()
{
	int a=1,b=2,c=3; 
	void printline(); 
	clrscr(); 
	printf("%d\n",a); 
	printline(); 
	printf("%d\n",b); 
	printline(); 
	printf("%d\n",c);
	printline();
	getch();
}