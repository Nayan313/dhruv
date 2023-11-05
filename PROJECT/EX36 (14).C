#include <stdio.h>
#include <conio.h>

int fac(int a)
{
	int i,ans=1;
	for(i=1;i<=a;i++)

	   ans=ans*i;
	   return ans;
}
void main()
{
	int a,ans,i;
	clrscr();
	printf("Enter The Number\n");
	scanf("%d",&a);
	ans=fac(a);
	printf("Ans:-%d",ans);
	getch();
}

