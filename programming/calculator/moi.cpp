#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	int count;
	printf("this program perform quadratic calculation of the form ax²+bx+c=0:\n");
	printf("Enter a ,b and c in this order : \n");
	scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);
	d=b*b-4*a*c;
	if (d<0)
	{
		float X0,x3;
		x1=(-b/(2*a));
		X0=(sqrt(-d));
		x2=(-b/(2*a));
		x3=(sqrt(-d));
		printf("x1=%.2f+%.2fi\n",x1,X0);
		printf("x2=%.2f-%.2fi",x2,x3);		
	}
	count=10;
	while(count>=1)
	{
		printf("%d",count);
		count=count+1;
	}
	return 0;
}
