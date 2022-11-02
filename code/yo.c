#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<math.h>
#include<complex.h>

#define KEY_HOME        71
#define KEY_UP          72
#define KEY_PGUP        73
#define KEY_LEFT        75
#define KEY_CENTER      76
#define KEY_RIGHT       77
#define KEY_END         79
#define KEY_DOWN        80
#define KEY_PGDN        81
#define KEY_INSERT      82
#define KEY_DELETE      83
#define KEY_F1          59
#define KEY_F2          60
#define KEY_F3          61
#define KEY_F4          62
#define KEY_F5          63
#define KEY_F6          64
#define KEY_F7          65
#define KEY_F8          66
#define KEY_F9          67

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

void drawRectangle()
{
    int i;
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 78; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(78,0);
    printf("%c",187);
    for(i = 1; i < 25; i++){
        gotoxy(78, i);
        if(i == 6){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(78, 25);
    printf("%c",188);
    for(i = 77; i > 0; i--){
        gotoxy(i,25);
        if(i == 35){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > 0; i--){
        gotoxy(0,i);
        if(i == 6){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }

    for(i = 1; i < 78; i++){
        gotoxy(i,6);
        if(i == 35){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }

    for(i = 7; i < 25; i++){
        gotoxy(35,i);
        printf("%c",186);
    }
}
void t()
{
		int x,i;
		x=rand()%20;
	for(i=0;i<=20;i++)
	 ClearConsoleToColors(0,0);	
		gotoxy(x,i);SetColorAndBackground(0,4);printf(" ");sleep(1);
}
int main()
{int x,y,i,j,c=5;
char t;
x=rand()%20;
	//drawRectangle();
	error:
		{
		
    	i+=1;
    	if(i>20)
    	{
    		i=0;
    		x=rand()%20;
		}
	}
	do
	{
		clrscr();
	ClearConsoleToColors(0,0);
	gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
	gotoxy(x,i);printf("");
	/*SetColorAndBackground(0,4);*/
		t=getch();
		
		if(t==KEY_RIGHT)
		{c+=1;
		gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
		}
	    if(t==KEY_LEFT)
	    {c-=1;
	        gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
		}
		goto error;
		if(c<0)
		{c=0;
		gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
		}
		if(!getch())
		{
			gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
		}
		if(c>20)
		{c=20;
			gotoxy(c,20);/*SetColorAndBackground(0,15);*/printf("^__^");
		}
        if(t==EOF)
            {goto error;}
    }while(j!=1);
    
}
