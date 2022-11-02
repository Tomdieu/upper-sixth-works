#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,b;
	printf("Enter number");scanf("%d",&n);
	while(a<=n)
	{   a=2;
	
			n+=a*n;
			printf("%d\n",n);
		a++;
	
   }return 0;
}
