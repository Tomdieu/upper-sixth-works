#include<stdio.h>
int main()
{
	int ar[25],i,j,data,flag=0,size,x;
	printf("enter number of list:");
	scanf("%d",&size);
	printf("enter the number of element of list");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nenter the value to be sorted: ");
	scanf("%d",&data);
	for(j=0;j<size;j++)
	{
		if(ar[j]==data)
		{
			flag=1;
			x=j;
			break;
		}
	}
	if(flag==1)
	{
		printf("value found at location %d",x);
	}
	else
	{
		printf("value not found");
	}
	return 0;
}
