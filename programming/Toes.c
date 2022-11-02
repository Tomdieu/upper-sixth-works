#include<stdio.h>
#include<stdlib.h>
int totalrows=6;
	int row,colspace,colstar;
int main()
{
	
	for(row=1;row<=totalrows;row++)
	{
		for(colspace=totalrows-row;colspace>=1;colspace)
		{
			printf(" ");
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(row=totalrows-1;row>=1;row--)
	{
		for(colspace=1;colspace<=colspace<=totalrows-row;colspace++)
		{
			printf(" ");
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
