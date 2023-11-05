#include <stdio.h>
#include <conio.h>

void input(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("Enter The Number:-");
	scanf("%d",&a[i]);
	}

}

void display(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}
void sum(int a[10],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		sum=sum+a[i];
	}
	printf("sum of all even numbers = %d\n",sum);


}
void main()
{
	int a[10],n;
	clrscr();
	printf("Enter The Number Of N:-");
	scanf("%d",&n);
	input(a,n);
	display(a,n);
	sum(a,n);
	getch();
}
