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

float series(int a,int n)
{
	int i,f;
	float ans=a;
	for (i=1;i<=a;i++)
	{
		f=fac(i);
		printf("%f\n",pow(a,n)/(float)f);
		if(i%2==0)

			ans=ans+pow(a,n)/(float)f;
		else
			ans=ans+pow(a,n)/(float)f;

	}
	return ans;
 }

void main()
{
	int a,n;
	float ans;
	clrscr();
	printf("Enter The Number:-");
	scanf("%d",&a);
	printf("Enter The Number:-");
	scanf("%d",&n);
	ans=series(a,n);
	printf("Ans:-%f",ans);
	getch();
}

