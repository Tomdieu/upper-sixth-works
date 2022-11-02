#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
int tmp,i,j,n,p,c,ext;
float Av,m;
char tmpx[100];
char x,chx;


void px()
{getch();}
 struct student
 {
 	char name[100];
 	float  mark;
 }std[100];
void swap()
{
tmp=std[i].mark;
strcpy(tmpx,std[i].name);
std[i].mark=std[i+1].mark;
strcpy(std[i].name,std[i+1].name);
std[i+1].mark=tmp;
strcpy(std[i+1].name,tmpx);
}
void whipe()
 {
 	system("cls");
 }

 int main()

{ m=0;
  	printf("Welcome \a\a\a"); px();
do 
{
whipe();
printf("        -Menu- \n\n ");
printf(" 1-Register the Marks <-- \n");
printf("\n");
printf(" 2-Quit \n\n");
  	chx=getch();
if ( chx=='2')
{
 whipe(); printf("\a Thanks for a feed back..");
 sleep(1); ext=1;
}
else
{
whipe();
printf(" Enter the number of students to be registerd.\n ");
scanf("%d",&n); whipe();
printf("\a\a Please enter the Records of.. \n");
for (i=0;i<n;i++)
{
	p=i+1;
printf(" Student %d/%d ",p,n);
printf("\n\n Name : ");
scanf("%s",&std[i].name);
printf("\n \n Mark : ");
scanf("%f",&std[i].mark);
m=m+std[i].mark;
whipe();
printf("\a");
}
printf("\n Press Enter to view the results \n");
getch();
Av=m/n;
for (c=0;c<n;c++)
{
 for (i=0;i<n-c-1;i++)
{
  if (std[i].mark>std[i+1].mark)
  {
  	swap();
  }
 }
}
 whipe();
 system("color 2b");
printf("       # Result         \n");
printf("\n Name \t\t Mark \t\t Rank");
p=1;
for (i=(n-1);i>=0;i--)
{
printf("\n%s\t \t%f \t%d",std[i].name,std[i].mark,p);
if (std[i].mark!=std[i-1].mark)
{p=p+1;}
printf(" \a");
}
printf("\t Average : %f \n",Av);
getch(); whipe();
printf(" Start New Operation ?");
printf("\n");
printf(" 1 : yes    0 : Exit   ");
x=getch();

if( x == '1' )
{ ext = 0;}
else
{whipe(); printf("\a Thanks for a Feedback"); sleep(1); ext=1;}
}
}
while ( ext == 0);
return 0;
}

