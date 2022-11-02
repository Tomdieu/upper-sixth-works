#include<stdio.h>
int main()
{
	const double pi=3.14159;
	int radius1,radius2;
	double area1,area2,cir1,cir2,ch1,ch2;
	printf("Please enter a value for the radius ");
	scanf("%d",&radius1);
	area1=pi*radius1*radius1;
	cir1=2*pi*radius1;
	printf("The area of a circle with radius %d is %5.2f\n",radius1,area1);
	printf("The circumfrence is %5.2f\n",cir1);
	radius2=2*radius1;
	area2=pi*radius2*radius2;
	cir2=2*pi*radius2;
	printf("The area of a circle with radius %d is %5.2f\n",radius2,area2);
	printf("The circumfrence is %5.2f\n",cir2);
	ch1=area2/area1;
	printf("The change in area is %5.2f\n",ch1);
	ch2=cir2/cir1;
	printf("The change in circumfrence is %5.2f",ch2);
}
