#include <stdio.h>
#include <conio.h>

void input(int a[10][10],int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{

		printf("Enter The value[%d][%d]:-",i,j);
		scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%2d",a[i][j]);

		}
			printf("\n");
	}

}

void add(int a[10][10], int b[10][10], int c1[10][10], int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		c1[i][j]=a[i][j]+b[i][j];
		}
	}
}

void main()
{
	int a[10][10],b[10][10],c1[10][10],r,c;
	clrscr();
	printf("Enter The Row Number:-\n");
	scanf("%d",&r);
	printf("Entr The Col Number:-\n");
	scanf("%d",&c);
	printf("This is First Matrix\n");
	input(a,r,c);
	printf("This is Second Matrix\n");
	input(b,r,c);
	printf("This is First Matrix display\n");
	display(a,r,c);
	printf("This is Second Matrix Display\n");
	display(b,r,c);
	printf("This is Result\n");
	add(a,b,c1,r,c);
	display(c1,r,c);
	getch();
}
