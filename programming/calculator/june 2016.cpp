#include<stdio.h>
int main()
{
	int n,table[1000],c,d,t;
	printf("Enter the number of element to be sorted \n");
	scanf("%d",&n);
	printf("enter %d integers ",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&table[c]);
	}
	for(c=1;c<n;c++)
	{
		d=c;
		while(d!=0 && table[d]<table[d-1])
		{
			t=table[d];
			table[d]=table[d-1];
			table[d-1]=t;
			d=d-1;
		}
	}
	for(c=0;c<=n-1;c++)
	{
		printf("%d\t",table[c]);
	}
	return 0;
}
