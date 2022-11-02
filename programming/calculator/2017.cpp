#include<stdio.h>
struct ste
{
	float mark;
	int num;
	char name[399]; 
	int regno;
	
 };struct ste result[50],t[399];
void insert_sort()
{
	int i,j,aux,n;
for(i=1;i<=n;i++)
{
	t[i].mark=0;
	t[i].num=1;
}

printf("enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the name and mark in this order ");
	scanf("%s%f",&result[i].name,&result[i].mark);
}
for(j=0;j<n;j++)
{
if(result[j].mark<t[j])
{
	aux=t[j];
	t[j]=result[j].mark;
	result[].mark[j]=aux[j];
}
}
t[i]=result[i];	
}

