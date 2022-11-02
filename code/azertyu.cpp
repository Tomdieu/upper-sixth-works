#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n,i,j,k,l,a,b;
int main()
{
	do
	{
	printf("Please enter an odd number \n");scanf("%d",&n);
	a=n%2;
	if(a==0)
	{
		
	}
	if(a!=0)
	{
		for(i=1;i<=(n/2)+1;i++)
		{
			for(j=1;j<=2*n;j++)
			{
				if(j>=n-(i-1) && j<=n+(i-1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}while(1);
}
