#include <stdio.h>
#include <conio.h>

void input (int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter The Elements");
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

void add(int a[10],int b[10],int c[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("ans:-%d\n",c[i]);

	}
}
void main()
{
	int a[10],b[10],c[10],n;
	clrscr();
	printf("Enter The First Element\n");
	scanf("%d",&n);
	printf("This is a First Array\n");
	input(a,n);
	printf("this is a Second Array\n");
	input(b,n);
	printf("This is a Display number\n");
	display(a,n);
	printf("This is Second array No\n");
	display(b,n);
	add(a,b,c,n);
	getch();
}
