#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<complex.h>
#include<windows.h>
#include<dos.h>
#include<limits.h>

#include<string.h>
void clrscr(){system("cls");}

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

void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
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
int main()
{
	int i,k,j,m;
	gotoxy(4,2);SetColorAndBackground(3,7);printf(" ");
	for(i=8;i>=1;i--)
	{
		gotoxy(i,4);SetColorAndBackground(3,7);printf(" ");
	}
	for(i=0;i>=20;i++)
	{
		gotoxy(1,i);SetColorAndBackground(3,7);printf(" ");
	}
	for(i=0;i>=8;i++)
	{
		gotoxy(20,i);SetColorAndBackground(3,7);printf(" ");
	}
}
