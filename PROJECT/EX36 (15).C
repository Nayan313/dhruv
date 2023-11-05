 #include <stdio.h>
 #include <conio.h>
 void yash(int n)
 {
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);

		}
		printf("\n");
	}
 }
 void main()
 {
	int n;
	clrscr();
	printf("Enter The value");
	scanf("%d",&n);
	yash(n);
	getch();
 }
