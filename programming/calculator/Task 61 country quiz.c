#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char country[100][100],capitals[100][100],answer[100];
int i,j,k,l,r,n=1,counter=0;
int score=0;
printf("THE PROGRAM TAKES THE NAMES OF 10 COUNTRIES AND THIER CAPITALS\n");
printf(" Enter the names of the countries for column 1\n");
for(i=0;i<10;i++)
{
	for(j=0;j<=0;j++)
	{
	printf("\nCountry [%d]\t",i);scanf("%s",&country[i]);/*gets(country[i]);*/
}
}
printf("ENTER THE CAPITALS OF THE RESPECTIVE COUNTRIES \n");
for(l=0;l<10;l++)
{

	for(k=0;k<=0;k++)
	{
	printf("Capital [%d] : ",l);scanf("%s",&capitals[l]);
	}
}
r=rand()%10; 
printf("Answer the quetion below \n");
printf("\n\t\tEnter the capital of %s :\t\t ",country[r]);scanf("%s",&answer);
r=rand()%10; 
do
{
	printf("\t%d ",r);
printf("\n\t\tEnter the capital of %s :\t\t ",country[r]);scanf("%s",&answer);
r=rand()%10; 
if(strcmp(country[r],answer)==0)
{
	printf(" CORRECT ");
	score+=1;sleep(2);
}
counter=counter+1;
}while(counter!=5);
printf("\n\n\tYou had %d out of 5",score);
}
