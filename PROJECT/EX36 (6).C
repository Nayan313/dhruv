#include <stdio.h>
#include <conio.h>

void input (int a[5],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	printf("Enter The Number\n");
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}

	printf("ans%d\n",sum);
}
void display (int a[10],int n)
{
	int i,sum;
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);

	}

}

void main()
{
	int a[5],n;
	clrscr();
	printf("Enter The Number of N:-");
	scanf("%d",&n);
	input (a,n);
	display(a,n);
	getch();
}
