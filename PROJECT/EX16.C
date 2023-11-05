//color 
#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b,t;
	clrscr();
	printf("enter the value:-");
	scanf("%c",&a);

	if(a=='r')
		printf("color is red");
	else if(a=='o')
		printf("color is orange");
	else if(a=='y')
		printf("color is yellow");
	else if(a=='g')
		printf("color is green");
	else if(a=='b')
		printf("color is blue");
	else if(a=='v')
		printf("color is violent");
	else if(a=='i')
		printf("color is indigo");
	else
		printf("color is invalid");
	getch();
}
