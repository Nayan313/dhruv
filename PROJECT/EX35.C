//menyu program
#include<stdio.h>
#include<conio.h>
void menu()
{
	printf("For arithmetic UptratorsNDE printf");
	printf("----------------------------------\n");
	printf ("1 Additions\n");
	printf("2 SubtractionNo\n");
	printf("3 Multiplications\n");
	printf("4 Division\n");
	printf("Enter Your Choice:-");
}

void add(int a, int b)
{
	int c;
	c=a+b;
	printf ("Addition=%d\n",c);
}

void sub(int a, int b)
{
	int c;
	c=a-b;
	printf ("Subtraction=%d\n",c);
}

void multi(int a, int b)
{
	int c;
	c=a*b;
	printf ("Multiplication=%d\n",c);
}

void div(int a,int b)
{
	int c;
	c=a/b;
	printf("Division=%d\n",c);
}

void main()
{
	int a,b;
	int choice;
	clrscr();
	printf("enter the velue:-");
	scanf("%d",&a);
	printf("enter the velue:-");
	scanf("%d",&b);
	menu();
	scanf("%d",&choice);
	switch(choice)
{
	case 1:
	add(a,b);
	break;

	case 2:
	sub(a,b);
	break;

	case 3:
	multi(a,b);
	break;

	case 4:
	div(a,b);
	break;

	default:
	printf ("INVALIDINPUT");
}
	getch();
}
