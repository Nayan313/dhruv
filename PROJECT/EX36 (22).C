#include <stdio.h>
#include <conio.h>

int fac(int a)
{
	int f,i;
	f=1;
	for (i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}

float series(int a)
{
	int i,f;
	float ans=0.0;
	for (i=1;i<=a;i++)
	{
		f=fac(i);

		ans=ans+(float)1/(float)f;
	}
	return ans;
 }

void main()
{
	int a;
	float ans;
	clrscr();
	printf("Enter The Number:-");
	scanf("%d",&a);
	ans=series(a);
	printf("Ans:-%f",ans);
	getch();
}

