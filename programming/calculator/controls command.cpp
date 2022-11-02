#include<stdio.h>
#include"conio.h"
#include<control.h>
#include"stdlib.h"
#include<math.h>
#define PI 3.14159265
int main()
{
int a;
double x,ret,val,ret1,ret2;
	char ch;
do{
	scanf("%lf",&x);
	val=PI/180;
	ret=asin(x*val);
	printf("sin(%lf)=%lf\n",x,ret);
	ret1=cos((x*(PI/-180)));
	printf("cos(%lf)=%lf\n",x,ret1);
	ret2=ret/ret1;
	printf("tan(%lf)=%lf",x,ret2);
	
}while(a!=1);
	return 0;
}
