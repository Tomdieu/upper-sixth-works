#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
int power(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n>0)
	{
	return 2*pow(2,n-1);
	}
}
int main()
{
	int i,j,k,n,a;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	k=power(i);	
	printf("2^%d=%d\n",i,k);
	}
	
	return 0;
}
