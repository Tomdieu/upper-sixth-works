#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,k,l,m,t,score;
	char country[100][100],capital[100][100],answer[100];
	printf("\n THE Country Quiz");
	printf("\n Please enter the following \n");
	for(i=0,l=1;i<=0,l<=1;i++,l++)
	{
		for(j=0;j<10;j++)
		{
			printf("Country [%d]",j);scanf("%s",&country[j][i]);
			printf("Capitals [%d]",j);scanf("%s",&capital[j][l]);
		}
	}
    do
    {
	/*for(t=1;t<=5;t++)
	{
	for(j=0;j<5;j++)
	{*/
			m=rand()%10;
	printf("What is the capital of  country %s",country[m]);
	scanf("%s",&answer[t]);
	if(strcmp(capital[m],answer[t])==0)
	{
		printf("Correct");score+=1;
	}
}while(score!=5);
}
