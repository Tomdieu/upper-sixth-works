#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
int x;
void g()
{
	getch();
}
void clear()
{
	system("cls");
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
COORD coord = {0,0};
void pe()
{
	
}
void line()
{
	printf("--------------------------------------");
}
void gotoxy(int x, int y)
{
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	int i,j,k,l;
	char a,b,c;

	gotoxy(0,5);printf(".");sleep(1);
	gotoxy(2,5);printf(".");sleep(1);
	gotoxy(2,0);printf(".");sleep(1);
	gotoxy(2,-1);printf(".");sleep(1);
    gotoxy(1,-1);printf(".");sleep(1);
	gotoxy(-2,-1);printf(".");sleep(1);
	gotoxy(-2,1);printf(".");sleep(1);
	gotoxy(3,5);printf(".");sleep(1);
	do
	{
		
a=getche();
if(a=='1')
{
	x=x+1;
i=0-i;
	gotoxy(-i,x);printf("\b-");
	a=getch();
	if(a=='5' && a=='1')
	{
		COORD coord = {0,0};
		x=x+1;
		gotoxy(i,x);printf("|\b");
		x++;
		i++;
	}
	i++;
}
if(a=='3')
{
	x=x+1;
i=i+1;
COORD coord = {0,0};
	gotoxy(i,x);printf("\b-");
}
if(a=='5')
{
	x=x+1;i=i+1;
	gotoxy(x,i);printf("\b|");
}
if(a=='2')
{
	i=0-i;
	x=x+0;
	gotoxy(x,i);printf("\b|");
}
}while(k!=4);
	line();
	return 0;	
}
