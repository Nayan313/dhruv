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
int search(int a[10][10],int r,int c,int s)
{
	int i,j,flag=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==s)
			{

				flag=1;
				break;
			}

			if(flag==1)
			break;
		}
			return(flag);

	}



}


void main()
{
	int a[10][10],r,c,s,flag;
	clrscr();
	printf("Enter The Row Number:-\n");
	scanf("%d",&r);
	printf("Entr The Col Number:-\n");
	scanf("%d",&c);
	printf("This is First Matrix\n");
	input(a,r,c);

	printf("This is First Matrix display\n");
	display(a,r,c);
	printf("Enter The Number To Search For:-");
	scanf("%d",&s);
       flag=search(a,r,c,s);

	if(flag==1)
	{
		printf("The Number %d Was in the array\n",s);
	}
	else
	{
		printf("The Number %d was not in the array\n",s);
	}


	getch();
}
