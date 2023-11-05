//pass and fail
#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20];
	int m1,m2,m3,m4,m5,r;
	float p;
	clrscr();

	printf("enter your name:-");
	scanf("%s",&name);
	printf("enter your rollno:-");
	scanf("%d",&r);
	printf("enter marks 1:-");
	scanf("%d",&m1);
	printf("enter marks 2:-");
	scanf("%d",&m2);
	printf("enter marks 3:-");
	scanf("%d",&m3);
	printf("enter marks 4:-");
	scanf("%d",&m4);
	printf("enter marks 5:-");
	scanf("%d",&m5);

	p=(m1+m2+m3+m4+m5)/5;
	printf("parcentage:-%f\n",p);

	if(p>70)
		printf("grade=distinction");
	else if(70>p>60)
		printf("grade=first class");
	else if(60>p>50)
		printf("grade=second class");
	else if(50>p>40)
		printf("grade=pass");
	else
		printf("grade=fail");
	getch();
}