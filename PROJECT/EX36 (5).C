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
void transform(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		printf("%2d",a[j][i]);

		}
			printf("\n");
	}

}


void main()
{
	int a[10][10],r,c;
	clrscr();
	printf("Enter The Row Number:-\n");
	scanf("%d",&r);
	printf("Entr The Col Number:-\n");
	scanf("%d",&c);
	printf("This is First Matrix\n");
	input(a,r,c);

	printf("This is First Matrix display\n");
	display(a,r,c);

	printf("This is Result\n");
	transform(a,r,c);
	getch();
}
