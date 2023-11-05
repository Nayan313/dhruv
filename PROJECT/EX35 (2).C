#include<stdio.h>
#include<conio.h>

void input(int a[10][10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
	printf("value is(%d)(%d)",i,j);
	scanf("%d",&a[i][j]);
	}
	}
}

void display(int a[10][10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
	printf("%2d",a[i][j]);
	}
	printf("\n");
	}
}

void main()
       {
	int a[10][10],row,col;
	clrscr();
	printf("enter the velue:-");
	scanf("%d",&row);
	printf("enter the velue:-");
	scanf("%d",&col);
	input(a,row,col);
	display(a,row,col);
	printf("---------\n");
	printf("matrix =2\n");
	printf("---------\n");
	printf("enter the velue:-");
	scanf("%d",&row);
	printf("enter the velue:-");
	scanf("%d",&col);
	input(a,row,col);
	display(a,row,col);

	getch();
}