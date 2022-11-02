#include<stdio.h>
#include<windows.h>
int main()
{
	int n,temp,a[100],i,j,k,l;
	printf("ENTER A NUMBER ");
	scanf("%d",&n);
	printf("enter %d number ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-j-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
			    a[k+1]=temp;
			}
		}
	}
	printf("ELEMENT AFTER SORTING\n");
	for(l=0;l<n;l++)
	{
	printf("%d\n",a[l]);	
	}
	return 0;
}

