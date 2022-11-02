#include<stdio.h>
int main()
{
	int ar[25],data,mid,low,high,siz,i,j;
	printf("enter the size of the list ");
	scanf("%d",&siz);
	printf("\nenter the element of the list");
	for(i=0;i<siz;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nenter value to be search :\n");
	scanf("%d",&
	data);
	low=0;
	high=siz;
	while(data!=ar[mid] && high>=low)
	{
		mid=(low+high)/2;
		if(ar[mid]==data)
		{
			printf("data found at %d position",mid+1);
		}
		if (data>ar[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return 0;
}
