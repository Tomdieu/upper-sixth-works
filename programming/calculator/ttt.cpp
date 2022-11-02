#include<stdio.h>
int main()
{
int i,j,k,n,a[500],s,m,b,u,z;
	printf("Enter the size of data\n");
	scanf("%d",&n);
	printf("Enter the different data \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the data to be remove :");
	scanf("%d",&k);
	for(m=0;m<n;m++)
	{
		if(a[m]==k)
		 {
		a[m]=a[m+1];
	}
		else
		{
		printf("%d,",a[m]);	
		}
		
	}	
	printf("`\nenter an element to be inserted :");
	scanf("%d",&b);
	printf("\nenter the position ");
	scanf("%d",&s);
	a[u-1]=	b;
	n++;
	for(u=n;u>=s;u--)
	{
			a[u]=a[u-1];		
	}
	
	for(z=0;z<n;z++)
	{
		printf("%d\n",a[z]);
	}
		return 0;
	}
	


