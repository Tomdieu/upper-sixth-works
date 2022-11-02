#include<stdio.h>
struct complex
{
	float rp ,ip;
	
} n1,n2,s;
int main()
{
	printf("enter real part and immaginary part for num1: ");
	scanf("%f",&n1.rp);
	scanf("%f",&n1.ip);
	printf("\n the number is %f +i%f",n1.rp,n1.ip);
	printf("\nenter real part and immaginary part for num2 :");
	scanf("%f",&n2.rp);
	scanf("%f",&n2.ip);
	printf("\n the number 2 is %f + i%f\n",n2.rp,n2.ip);
	s.rp=n1.rp+n2.rp;
	s.ip=n2.ip+n2.ip;
	printf("(%f+i%f)+(%f+i+%f)=%f+i%f",n1.rp,n1.ip,n2.rp,n2.ip,s.rp,s.ip);
	return 0;
}
