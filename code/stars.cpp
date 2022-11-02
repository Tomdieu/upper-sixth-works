#include<stdio.h>
#include<iostream>
#include<stdlib.h>
int main()
{
	int i,j,k;
	/*for(i=1;i<=3;i++)
	{
		
		for(j=3;j>=1;j--)
		printf(" ");
		{
			for(k=1;k<=i*2-1;k++)
			{
			printf("*");
			}
		}
		printf("\n");
	}*/
	
	int n;
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n+1;j++)
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
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=2*n+1;j++)
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
	//getch(0);
	return 0;
	}
