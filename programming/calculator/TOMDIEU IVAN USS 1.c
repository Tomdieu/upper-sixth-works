#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int i,j,k,l,m,n,o,p,q,r,t,s,u,z,temp;
char txt[100];
void yellow(){system("color e9");}
void quit(){exit(0);}
void red(){system("color B9");}
struct student
{	char name[100];
	float mark[100],aver;
}a[100],b,c,d,e;
void swap()
{	temp=b.mark[m];
	strcpy(txt,a[m].name);
	b.mark[m]=b.mark[l];
	strcpy(a[m].name,a[l].name);
	b.mark[l]=temp;
	strcpy(a[l].name,txt);
}
void clean(){system("cls");}
void G(){getch();}
int main()
{printf("\n\n\n\n\t\t\t\t\tWELCOME TO MY PROGRAM \n\t\t\t\t\tshcool:Government Bilingual high school yaounde \n\t\t\t\t\tName:TOMDIEU TCHADIEUKO IVAN GOTTFRIED \n\t\t\t\t\tClass: USS 1");G();
	printf("\n\n\n\n\n\t\t\t Wait while loading.");sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");printf(".");
	do	{
	char S[100];clean();system("color");int ni;for(i=0;i<=5;i++){printf("\a");	}
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
	printf("\t- 5:exit                                                  -\n");
	printf("\t-                                                         -\n");
	printf("\t-  Enter your coice                      copyright(c)2020 -\n");
	printf("\t-----------------------------------------------------------\n");
	i=getch();
	if(i=='1')
	{int fi=0;
		system("cls");
		if(n!=0){
		red();printf("\n\t\tPlease enter the name of the subject ");
		scanf("%s",&S);clean();
		printf("you will enter the names of your %d students ",n);
		for(j=0;j<n;j++)
		{fi=fi+1;clean();yellow();
			printf("\t\tStudent %d/%d\n\n",fi,n);printf("NAME:");scanf("%s",&a[j].name);}}
		else{printf("\t\tPlease enter the name of the subject ");
		scanf("%s",&S);clean();
		printf("\t\tHow many student do you want to register :\n");
		scanf("%d",&n);
		printf("you will enter the names of your %d students ",n);
		for(j=0;j<n;j++)
		{fi=fi+1;clean();yellow();
			printf("\t\tStudent %d/%d\n\n",fi,n);
			printf("NAME:");
			scanf("%s",&a[j].name);
	}}
	}
	if(i=='2')
	{int fi;
	if(n==0)
		{yellow();system("cls");printf("Please enter the number of student you want to enter their marks\t");scanf("%d",&n);
		for(k=0;k<n;k++)
		{fi=fi+1;clean();printf("\t\tstudents %d/%d\n\n",fi,n);
		printf("%s\t",a[k].name);
		printf("MARKS :");scanf("%f",&b.mark[k]);}
		}
		else{
		system("cls");printf("Enter the marks of your %d students \n",n);red();
		for(k=0;k<n;k++)
		{fi=fi+1;clean();printf("\t\tstudents %d/%d\n\n",fi,n);
		printf("Name %s\t",a[k].name);printf("MARKS :");scanf("%f",&b.mark[k]);
		}}
		
	}
	if(i=='3')
	{system("cls");
		printf("The mark in order of merits are :\n");
		for(l=0;l<n;l++)
		{yellow();for(m=l+1;m<n;m++){if(b.mark[m]>b.mark[l]){swap();}}}red();
		printf("\n\n\t\tNAMES\t\tMARKS\t\tRANK \n");
		ni=1;
		for(o=0;o<n;o++)
		{printf("\t\t%s\t\t%.2f\t\t%d\n",a[o].name,b.mark[o],ni);
		 if(b.mark[o]!=b.mark[o+1]){ni=ni+1;}}getche();
	}
	if(i=='4')
	{	system("cls");printf("\nThe class average are :\n");
		c.aver=0;for(p=0;p<n;p++){c.aver+=b.mark[p];}c.aver=(c.aver)/n;printf("Class Average=%.2f",c.aver);	getche();clean();
	    printf("\t\t%s CLASS\n",strupr(S));
		printf("\n\t\tNAMES\t\t\tMARKS\t\tRANK \n");
		for(o=0;o<n;o++)
		{printf("\t\t%s\t\t\t%.2f\t\t%d\n",a[o].name,b.mark[o],ni);
		 if(b.mark[o]!=b.mark[o+1]){ni=ni+1;}}printf(" \t\t\t\tClass Average=%.2f",c.aver);getche();
	}
	if(i=='5')
	{		printf("\nAre you sure you want to exit \n if yes press y\n if no press any thing \n");
		p=getche();if(p=='y' || p=='Y'){quit();}}
	}while(z!=1);
	return 0;
}
