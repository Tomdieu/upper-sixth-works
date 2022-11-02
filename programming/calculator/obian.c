#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<zmouse.h>
#include<string.h>
#include<process.h>
#include"dos.h"

#define UP  72
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
struct paddle
{
	char ans;
	int ranx;
}z;
struct ball
{
	int i,x;
}y;
ivan()
{
	loop:for(y.i=0;y.i<=20;y.i++)
		{
			gotoxy(y.x,y.i);SetColorAndBackground(0,15);printf(" ");sleep(1);
			z.ans=getch();
			if(z.ans==RIGHT)
			{
			z.ranx=z.ranx+1;gotoxy(z.ranx,20);SetColorAndBackground(0,14);printf(" ");	
			}
			if(z.ans==LEFT)
			{
				z.ranx-=1;gotoxy(z.ranx,20);SetColorAndBackground(0,14);printf(" ");
			}
			if(!getch())
			{goto loop;
			//gotoxy(y.x,y.i);SetColorAndBackground(0,15);printf(" ");sleep(1);	
			}
		}
}
int main()
{
	int i,j,k,l,m,n,o;
	char a,b,c,d,e,f,g;
	z.ranx=6;
	do
	{
		y.x=rand()%20;
		loop:for(y.i=0;y.i<=20;y.i++)
		{
			ClearConsoleToColors(0,0);
			gotoxy(y.x,y.i);SetColorAndBackground(0,15);printf(" ");sleep(1);
			z.ans=getch();
			if(z.ans==RIGHT)
			{
			z.ranx=z.ranx+1;gotoxy(z.ranx,20);SetColorAndBackground(0,14);printf(" ");	
			}
			if(z.ans==LEFT)
			{
				z.ranx-=1;gotoxy(z.ranx,20);SetColorAndBackground(0,14);printf(" ");
			}
			if(z.ans==NULL)
			{
				ivan();
			//gotoxy(y.x,y.i);SetColorAndBackground(0,15);printf(" ");sleep(1);	
			}
		}
	}while(o!=1);
}
