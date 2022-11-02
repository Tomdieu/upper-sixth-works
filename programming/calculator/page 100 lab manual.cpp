#include<stdio.h>
const int limits=16;
int count=1,sum=0,nextval=2;
int main()
{
	while(sum<limits)
	{
		sum=sum+nextval;printf(" \nsum %d",sum);
		nextval=nextval+2;printf("nextval=%d",nextval);
		count=count+1;printf("count=%d",count);
	}
	printf("Had to add together %d even numbers to reach value %d.sum is %d\n",count-1,limits,sum);
	return 0;
}
