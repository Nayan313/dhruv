// print salary,age,bonus
#include<stdio.h>
#include<conio.h>

void main()
{
	long int salary,bonus;
	int age;
	clrscr();
	printf("enter your age:-");
	scanf("%d",&age);
	printf("enter your salary:-");
	scanf("%d",&salary);
	if(age>30 && salary>25000)
	{
		bonus=40000;
	}
	else
	{
		bonus=20000;
	}
	printf("Age:-%d\n",age);
	printf("Salary:-%d\n",salary);
	printf("Bonus:-%d\n",bonus);
	getch();
}










