#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<dos.h>
#include<windows.h>
int i,j,k,l,m,n,o,p,q,r,t,s,u,z,temp;
char txt[100];
void yellow()
{
	system("color e9");
}
void quit()
{
	exit(0);
}
void red()
{
	system("color B9");
}
struct student
{
	char name[100];
	float mark[100],aver;
	
}a[100],b,c,d,e;
void swap()
{
	
	temp=b.mark[m];
	strcpy(txt,a[m].name);
	b.mark[m]=b.mark[l];
	strcpy(a[m].name,a[l].name);
	b.mark[l]=temp;
	strcpy(a[l].name,txt);
}

void clean()
{
	system("cls");
}
void G()
{
	getch();
}
int main()
{
	

	printf("WELCOME TO MY PROGRAM\n");
	G();
	printf("\n\n\n\n\n\n\n\t\t\tloading.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");printf(".");
	do
	{
	    clean();
		system("color");    
	int ni;
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
    printf("\t-  Enter your coice                      copyright(c)2020 -\n");
	printf("\t-----------------------------------------------------------\n");
	i=getch();
	if(i=='1')
	{
		int fi=0;;
		system("cls");
		printf("How many student do you want to register :\n");
		scanf("%d",&n);
		printf("you will enter the names of your %d students ",n);
		for(j=0;j<n;j++)
		{
			fi=fi+1;
			clean();
			yellow();
			printf("\t\tStudent %d/%d\n\n",fi,n);
			printf("NAME:");
			scanf("%s",&a[j].name);
			
		}
	}
	if(i=='2')
	{
		int fi;
		system("cls");
		printf("Enter the marks of your %d students ",n);
		red();
		for(k=0;k<n;k++)
		{fi=fi+1;
		clean();
			printf("\t\tstudents %d/%d\n\n",fi,n);
			printf("MARKS :");
			scanf("%f",&b.mark[k]);
		}
	}
	if(i=='3')
	{
		system("cls");
		printf("The mark in order of merits are :\n");
		for(l=0;l<n;l++)
		{
			yellow();
			for(m=l+1;m<n;m++)
			{
				if(b.mark[m]>b.mark[l])
				{
				   
					swap();
					
				}
			}
		}
		red();
		printf("NAMES\t\tMARKS\t\tRANK \n");
		for(o=0;o<n;o++)
		{
			ni=1;
			if(b.mark[o]!=b.mark[o+1])
		 {
		 ni=ni+1;
		 }
		 printf("%s\t\t%.2f\t%d\n",a[o].name,b.mark[o],ni);
		 
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
		if(p=='y' || p=='Y')
		{
			quit();
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
	return 0;
}
