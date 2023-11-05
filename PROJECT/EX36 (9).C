#include <stdio.h>
#include <conio.h>

void input(int a[10], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter The Value:-");
		scanf("%d",&a[i]);
	}
}
void display(int a[10], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

int  prime ( int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}

	}
	return flag;
}

void main()
{
	int a[10],n,i,t;
	clrscr();
	printf("Enter The Number N :-\n");
	scanf("%d",&n);
	printf("This is Input Number\n");
	input(a,n);
	printf("This is The Array Are\n");
	display(a,n);
	printf("This is Prime Check\n");
	for(i=0;i<n;i++)
	{
		t=prime(a[i]);
		if(t==0)
			printf("%d\n",a[i]);

	}
	getch();
}
