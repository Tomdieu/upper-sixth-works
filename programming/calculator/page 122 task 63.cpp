#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int power(int n,int a)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return a*pow(a,n-1);
	}
}
int main()
{
	int n,i,j,a;
	printf("Enter two number \t");
	scanf("%d",&a);
	printf("Enter the power\t");
	scanf("%d",&n);
	i=power(n,a);
	printf("%d",i);
}
