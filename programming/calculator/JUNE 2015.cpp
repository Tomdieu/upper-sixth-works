#include<stdlib.h>
#include<stdio.h>
#define rent 500;
int a,b,d,e,f,g,r1[100],r2[100],r3[100],z,ju,y,h;
float tua[500],vat[100],net[100];
void compare()
{
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
for(h=0;h<a;h++)
{
	vat[ju]=(1.8*tua[ju])/100;
	net[ju]=rent+tua[ju]+vat[ju];
}
}

int main()
{
	printf("> Enter the Number of meters");
scanf("%d",&a);
printf( "> Enter the meter  previous reading" );
for ( b=0; b<a ; b++)
{ 
scanf("%d",&r1[b]);
}
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
printf(" Meter\t Previous Reading\t Current Reading \t Units consummed");
for ( g=0; g<a; g++)
{
	z=g+1;
	printf("\n%d\t%d\t\t\t%d\t\t\t%d\t",z,r1[g],r2[g],r3[g]);
	printf("\n");
}
compare();
printf("\n\n\n\n\n");
printf(" Meter\t Previous Reading\t Current Reading \t Units consummed \tAmount to be paid ");
for ( y=0; y<a; y++)
{
	z=y+1;
	printf("\n%d\t%d\t\t\t%d\t\t\t%d\t\t\t%.2f",z,r1[y],r2[y],r3[y],net[y]);
	printf("\n");
}
return 0;
}
