#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<windows.h>

struct stud 
{
	float mark[100],aver;
	char  name[50];	
}a[100],b,c,d,e,f;
void red()
{
system("color b9");	
}
void clear()
{
	system("cls");
}
void rect()
{
	
}
 main(int argc ,char *argv [])
{
char txt[100];

	int i,j,k,l,m,n,o,p,q,r,t,z,temp,y,ni;
	do
	{
		system("cls");
	printf("ENTER PASSWORD \n");
	scanf("%d",&y);
	if(y==0000)
	{
		clear();
	do
	{
	system("cls");
	printf("\t-----------------------------------------------------------\n");
	printf("\t-                      MENU                               -\n");
	printf("\t-                                                         -\n");
	printf("\t- 1:Register the student                                  -\n");
	printf("\t-                                                         -\n");
	printf("\t- 2:register mark against the registed student            -\n");
	printf("\t-                                                         -\n");	
	printf("\t- 3:Rank the student inorder of merit                     -\n");
	printf("\t-                                                         -\n");
	printf("\t- 4:calculate the class average for the subject           -\n");
	printf("\t-                                                         -\n");
	printf("\t- 5:help                                                  -\n");
	printf("\t-                                                         -\n");
	printf("\t- 6:exit                                                  -\n");
    printf("\t-  Enter your coice                                       -\n");
	printf("\t-----------------------------------------------------------\n");
	i=getche();
	if(i=='1')
	{
		system("cls");
		printf("How many student do you want to register :\n");
		scanf("%d",&n);
		printf("you will enter the names of your %d students ",n);
		for(j=0;j<n;j++)
		{
			scanf("%s",&a[j].name);
		}
	}
	if(i=='2')
	{
		system("cls");
		printf("Enter the marks of your %d students ",n);
		red();
		for(k=0;k<n;k++)
		{
			scanf("%f",&b.mark[k]);
		}
	}
	if(i=='3')
	{
		system("cls");
		printf("The mark in order of merits are :\n");
		for(l=0;l<n;l++)
		{
			for(m=l+1;m<n;m++)
			{
				if(b.mark[m]>b.mark[l])
				{
				   
					temp=b.mark[m];
				    strcpy(txt,a[m].name);
					b.mark[m]=b.mark[l];
				    strcpy(a[m].name,a[l].name);
					b.mark[l]=temp;
					strcpy(a[l].name,txt);
					
				}
			}
		}
		red();
		        for(o=0;o<n;o++)
		{
			ni=1;
		 printf("%s\t\t\t\b\b%.2f\t\t\b%d\n",a[o].name,b.mark[o],ni);
		 if(b.mark[o]==b.mark[o+1])
		 {ni=ni+1;}
		}
		getche();
	}
	if(i=='4')
	{
		system("cls");
		printf("The class average are :\n");
		c.aver=0;
		for(p=0;p<n;p++)
		{
			c.aver+=b.mark[p];
		}
		c.aver=(c.aver)/n;
		printf("%.2f",c.aver);
		getche();
	}
	if(i=='6')
	{
		printf("\nAre you sure you want to exit \n if yes press y\n if no press any thing \n");
		p=getche();
		if(p=='y')
		{
			exit(0);
		}
	}
	if(i=='5')
	{
		system("cls");
		printf(" The programs helps you to register student\n");
		printf("\n");
		printf("YOU must fisrt enter the first option which permit you to register your stdent \n before accessing the other options\n");
	}
}while(z!=1);
}
}while(r!=0);
return 0;
}
