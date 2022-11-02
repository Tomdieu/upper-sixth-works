#include<stdio.h>
int main()
{
	int a[100],i,j,k,n,tmp,K;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("\n enter values to the array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("unsorted values");
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	for(int c=0;c<n;c++)
	{
		for(int h=0;h<n-c-1;h++)
		{
			if(a[h]>a[h+1])
			{
				tmp=a[h];
				a[h]=a[h+1];
				a[h+1]=tmp;
			}
		}
	}
	printf("sorted list is\n");
	for(k=0;k<n;k++)
	{
		printf("%d",a[K]);
	}
	
	return 0;
}
