#include<iostream>
#include<cstdlib>
#include<cmath>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<graphics.h>
#include<process.h>
#include<string.h>
#include<string>
#include<dos.h>
#include<ctime>
#include<sstream>
using namespace std;
 //time( &sec);
#define UP    72
#define DOWN  80
#define LEFT  75
#define RIGHT 77
#define ESCAPE 27
#define ENTER 13
void gotoxy(short x, short y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
	int a,b,c,d,i,j,k,l;
	char z;

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
void ive(void)
{
	
	gotoxy(0,0);SetColor(10);printf("%c",201);
for(i=1;i<=80;i++)
{
	gotoxy(i,0);SetColor(10);printf("%c",205);
	gotoxy(i,30);SetColor(10);printf("%c",205);
}
gotoxy(80,0);SetColor(10);printf("%c",187);
gotoxy(80,30);SetColor(10);printf("%c",188);
gotoxy(0,30);SetColor(10);printf("%c",200);
for(i=1;i<30;i++)
{
gotoxy(80,i);SetColor(10);printf("%c",186);
gotoxy(0,i);SetColor(10);printf("%c",186);
}
}
void up()
{
	gotoxy(c,d+1);printf(" ");
}
void down()
{
	gotoxy(c,d-1);printf(" ");
}
void left()
{
	gotoxy(c+1,d);printf(" ");
}
void right()
{
	gotoxy(c-1,d);printf(" ");
}
void leo()
{
	gotoxy(90,0);SetColor(13);printf("%c",201);
	gotoxy(131,0);SetColor(13);printf("%c",187);
	for(i=91;i<=130;i++)
	{
		gotoxy(i,0);SetColor(13);printf("%c",205);
		gotoxy(i,15);SetColor(13);printf("%c",205);
	}
	gotoxy(131,15);SetColor(13);printf("%c",188);
	gotoxy(90,15);SetColor(13);printf("%c",200);
	for(i=1;i<15;i++)
	{
		gotoxy(90,i);SetColor(13);printf("%c",186);
		gotoxy(131,i);SetColor(13);printf("%c",186);
	}
}
int main()
{
int ranx,rany,score=0,live=4;
char name[10000];
FILE *fp;
fp=fopen("Score.txt","a+");
SetConsoleTitle("Snake 1.3.0");
cout<<"Welcome to my Game"<<endl;
getch();system("cls");
cout<<"Enter your name"<<"\n";
scanf("%s",&name);
gotoxy(2,4);cout<<"play"<<endl;
system("cls");
c=12;d=13;
ive();
ranx=rand()%78+1;
rany=rand()%28+1;
gotoxy(30,15);SetColorAndBackground(14,0);cout<<"PRESS ENTER TO STAR";
getch();

gotoxy(30,15);SetColor(0);cout<<"                   ";
gotoxy(ranx,rany);SetColor(3);printf("\f");
i=0;
do
{
	gotoxy(ranx,rany);SetColor(3);printf("\f");
	gotoxy(100,1);SetColor(14);printf("Player information");
	gotoxy(92,2);SetColor(9);printf("Name:  %s",name);
	gotoxy(92,3);SetColor(9);cout<<"Score:"<<"  "<<score;
	gotoxy(92,4);SetColor(9);cout<<"Lives Left :"<<"  "<<live;
    gotoxy(92,5);SetColor(9);cout<<"Player Coordinates"<<" "<<"x:"<<c<<" "<<" y:"<<d;
    gotoxy(92,6);SetColor(9);cout<<"Food coordinates"<<" "<<"x:"<<ranx<<" "<<"y:"<<rany;
    gotoxy(92,7);SetColor(9);cout<<"Press S to Save ";
	ive();
SetColor(0);
//system("cls");
leo();
z=getch();
if(z==UP)
{up();right();left();
gotoxy(c,d-1);printf(" ");
gotoxy(c-1,d+1);printf(" ");
gotoxy(c+1,d+1);printf(" ");
	gotoxy(c-1,d);SetColor(14);cout<<"^";
	d-=1;
}
if(z==DOWN)
{down();gotoxy(c-1,d);printf(" ");
gotoxy(c,d+1);printf(" ");
gotoxy(c+1,d);printf(" ");
	gotoxy(c-1,d-1);SetColor(14);cout<<"v";d+=1;
}
if(z==LEFT)
{left();
gotoxy(c,d-1);printf(" ");
gotoxy(c-1,d);printf(" ");
gotoxy(c,d+1);printf(" ");
	gotoxy(c,d+1);SetColor(14);cout<<"<";c-=1;
}
 
if(z==RIGHT)
{right();
gotoxy(c+1,d);printf(" ");
gotoxy(c,d+1);printf(" ");
gotoxy(c,d-1);printf(" ");
	gotoxy(c,d+1);SetColor(14);cout<<">";c+=1;
	
}
if(c==ranx && d==rany)
{
	score=score+1;
	ranx=rand()%78+1;
rany=rand()%28+1;

}
if(z=='S' || z=='s')
{
fprintf(fp,"\nName %s",name);
fprintf(fp,"Best Score %d",score);
i=1;	
}
if(!getch())
{
	gotoxy(c,d);cout<<">";
}
if(c<=0 || d<=0 || d>=30 || c>=80)
{
	live-=1;
	c=12;d=13;
	gotoxy(c,d);
	
}
if(live==0)
{
	do
	{
	live=0;
	gotoxy(92,4);SetColor(9);cout<<"Lives Left :";
	gotoxy(35,15);SetColorAndBackground(2,10);cout<<"Game Over";
	gotoxy(30,16);SetColorAndBackground(3,10);cout<<"Press R to restart";
	gotoxy(30,17);SetColorAndBackground(4,10);cout<<"Press Exit to end.";
	z=getch();
	if(z=='R' || z=='r')
	{
	live=4;score=0;
	gotoxy(35,15);SetColorAndBackground(0,0);cout<<"          ";
	gotoxy(30,16);SetColorAndBackground(0,0);cout<<"                  ";
	gotoxy(30,17);SetColorAndBackground(0,0);cout<<"                  ";
	}
    }while(z!='R' || z!='r');

}
if(live<=0)
{
	live=0;
}
}while(z!=27);
if(i!=1)
{
fprintf(fp,"\nName %s",name);
fprintf(fp,"Best Score %d",score);
}
fclose(fp);
return 0;
}
