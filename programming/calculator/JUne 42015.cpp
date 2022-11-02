#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
const int rent=500;

int a,b,d,e,f,g,r1[100],r2[100],r3[100],z,ju,y,h,p;
float tua[500],vat[100],net[100];
int main()
{
	system("color A");
	printf("> Enter the Number of meters");
scanf("%d",&a);
printf( "> Enter the meter  previous reading" );
for ( b=0; b<a ; b++)
{ 
scanf("%d",&r1[b]);
}
system("color b");
printf(" > Enter the meter  current reading " );
for(e=0 ; e<a ; e++)
{
scanf("%d",&r2[e]);
}
for ( f=0; f<a ; f++)
{
	r3[f]=r2[f]-r1[f];
}
system("cls");
system("color 3e");
printf("Meter\tPrevious Reading\tCurrent Reading \t Units consummed");
printf("                                                                                                         kwr");

for ( g=0; g<a; g++)
{
	z=g+1;
	printf("\n%d\t%d\t\t\t%d\t\t\t%d\t",z,r1[g],r2[g],r3[g]);
	printf("\n");
}
for(ju=0;ju<a;ju++)
{
	if(r3[ju]>=100)
	{
	tua[ju]=r3[ju]*100;	
	}
else if(r3[ju]<100)
	{
		tua[ju]=r3[ju]*65;
	}
}
printf("\n\n\n\n\n");
for(h=0;h<a;h++)
{
	system("color 3e");
	if(r3[h]>100)
	{
		tua[h]=r3[h]*100;
	}
	else if(r3[h]<100)
	{
		tua[h]=r3[h]*65;
	}
	if(r3[h]>100)
	{
	vat[p]=(1.8*tua[h])/100;
	net[p]=rent+tua[h]+vat[h];
		p++;
	}
	if(r3[h]<100)
	{
	vat[p]=(1.8*tua[h])/100;
	net[p]=rent+tua[h]+vat[h];
		p++;
	}
    
}	
getch();
printf("\n\n\n\n\n");
system("color 3f");
system("cls");
printf("Meter\tPrevious Reading\tCurrent Reading \tUnits consummed \tAmount to be paid ");
printf("                                                                               Kwh");
for ( y=0; y<a; y++)
{
	z=y+1;
	printf("\n%d\t%d\t\t\t%d\t\t\t%d\t\t\t%.2f",z,r1[y],r2[y],r3[y],net[y]);
	printf("\n");
}
getche();
}
