#include<stdio.h>
#include<conio.h>
int main()
{
	int j,n,k,min,a[100],i,tem,z;
	printf("Enter the number of number you want to sort :\n");
	scanf("%d",&n);
	printf("\nEnter %d Number to sort:\t\n",n);
	for(z=0;z<n;z++)
	{
		scanf("%d",&a[z]);
	}
	for(j=0;j<n;j++)
	{
		min=j;
	
	for(k=j+1;k<n;k++)
	{
		if(a[k]<a[min])
		{
			min=k;
		}
	}
	tem=a[j];
	a[j]=a[min];
	a[min]=tem;
}
	printf("Element After Sorting \n");
for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
