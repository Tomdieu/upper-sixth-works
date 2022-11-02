#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char name[100],vo[100], *az;
int main()
{
	printf("enter a string\t\n");gets(name);
	printf("enter the word to search\t\n");
	gets(vo);
	az=strstr(name,vo);
	if(az==NULL)
	{
		printf("\n\nData not found ");
	}
	else
	{
		printf("%s was found at position %d",vo,az-name);
	}
	return 0;
}
