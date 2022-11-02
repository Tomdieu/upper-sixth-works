#include<stdio.h>
int factorial(int i)
{
	if(i==1)
	{
		return 1;		
	}
	else
	{
	return i*factorial(i-1);	
	}
}
int main()
{
	int i,b;
	printf("Enter a number to compute factorial");
	scanf("%d",&i);
	b=factorial(i);
	return 0;
}
