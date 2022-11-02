#include<stdio.h>
int main()
{
	const int limit=16;
	int count =1;
	int sum =0;
	int nextval=2;
	while(sum<limit)
	{
		sum=sum+nextval;
		nextval=nextval+2;
		count=count+1;
	}
	printf("Had to add together %d even number to reach value %d sum is %d\n",count-1,limit,sum);
	return 0;
}
