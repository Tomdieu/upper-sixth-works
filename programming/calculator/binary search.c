#include<stdio.h>
#include<stdlib.h>
int main()
{
int data,mid,high,low,i,j,k,n,a[100];
printf("Enter the number of elements \n");scanf("%d",&n);
printf("Enter %d numbers ",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\nEnter the number to search ");scanf("%d",&data);
low=0;high=n;
while(low<=high)
{
	mid=(high+low)/2;
	if(data==a[mid])
	{
		printf("Data found at position %d",mid+1);break;
	}
	else
	{
		if(data<a[mid])
		{
			high=mid-1;
		}
		if(data>a[mid])
		{
			low=mid+1;
		}
	}
}
return 0;
}
