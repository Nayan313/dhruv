#include <stdio.h>
#include <conio.h>

void input(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the Value");
		scanf("%d",&a[i]);
	}
}
void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a);
	}
}
void sort(int a[10],int n)
{
	int t,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[j]<a[i])
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
		}
	}
}

void main()
{
	int a[10],n;
	clrscr();
	printf("Enter The N Range");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
	sort(a,n);
	getch();
}