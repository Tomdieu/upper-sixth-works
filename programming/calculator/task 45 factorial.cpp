#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
unsigned int fact=1,n,z=1,seed;
int i,u;
int main()
{

	do
	{
		u=rand()+srand();
		printf("Enter a number to compute factorial\n");
	scanf("%d",&n);
	printf("%d",z);
	if(n<0)
	{
	printf("Non negative numbers are required ");
	getch();
	system("cls");	
	}
	if(n>0)
	{
		if(n==0)
		{
			printf("%d!=1",n);	
		}
	else
	{
		i=1;
		while(i<=n)
		{
		fact=fact*i;
		i=i+1;
		}
		printf("\n %d!=%d",n,fact);
	}
	}	
	}while(z!=1232);
return 0;
}

