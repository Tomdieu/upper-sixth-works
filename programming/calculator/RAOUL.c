#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<complex.h>
#include<math.h>
#include<string.h>
#include<dos.h>
#include<windows.h>
#include<time.h>
#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetColor(int ForgC)
{
     WORD wColor;
     ///We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     ///We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
        ///Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     ///Get the handle to the current output buffer...
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     ///This is used to reset the carat/cursor to the top left.
     COORD coord = {0, 0};
     ///A return value... indicating how many chars were written
     ///   not used but we need to capture this since it will be
     ///   written anyway (passing NULL causes an access violation).
     DWORD count;
     ///This is a structure containing all of the console info
     /// it is used here to find the size of the console.
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     ///Here we will set the current color
     SetConsoleTextAttribute(hStdOut, wColor);
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          ///This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          ///This will set our cursor position for the next print statement.
          SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
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
 int i,j=2,k,l,m,n,o,p,q,r,t,s,u,v,w,x,y,z,rex,pa,len,cpr,coorX,coory,coory1,coory2,score,score1,level=1;
 char a,b,c,player[100];
 int az;
  FILE *fp;
  void error()
  {
  	score=score*2;
  }
 int main()
 {
 		fp=fopen("RAOUL.txt","r+");
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
	 	 	gotoxy(20,6);printf("Use the following direction");
	 	 	gotoxy(20,7);printf("Press ");
	 	 	gotoxy(20,8);printf(" 5: To move upward ");
	 	 	gotoxy(20,10);printf(" 2: To move downward");
	 	  gotoxy(25,j);	a=getche();
	 	 	if(a==UP)
	 	 	{j=j-1;
	 	 	
	 	 	if(j==1)
	 	 		{
	 	 			gotoxy(20,4);printf("<---");
	 	 			j=4;
				  }
				  if(j==5)
				  {
				  	gotoxy(20,2);printf("<---");j=2;
				  }
	 	 		gotoxy(25,j);printf("<---");
	 	 		b=getch();			  
	 	 		if(j==2 )
	 	 		{
	 	 			if(b!=UP && b!=DOWN)
	 	 			{
	 	         clrscr();
	 	         SetColorAndBackground(4,15);
	 	 		gotoxy(5,2);printf("Loading");
	 	 		gotoxy(4,3);printf("---------------------");
	 	 
		  
		  		gotoxy(4,5);printf("---------------------");
	 	 		n=3;
	 	 		for(i=0;i<=10;i++)
	 	 		{
	 	 			n=n+1;
	 	 			gotoxy(n,4);SetColorAndBackground(3,11);printf(">");sleep(1);
				  }clrscr();
				  
				  gotoxy(5,1);SetColorAndBackground(2,13);printf("---------------------------------");
				  gotoxy(5,3);SetColorAndBackground(2,13);printf("---------------------------------");
				  gotoxy(5,5);SetColorAndBackground(2,13);printf("---------------------------------");
				  gotoxy(45,4);SetColorAndBackground(2,13);printf(" ----------------------------------------------------");
				  gotoxy(45,5);SetColorAndBackground(2,13);printf("|ENTER THE REQUIRE INFORMATION TO CREAT YOUR ACCOUNT | ");
				  gotoxy(45,6);SetColorAndBackground(2,13);printf(" ----------------------------------------------------");
				  gotoxy(5,7);SetColorAndBackground(2,13);printf("---------------------------------");
				  gotoxy(5,9);SetColorAndBackground(2,13);printf("---------------------------------");
				  gotoxy(45,11);SetColorAndBackground(2,13);printf("-------------------");
			      gotoxy(45,13);SetColorAndBackground(2,13);printf("-------------------");
				  gotoxy(5,2);SetColorAndBackground(3,13);printf("| Name:");SetColorAndBackground(0,15);scanf("%s",&tom.name);
				  gotoxy(5,4);SetColorAndBackground(2,13);printf("| Telephone Number :");SetColorAndBackground(0,15);scanf("%d",&tom.phone);
				  gotoxy(5,6);SetColorAndBackground(2,13);printf("| Email:");SetColorAndBackground(0,15);scanf("%s",&tom.email);
				  do{
				  rex=rand()%1000 *rand()%1000 ;
				  gotoxy(2,15);printf("This is the code you must enter :: %d",rex);
				  gotoxy(5,8);SetColorAndBackground(2,13);printf("| Code:");SetColorAndBackground(0,15);scanf("%d",&pa);
				  if(pa==rex){
				  	gotoxy(2,15);printf("\t\t\t\t\t\t\t\t\t");
				  gotoxy(5,11);SetColorAndBackground(2,13);printf("--------------------------------");
				  gotoxy(5,10);SetColorAndBackground(2,13);printf("|password:");SetColorAndBackground(0,15);scanf("%s",&tom.pass);
				  len=strlen(tom.pass);
				  if(len>=6)
				  {
				  	do
				  	{
				  	gotoxy(5,13);SetColorAndBackground(2,13);printf("------------------------------");
				  	gotoxy(5,12);SetColorAndBackground(2,13);printf("|Confirm password :");SetColorAndBackground(0,15);scanf("%s",&to.pass);
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
			  if(a==DOWN)
			  {
			  j=j+1;
	 	 		gotoxy(25,j);printf("\b<---");
	 	 		if(j==5)
	 	 		{
	 	 			gotoxy(20,2);printf("<---");j=2;
				  }
				b=getch();
	 	 		 if(j==3 && b!=UP && b!=DOWN)
			  
	 	 		{i=3;
	 	 			do
	 	 			{
	 	 				system("color ");
	 	 				
	 	 				char za,rez,imz;
	 	 				clrscr();
	 	 			gotoxy(20,2);printf("WELCOME TO MY UNIVERSE");
	 	 			gotoxy(10,3);printf("[] GAME");
	 	 			gotoxy(10,4);printf("[] Exit");
	 	 			gotoxy(18,3);za=getch();
	 	 			
	 	 		    if(za==UP)
	 	 		    {
	 	 		    	i=i-1;
	 	 		    	gotoxy(18,i);printf("<---");sleep(1);
	 	 		    	rez=getch();
	 	 		    	if(i==4 && rez!=UP && rez!=DOWN )
	 	 		    	{
	 	 		    	az=az+1;
						  }
						  if(i=3 && rez!=UP && rez!=DOWN)
						  {
						  	
	 	 					int ranx,rany,u,v,count,up,right,left,down,i;
	 	 					char agz;
	 	 					clrscr();
	 	 					ranx=12;
	 	 					rany=30;
	 	 					u=rand()%50;
	 	 					v=rand()%40;
	 	 					count=0;
	 	 					gotoxy(4,5);printf("-----------------------------");
	 	 				gotoxy(4,7);printf("-----------------------------");
	 	 				gotoxy(4,6),printf("|");
	 	 				gotoxy(32,6);printf("|");
	 	 				gotoxy(5,6);printf("Name :");
	 	 				gotoxy(14,6);scanf("%s",&player);
	 	 				clrscr();
	 	 					gotoxy(5,2);printf("Loading");
	 	 		gotoxy(2,3);printf("  ---------------------");
	 	 		gotoxy(4,5);printf("---------------------");
	 	 		n=3;
	 	 		for(i=0;i<=10;i++)
	 	 		{
	 	 			n=n+1;
	 	 			gotoxy(n,4);SetColorAndBackground(0,15);printf(">");sleep(1);
				  }clrscr();
			
	 	 	gotoxy(6,4);printf("Use the following in the game ");
	 	 	gotoxy(6,5);printf("Press");
	 	 	gotoxy(6,6);printf("5:To move up                 ");
	 	 	gotoxy(6,7);printf("2:To move down       ");
	 	 	gotoxy(6,8);printf("1:To move to the left");
	 	 	gotoxy(6,9);printf("3:To move to the right");getch();
	 	 					do
	 	 					{
	 	 				
	 	 					clrscr();
	 	 					gotoxy(54,3);SetColorAndBackground(0,15);printf("|Player %s         |",player);
	 	 					gotoxy(54,4);SetColorAndBackground(0,15);printf("-------------------------");
	 	 					gotoxy(54,2);SetColorAndBackground(0,15);printf("-------------------------");
	 	 				    gotoxy(54,7);SetColorAndBackground(0,15);printf("--------------------------");
	 	 					gotoxy(54,6);SetColorAndBackground(0,15);printf("|FIRST SNAKE GAME EDITION|");;
	 	 					gotoxy(54,5);printf("--------------------------");
	 	 					gotoxy(54,9);printf("---------------------------");
	 	 					gotoxy(54,8);printf("|Press S to save your score|");
	 	 					gotoxy(54,11);printf("-----------------");
	 	 					gotoxy(54,10);printf("|SCORE: %d       |",score);
	 	 					gotoxy(54,13);printf("-----------------");
	 	 					gotoxy(54,12);printf("|press E to exit|");
	 	 					gotoxy(u,v);SetColor(11);printf("*");
	 	 					gotoxy(12,30); agz=getch();
	 	 					if(agz=='f' || agz=='F')
							{
								for(p=0;p<50;p++)
								{
									gotoxy(p,0);SetColorAndBackground(3,7);printf(" ");
								}
								for(q=0;q<50;q++)
								{
									gotoxy(50,q);SetColorAndBackground(3,7);printf(" ");
								}
								for(p=0;p<50;p++)
								{
									gotoxy(p-1,50);SetColorAndBackground(3,7);printf(" ");
								}
								for(q=0;q<50;q++)
								{
									gotoxy(50,q+1);SetColorAndBackground(3,7);printf(" ");
								}
								sleep(1);
							}
	 	 					if(agz=='S' || agz=='s')
	 	 					{
	 	 					
	 	 						fprintf(fp,"Score : %d",score);
	 	 						fputs("this is your score",fp);
	 	 						gotoxy(54,10);printf("score save");sleep(1);
	 	 						score1=score;
							}
	 	 					 if(agz==DOWN)
	 	 					 {
	 	 					 rany=rany+1;
							   gotoxy(ranx,rany);printf("^");
							 }
							 if(agz==UP)
							 {
							 	rany=rany-1;
							 	gotoxy(ranx,rany);printf("^");
							 	gotoxy(ranx,rany+1);printf("|");
							 }
							 if(agz==LEFT)
							 {
							    ranx=ranx-1;
 							 	gotoxy(ranx,rany);printf("<--");
							 }
							 if(agz==RIGHT)
							 {
							 	ranx=ranx+1;
							 	gotoxy(ranx,rany);printf("-->");
							 }
							 if(agz=='E' || agz=='e' )
							 {
							 	count=count+1;
							 }
							 if(ranx==u && rany==v)
							 {
							 	score=score+1;
							 	u=rand()%50;
	 	 					    v=rand()%40;
							 }
							 if(score==100)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|EXCELLENT|");
							 	gotoxy(54,21);printf("-----------");
							 }
							 if(score==50)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|VERY GOOD|");
							 	gotoxy(54,21);printf("-----------");
							 	
							 }
							 
							}while(count!=1);system("color f9");
						  }
					  }
	 	 			if(za==DOWN)
	 	 			{
	 	 				i=i+1;
	 	 				gotoxy(18,i);printf("<---");sleep(1);
	 	 				rez=getche();
	 	 				if(i==4 && rez!=UP && rez!=DOWN)
	 	 				{
	 	 					az=az+1;
						}
	 	 				if(i==3 && rez!=UP && rez!=DOWN)
	 	 				{
	 	 					int ranx,rany,u,v,count,up,right,left,down,i;
	 	 					char agz;
	 	 					clrscr();
	 	 					ranx=12;
	 	 					rany=30;
	 	 					u=rand()%50;
	 	 					v=rand()%40;
	 	 					count=0;
	 	 					gotoxy(4,5);printf("-----------------------------");
	 	 				gotoxy(4,7);printf("-----------------------------");
	 	 				gotoxy(4,6),printf("|");
	 	 				gotoxy(32,6);printf("|");
	 	 				gotoxy(5,6);printf("Name :");
	 	 				gotoxy(14,6);scanf("%s",&player);
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
				  gotoxy(6,4);printf("Use the following in the game ");
	 	 	gotoxy(6,5);printf("Press");
	 	 	gotoxy(6,6);printf("5:To move up                 ");
	 	 	gotoxy(6,7);printf("2:To move down       ");
	 	 	gotoxy(6,8);printf("1:To move to the left");
	 	 	gotoxy(6,9);printf("3:To move to the right");getch();
	 	 					do
	 	 					{
	 	 						system("color 9");
	 	 					clrscr();
	 	 					gotoxy(54,3);printf("|Player :%s             |",player);
	 	 					gotoxy(54,4);printf("----------------------------");
	 	 					gotoxy(54,2);printf("----------------------------");
	 	 					gotoxy(54,6);printf("FIRST SNAKE GAME EDITION");
	 	 					gotoxy(54,10);printf("Press S to save your score");
	 	 					gotoxy(54,12);printf("SCORE: %d",score);
	 	 					gotoxy(54,14);printf("press E to exit");
	 	 					gotoxy(u,v);printf("*");
	 	 					gotoxy(12,30); agz=getch();
	 	 			
	 	 					if(agz=='S' || agz=='s')
	 	 					{
	 	 						fp=fopen("RAOUL.txt","w");
	 	 						fprintf(fp,"Score : %d",score);
	 	 						fputs("this is your score",fp);
	 	 						gotoxy(54,10);printf("score save");sleep(1);
	 	 						score1=score;
							}
							
							 if(agz==DOWN)
	 	 					 {
	 	 					 rany=rany+1;
							   gotoxy(ranx,rany);printf("^");
							  
							 }
							 if(agz==UP)
							 {
							 	rany=rany-1;
							 	gotoxy(ranx,rany);printf("^");
							 	 gotoxy(ranx,rany+1);printf("|");
							 }
							 if(agz==LEFT)
							 {
							    ranx=ranx-1;
 							 	gotoxy(ranx,rany);printf("<--");
 							 	 
							 }
							 if(agz==RIGHT)
							 {
							 	ranx=ranx+1;
							 	gotoxy(ranx,rany);printf("-->");
							 }
							 if(agz=='E' || agz=='e' )
							 {
							 	count=count+1;
							 }
							 if(ranx==u && rany==v)
							 {
							 	score=score+1;
							 	u=rand()%50;
	 	 					    v=rand()%40;
							 }
							 if(score==100)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|EXCELLENT|");
							 	gotoxy(54,21);printf("-----------");
							 }
							 if(score==50)
							 {
							 	gotoxy(54,19);printf("-----------");
							 	gotoxy(54,20);printf("|VERY GOOD|");
							 	gotoxy(54,21);printf("-----------");
							 }
							}while(count!=1);
						  }
					  }
	 	 			
				  }while(az!=1);
			}
	 	 	
	 	 		if(j==4)
	 	 		{
	 	 			if(b!=DOWN && b!=UP)
	 	 			{
	 	 			y=y+1;
	 	 			z=z+1;
		    		}
				  }
			  }
	 		  }while(y!=1);
	 }while(z!=1);
	 fclose(fp); 
	 return 0;
 }
