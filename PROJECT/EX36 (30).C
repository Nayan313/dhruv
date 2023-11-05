#include <stdio.h>
#include <conio.h>

void input(char a[10][50], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(a[i]);
	}
}
void display(char a [10][50], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		puts(a[i]);
	}
}

void sort(char a[10][50], int n)
{
	char t[10][50];
	int i,j;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (strcmp(a[j],a[i])<0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
}


void main()
{
	char a[10][50];
	int n;
	clrscr();
	printf("Enter The Value Of N:-");
	scanf("%d",&n);
	printf("This is String Value\n");
	input(a,n);
	printf("\n");
	display(a,n);
	printf("This is Asending Order\n");
	sort(a,n);
	printf("\n");
	display(a,n);
	getch();
}