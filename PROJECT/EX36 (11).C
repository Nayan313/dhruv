#include <stdio.h>
#include <conio.h>

void input(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter The array Value");
		scanf("%d",&a[i]);
	}
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int search(int a[10],int s, int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
		  flag=1;
		  break;
		}
	return=flag;
	}
}
void main()
{
	int a[10],n,s,flag;
	clrscr();
	printf("Enter The N Range");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
       flag=search(a,s,n); 
	if(flag=0)
	{
		printf("Search is true");
	}
	else
	{
		printf("Search is not true");
	}
	getch();
}