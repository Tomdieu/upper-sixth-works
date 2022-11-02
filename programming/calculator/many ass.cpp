#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i,j,k,l,m,t;
	char country[100][100],capital[100][100],answer[100][100];
	printf("\n THE Country Quiz");
	printf("\n Please enter the following \n");
	for(i=0,l=1;i<=0,l<=1;i++,l++)
	{
		for(j=0;j<9;j++)
		{
			printf("Country [%d]",j);scanf("%s",&country[j][i]);
			printf("Capitals [%d]",j);scanf("%s",&capital[j][l]);
		}
	}
	m=rand()%10;
	for(t=1;t<=1;t++)
	{
	for(j=0;j<5;j++)
	{
	printf("What is the capital of  country %s",country[m][t]);
	scanf("%s",answer[1][1]);
	if(strcmp(capital[j][t],answer[1][1])==0)
	{
		printf("Correct");
	}
}
}
}
