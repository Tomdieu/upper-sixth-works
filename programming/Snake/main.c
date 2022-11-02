#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
void gotoxy(short x, short y)           //definition of gotoxy function//
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
clrscr(){system("cls");
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
int movex,movey,ranx=12,rany=13,i,j,k,l,m,n,z,lives=4,score=0,len;
char player[100],answer,b;
FILE *fp;
int main()
{
fp=fopen("GaMez.txt","r+");
	gotoxy(12,4);SetColorAndBackground(3,15);printf("----------------------------------------");
	gotoxy(12,5);SetColorAndBackground(3,15);printf("| Name :");
	gotoxy(12,6);printf("----------------------------------------");
	gotoxy(51,5);SetColorAndBackground(3,15);printf("|");
	gotoxy(20,5);SetColorAndBackground(13,0);scanf("%s",&player);
    system("cls");
    gotoxy(12,1);printf("Get Ready");//sleep(2);
    clrscr();
    movey=rand()%30;
    movex=rand()%50;
    len=strlen(player);
    ClearConsoleToColors(0,0);
    do
    {
    clrscr();
    gotoxy(51,1);SetColor(11);printf("_____________________________________");
	gotoxy(51,2);SetColor(11);printf("|Lives  : %d",lives);gotoxy(87,2);printf("|");gotoxy(65,2);printf("Score %d",score);
	gotoxy(51,3);SetColor(11);printf("|Player : %s",player);gotoxy(87,3);printf("|");
	gotoxy(51,4);SetColor(11);printf("|Press E to Exit");gotoxy(87,3);printf("|");
	gotoxy(51,5);SetColor(11);printf("|Press S to Save score");gotoxy(87,4);printf("|");
	gotoxy(51,6);SetColor(11);printf("|SNAKE COORDINATES X:%d  Y:%d",movex,movey);gotoxy(87,5);printf("|");
	gotoxy(51,7);SetColor(11);printf("|PLAYER COORDINATES X:%d  Y %d",ranx,rany);gotoxy(87,6);printf("|");
	gotoxy(51,8);SetColor(11);printf("|Press H for help");gotoxy(87,7);printf("|");
	gotoxy(51,9);SetColor(11);printf("|___________________________________");gotoxy(87,8);printf("|");
	gotoxy(movex,movey);SetColor(14);printf("::");
	gotoxy(ranx,rany);
	answer=getch();
	if(answer=='5')
	{
		rany=rany-1;
		gotoxy(ranx,rany);printf("^");
		gotoxy(ranx,rany+1);printf("|");
	}
	if(answer=='2')
	{
		rany=rany+1;
		gotoxy(ranx,rany);printf("^");

	}
	if(answer=='1')
	{ranx=ranx-1;
		gotoxy(ranx,rany);printf("<---");
	}
	if(answer=='3')
	{ ranx=ranx+1;
		gotoxy(ranx,rany);printf("--->");
	}
	if(ranx==movex && rany==movey)
	{
		score=score+1;
		movey=rand()%30;
    movex=rand()%50;
	}
	if(answer=='H' || answer=='h')
	{
		do
		{
			gotoxy(20,5);SetColor(10);printf(" To Control The snake press :");
			gotoxy(20,6);SetColor(10);printf("5:To move Up");
			gotoxy(20,7);SetColor(10);printf("2:To move Down");
			gotoxy(20,8);SetColor(10);printf("1:To move left ");
			gotoxy(20,9);SetColor(10);printf("3:To move right");
			answer=getch();
		}while(!getch());
	}
	if(answer=='s' || answer=='S' )
	{
		fprintf(fp,"%s   score %d ",player,score);
		fputs("",fp);
	}
	if(answer=='E' || answer=='e')
	{
		z=z+1;
	}
	if(!getch())
	{
		gotoxy(ranx,rany);printf("--->");
	}
	if(lives==0)
	{
		do
		{
			gotoxy(51,10);printf("Game Over");
			gotoxy(51,11);printf("press y to restart");
			gotoxy(51,12);printf("press n to exit");
			b=getch();
			if(b=='Y' || b=='y')
			{
				score=0;
				lives=4;
			}
			if(b=='n' || b=='N')
			{
				z=z+1;
			}
		}while(!getch());
	}
	if(ranx<0 || rany<0)
	{
		lives=lives-1;
		gotoxy(51,10);printf(" %d Lives left ",lives);//sleep(1);
		ranx=12;rany=13;
	}
		}while(z!=1);
		fclose(fp);
}
