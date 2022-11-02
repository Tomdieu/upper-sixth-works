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
}tom,ivan;
 int i,j,k,l,m,n,o,p,q,r,t,s,u,v,w,x,y,z;
 char a;
 int main()
 {
 	do
	 {
	 	 gotoxy(16,15);printf("welcome to my network");
	 	 G();
	 	 do
	 	 {
	 	 	gotoxy(12,1);printf("Menu\n");
	 	 	gotoxy(10,2);printf("1-Register \n");
	 	 	gotoxy(10,3);printf("2-Options\n");
	 	 	gotoxy(10,4);printf("3-Exit\n");
	 	 	a=getche();
	 	 	if(a=='1')
	 	 	{
	 	 		gotoxy(2,3);printf("---------------------");
	 	 		gotoxy(4,5);printf("---------------------");
	 	 		for(i=0;i<10;i++)
	 	 		{
	 	 			gotoxy(3,4);printf(">");sleep(1);
				  }
			  }
	 	
		  }while(y!=1);
	 }while(z!=1);
 }
