#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<complex.h>
#include<math.h>
#include<string.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void clrscr(){system("cls");}
void G(){getch();}
void blue(){system("color b9");}
struct password
{
	char name[100];
	char email[100];
	char pass[100];
	int phone[100];
}tom,ivan,to;
 int i,j=2,k,l,m,n,o,p,q,r,t,s,u,v,w,x,y,z,rex,pa,len,cpr,coorX,coory,coory1,coory2;
 char a,b,c;
 int main()
 {
 	do
	 {
	 	 gotoxy(16,15);printf("welcome to my network");
	 	 G();
	 	 do
	 	 {
	 	 	clrscr();
	 	 	gotoxy(12,1);printf("Menu\n");
	 	 	gotoxy(10,2);printf("1-Register \n");
	 	 	gotoxy(10,3);printf("2-Options\n");
	 	 	gotoxy(10,4);printf("3-Exit\n");
	 	  gotoxy(25,j);	a=getche();
	 	 	if(a=='5')
	 	 	{j=j-1;
	 	 	
	 	 		gotoxy(25,j);printf("\b\b<---");
	 	 		b=getch();
	 	 		if(j==1)
	 	 		{
	 	 			gotoxy(20,4);printf("\b\b<---");
				  }
				  
	 	 		if(j==2 )
	 	 		{
	 	 			if(b!='5' && b!='2')
	 	 			{
	 	         clrscr();
	 	 		gotoxy(5,2);printf("Loading");
	 	 		gotoxy(2,3);printf("  ---------------------");
	 	 		gotoxy(4,5);printf("---------------------");
	 	 		n=3;
	 	 		for(i=0;i<=10;i++)
	 	 		{
	 	 			n=n+1;
	 	 			gotoxy(n,4);printf(">");sleep(1);
				  }clrscr();
				  gotoxy(5,1);printf("---------------------------------");
				  gotoxy(5,3);printf("---------------------------------");
				  gotoxy(5,5);printf("---------------------------------");
				  gotoxy(45,4);printf(" ----------------------------------------------------");
				  gotoxy(45,5);printf("|ENTER THE REQUIRE INFORMATION TO CREAT YOUR ACCOUNT | ");
				  gotoxy(45,6);printf(" ----------------------------------------------------");
				  gotoxy(5,7);printf("---------------------------------");
				  gotoxy(5,9);printf("---------------------------------");
				  	gotoxy(45,11);printf("-------------------");
				  	gotoxy(45,13);printf("-------------------");
				  gotoxy(5,2);printf("| Name:");scanf("%s",&tom.name);
				  gotoxy(5,4);printf("| Telephone Number :");scanf("%d",&tom.phone);
				  gotoxy(5,6);printf("| Email:");scanf("%s",&tom.email);
				  do{
				  rex=rand()%1000 *rand()%1000 ;
				  gotoxy(2,15);printf("This is the code you must enter :: %d",rex);
				  gotoxy(5,8);printf("| Code:");scanf("%d",&pa);
				  if(pa==rex){
				  	gotoxy(2,15);printf("\t\t\t\t\t\t\t\t\t");
				  gotoxy(5,11);printf("--------------------------------");
				  gotoxy(5,10);printf("|password:");scanf("%s",&tom.pass);
				  len=strlen(tom.pass);
				  if(len>=6)
				  {
				  	do
				  	{
				  	gotoxy(5,13);printf("------------------------------");
				  	gotoxy(5,12);printf("|Confirm password :");scanf("%s",&to.pass);
				  	cpr=strcmp(tom.pass,tom.pass);
				  	if(strcmp(tom.pass,to.pass)==0)
				  	{
				  		sleep(1);
				  	
				  		gotoxy(45,12);printf("|CORRECT PASSWORD |");
						
						  sleep(2);
						gotoxy(45,11);printf(" ------------------------");  
				  		gotoxy(45,12);printf("|Data save successfully |");
				  		gotoxy(45,13);printf(" ------------------------");
				  		t=1;
				  		sleep(2);
				  		r=2;
					  }
					  else
					  {
					  	gotoxy(5,12);printf("\b\b\b\b\b\b\b\b\b\b\b\b\b");
					  	gotoxy(40,12);printf("Password Does Not MAtch \t\t\t\t\t");
					  }
				  }while(t!=1);
				  }
				  else
				  {
				  	gotoxy(2,16);printf("The password lenght is small it must be atleast 6 character ");
				  	gotoxy(2,17);printf("Because of your Error a code will be generated");
				  }
				  			  }
								}while(r!=2);
			  }}
				  }
			  if(a=='2')
			  {
			  j=j+1;
			  if(j==3)
	 	 		{clrscr();
	 	 			gotoxy(20,2);printf("WELCOME TO MY UNIVERSE");
	 	 			gotoxy(20,3);
				  }
	 	 	
	 	 		gotoxy(25,j);printf("\b<---");	
	 	 		b=getch();
	 	 		if(j==4)
	 	 		{
	 	 			if(b!='2' && b!='5')
	 	 			{
	 	 			y=1;
	 	 			z=1;
		    		}
				  }
			  }
	 		  }while(y!=1);
	 }while(z!=1);
	 return 0;
 }
