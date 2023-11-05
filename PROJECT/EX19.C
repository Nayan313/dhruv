//units charge program
#include<stdio.h>
#include<conio.h>

void main()
{
	int units;
	float unitcharge,full,govt,meter,total;
	clrscr();
	printf("enter the units:-");
	scanf("%d",&units);

	if(units<=50)
	unitcharge=units*0.5;
	else if(units<=100)
	unitcharge=(50*0.5)+(units-50)*0.75;
	else if(units<=200)
	unitcharge=(50*0.5)+(50*0.75)+(units-100)*1.00;
	else
	unitcharge=(50*0.5)+(50*0.75)+(100*1.00)+(units-200)*1.5;

	printf("units charges:-%f\n",unitcharge);
	full=unitcharge*0.4;
	printf("fullcharges:-%f\n",full);
	govt=(unitcharge+full)*10;
	printf("govt charges:-%f\n",govt);
	meter=25;
	printf("meter charges:-%f\n",meter);
	total=(unitcharge+full+meter+govt);
	printf("total bill:-%f\n",total);
	getch();
}


